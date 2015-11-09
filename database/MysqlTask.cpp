/********************************************************************

  Filename:   MysqlTask

  Description:MysqlTask

  Version:  1.0
  Created:  20:8:2015   15:48
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "database/Task.h"
#include "log/MyLog.h"
#include "database/MysqlDefine.h"
#include <stdexcept>
#include <boost/locale.hpp>
#include <boost/locale/encoding.hpp>
#include <cppconn/exception.h>
#include <cppconn/resultset_metadata.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/connection.h>
#include <cppconn/warning.h>
#include <cppconn/metadata.h>
#include <mysql_driver.h>
#include <mysql_connection.h>
#ifdef _WIN32
#include <errmsg.h> // for CR_SERVER_GONE_ERROR enum
#include <mysqld_error.h>
#else
#include <mysql/errmsg.h>
#include <mysql/mysqld_error.h>
#endif
#include "database/TaskThread.h"
namespace ShareSpace {
  namespace DB {

    class TaskQueryMysql : public Task
    {
    public:
      explicit TaskQueryMysql(const std::string& cmd, const StmtCall& fun) 
        : Task(cmd, _MYSQL_STATEMENT_), m_stmt(nullptr), m_fun(fun), m_thread(nullptr){

      }
      virtual ~TaskQueryMysql() { m_stmt.reset(); }
    protected:
      virtual void doNotify() override { if(m_thread) { m_thread->notify(); } }
      virtual void doBindThread(TaskThread* t)  override { m_thread = t; }
      virtual void doCall() override { m_fun(m_stmt); }
      virtual bool hasCallBack() const override { return m_fun != nullptr; }
      virtual const std::vector<std::string>* doArgs() const override { return nullptr; }
      virtual void doAction(const boost::any& any) override{
        m_stmt.reset(boost::any_cast<sql::Statement*>(any));
      }
    private:
      TaskQueryMysql(TaskQueryMysql const&) = delete;
      TaskQueryMysql& operator = (const TaskQueryMysql&) = delete;
      std::unique_ptr<sql::Statement> m_stmt;
      StmtCall m_fun;
      TaskThread* m_thread;
    };

    class TaskCommandMysql : public Task {
    public:
      explicit TaskCommandMysql(const std::string& cmd, const PStmtCall& fun)
        : Task(cmd, _MYSQL_PREPARE_STATEMENT_), m_fun(fun) {

      }
      virtual ~TaskCommandMysql() { }
    protected:
      virtual void doCall() override { ; }
      virtual bool hasCallBack() const override{ return false; }
      virtual void doNotify() override { }
      virtual void doBindThread(TaskThread* /*t*/)  override { }
      virtual const std::vector<std::string>* doArgs() const override { return nullptr; }
      virtual void doAction(const boost::any& any) override {
        m_fun(boost::any_cast<sql::PreparedStatement*>(any));
      }
    private:
      TaskCommandMysql(TaskCommandMysql const&) = delete;
      TaskCommandMysql& operator = (const TaskCommandMysql&) = delete;
      PStmtCall m_fun;
    };


    std::unique_ptr<Task> createQueryTask(const std::string& str, const StmtCall& fun) {
      std::unique_ptr<Task> t(new TaskQueryMysql(str, fun));
      return  std::move(t);
    }
    std::unique_ptr<Task> createCommandTask(const std::string& command, const PStmtCall& fun) {
      std::unique_ptr<Task> t(new TaskCommandMysql(command, fun));
      return  std::move(t);
    }

  }
}