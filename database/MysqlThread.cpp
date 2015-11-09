/********************************************************************

  Filename:   MysqlThread

  Description:MysqlThread

  Version:  1.0
  Created:  20:8:2015   15:03
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "database/TaskThread.h"
#include "database/MysqlDefine.h"
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/exception.h>
#include <cppconn/resultset_metadata.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/connection.h>
#include <cppconn/warning.h>
#include <cppconn/metadata.h>
#include <cppconn/driver.h>
#ifdef _WIN32
#include <errmsg.h> // for CR_SERVER_GONE_ERROR enum
#include <mysqld_error.h>
#else
#include <mysql/errmsg.h>
#include <mysql/mysqld_error.h>
#endif

#include <utility>
#include "log/MyLog.h"
namespace ShareSpace {
  namespace DB {

    static std::mutex mysql_driver_mutex;
    static sql::Driver* getMysqlDriver() {
      std::lock_guard<std::mutex> lock(mysql_driver_mutex);
      return sql::mysql::get_driver_instance();
    }
    static sql::Connection* getMysqlConnection(sql::ConnectOptionsMap& op) {
      std::lock_guard<std::mutex> lock(mysql_driver_mutex);
      sql::Driver* d = sql::mysql::get_driver_instance();
      return d->connect(op);
    }
    static sql::Connection* mysqlConnection(const Config& c) {
      try {
        sql::ConnectOptionsMap option;
        option["hostName"] = c.m_url;
        option["userName"] = c.m_user;
        option["password"] = c.m_password;
        option["CLIENT_INTERACTIVE"] = true;
        //	option["CLIENT_MULTI_STATEMENTS"] = true;
        sql::Connection* conn = getMysqlConnection(option);;
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        stmt->execute("USE " + c.m_db_name);
        LOGINFO("try to reconnect :(",
                c.m_db_name,
                ":",
                c.m_user,
                ":",
                c.m_url,
                " OK!");
        return conn;
      } catch(const sql::SQLException &e) {
        LOGERROR("sql::SqlExcetion", e.what(), " error code: ", e.getErrorCode());
        std::cout << "sql::SqlExcetion:" << e.what() << "error code" << e.getErrorCode() << std::endl;
        return nullptr;
      } catch(std::runtime_error &e) {
        LOGERROR("# ERR: ", e.what());
        return nullptr;
      } catch(...) {
        LOGERROR("# ERR: ");
        return nullptr;
      }
      return nullptr;
    }

    class MysqlThread : public TaskThread {
    public:
      enum { DEATH_LOCK_CALL_COUNT = 10, };
      explicit MysqlThread(PoolPointer pool, const Config* c)
        : TaskThread(pool, c) 
        , m_connection(nullptr)
        , m_connected(false) 
        , m_deathLockCount(DEATH_LOCK_CALL_COUNT) {

      }
      virtual ~MysqlThread() { }
    protected:
      virtual void doInit() override {
        getMysqlDriver()->threadInit();
      }
      virtual void doRun() override {
        if(!m_connected) {
          reconnect();
        }
        if(m_connected) {
          runTask();
        }
      }
      virtual void doExit() override {
        m_connection.reset();
        getMysqlDriver()->threadEnd();
      }
      virtual void doReset() override {
        m_connected = false;
      }
    private:
      void runTask() {
        if(!m_currentTask) { m_currentTask = std::move(m_pool->getTask()); }
        if(!m_currentTask) {
#ifdef _DEBUG
          std::this_thread::sleep_for(std::chrono::milliseconds(10)); return;
#else
          std::this_thread::yield(); return;
#endif // _DEBUG
        }
        try {
          m_currentTask->bindThread(this);
          bool hasCallBack = m_currentTask->hasCall();
          switch(m_currentTask->taskType()) {
          case Task::_MYSQL_STATEMENT_:{
            sql::Statement* stmt =  m_connection->createStatement();
            stmt->execute(m_currentTask->command());
            m_currentTask->action(std::move(boost::any(stmt)));
            m_pool->doneTask(std::move(m_currentTask));
            m_currentTask = nullptr;
          } break;
          case Task::_MYSQL_PREPARE_STATEMENT_:{
            std::unique_ptr<sql::PreparedStatement> pstmt(m_connection->prepareStatement(m_currentTask->command()));
            m_currentTask->action(std::move(boost::any(pstmt.get())));
            m_pool->doneTask(std::move(m_currentTask));
            m_currentTask = nullptr;
          } break;
          default:
            break;
          }
 
          //µÈ´ý»Øµ÷
          if (hasCallBack){ wait(); }
        } catch(const sql::SQLException &ExceptObj) {
          LOGERROR("multi query SQL error : ",
                   ExceptObj.what(), " error_code : ",
                   ExceptObj.getErrorCode(),
                   "sql:",
                   m_currentTask != nullptr ? m_currentTask->command() : "null");
          if(ExceptObj.getErrorCode() == CR_SERVER_GONE_ERROR) {
            m_connected = false;
          } else if(ExceptObj.getErrorCode() == ER_LOCK_DEADLOCK) {
            --m_deathLockCount;
            if(m_deathLockCount <= 0) {
              m_currentTask->error(ExceptObj.getErrorCode());
              m_pool->doneTask(std::move(m_currentTask));
              m_currentTask = nullptr;
              m_deathLockCount = DEATH_LOCK_CALL_COUNT;
            }
          } else {
            // error
            m_currentTask->error(ExceptObj.getErrorCode());
            m_pool->doneTask(std::move(m_currentTask));
            m_currentTask = nullptr;
          }
        }
      }

      void reconnect() const {
        m_connection.reset(mysqlConnection(*m_config));
        if (m_connection){ m_connected = !m_connection->isClosed();} 
        else { m_connected = false; }
      }
    private:
      mutable std::unique_ptr<sql::Connection> m_connection;
      mutable bool m_connected;
      int m_deathLockCount;
    };

    TaskThread::ThreadPointer TaskThread::createMysqlThread(PoolPointer pool, const Config* c) {
      ThreadPointer t(new MysqlThread(pool, c));
      return std::move(t);
    }

    bool mysqlBlockTask(const Config& c, const std::string& sql, const StmtCall& fun) {
      MYASSERT(!sql.empty(), "sql is empty");
      std::unique_ptr<sql::Connection> conn(mysqlConnection(c));
      if(!conn) { LOGERROR("conn mysql error"); return false; }
      std::unique_ptr<sql::Statement> stmt(conn->createStatement());
      if(!stmt) { LOGERROR("conn mysql error"); return false; }
      stmt->execute(sql);
      if(fun) { fun(std::ref(stmt)); }
      return true;
    }
    bool mysqlBlockPreparTask(const Config& c, const std::string& cmd, const PStmtCall& fun) {
      MYASSERT(!cmd.empty(), "cmd is empty");
      MYASSERT(nullptr!= fun, "PStmtCall is empty");
      std::unique_ptr<sql::Connection> conn(mysqlConnection(c));
      if(!conn) { LOGERROR("conn mysql error"); return false; }
      std::unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement(cmd));
      if(!pstmt) { LOGERROR("conn mysql error"); return false; }
      fun(pstmt.get());
      return true;
    }
  }
}