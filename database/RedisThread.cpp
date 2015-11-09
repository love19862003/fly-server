/********************************************************************

  Filename:   RedisThread

  Description:RedisThread

  Version:  1.0
  Created:  20:8:2015   17:47
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifdef WIN32
 //#define  USE_DL_PREFIX
 //#define  LACKS_STDLIB_H
 #define  NO_QFORKIMPL
 //#define  WIN32_IOCP
//#pragma comment(lib,"Win32_Interop.lib")
#include <Win32_Interop/win32fixes.h>
#include "redis\win32_Interop\Win32_FDAPI.h"
#endif
#include <hiredis/hiredis.h>
#include "database/TaskThread.h"
#include "database/RedisDefine.h"
#include "log/MyLog.h"
#ifdef _DEBUG
#include <iostream>
#endif // _DEBUG
    ///FORCE:MULTIPLE
typedef redisContext RediosConnect;
typedef redisReply RedisReply;
namespace ShareSpace {
  namespace DB {

    //根据RedisReply 获取redis的执行结果
    static RedisResult makeResult(const RedisReply* reply) {
      MYASSERT(reply != nullptr, "redis replay is null");
      switch(reply->type) {
      case REDIS_REPLY_STRING:{
        return std::move(RedisResult(RedisResultData(RedisResultData::RDT_STRING, reply->str, reply->len)));
      } break;
      case REDIS_REPLY_ARRAY: {
        RedisResult result;
        for(size_t i = 0; i < reply->elements; ++i) {
          result += makeResult(reply->element[i]);
        }
        return std::move(result);
      } break;
      case REDIS_REPLY_INTEGER: {
        return std::move(RedisResult(RedisResultData(static_cast<int>(reply->integer))));
      } break;
      case REDIS_REPLY_NIL: {
        return std::move(RedisResult(RedisResultData(RedisResultData::RDT_NIL)));
      } break;
      case REDIS_REPLY_STATUS: {
        return std::move(RedisResult(RedisResultData(RedisResultData::RDT_STATUS, reply->str, reply->len)));
      } break;
      case REDIS_REPLY_ERROR: {
        return std::move(RedisResult(RedisResultData(RedisResultData::RDT_ERROR, reply->str, reply->len)));
      } break;
      default:
        return std::move(RedisResult(RedisResultData(RedisResultData::RDT_TYPE_ERROR)));
      }
    }
    //获取一个redis连接
    static RediosConnect* getRedisConnect(const Config& c) {
      std::string ip = c.m_url;
      auto pos  = c.m_url.find_first_of(":");
      ip = c.m_url.substr(0, pos);
      unsigned int port = std::stoi(c.m_url.substr(pos+1, c.m_url.length() - pos));
#ifdef _DEBUG
      LOGDEBUG("redis connect ip:", ip, " port:", port);
#endif
      timeval tv;
      tv.tv_sec = 20;
      tv.tv_usec = 1000;
      RediosConnect* conn = redisConnectWithTimeout(ip.data(), port, tv);
      //RediosConnect* conn = redisConnect(ip.data(), port);
      if(nullptr == conn || conn->err) {
        LOGERROR("Connect redisServer :", c.m_url, " failed error", nullptr != conn ? conn->errstr : " no memory");
        if(conn) { redisFree(conn); }
        return nullptr;
      }
//       RedisReply* replay = static_cast<RedisReply*>(redisCommand(conn, "select %d", c.m_index));
//       if(!replay || replay->type != REDIS_REPLY_STATUS) {
//         if(replay) {
//           if(replay->type == REDIS_REPLY_NIL) {
//             MYASSERT(false, "not found db index ", c.m_index);
//             LOGERROR("redis server not found db index ", c.m_index);
//           }
// #ifdef _DEBUG
//           std::cout << makeResult(replay).debug() << std::endl;
// #endif // _DEBUG
//           freeReplyObject(replay);
//         }
//         if(conn) { redisFree(conn); }
//         return nullptr;
//       }
//       LOGDEBUG("select redis db:", c.m_index);
//       if(replay) { freeReplyObject(replay); }
      return conn;
    }


    //hiredis 查询结果转换成RedisResult
    static RedisResult* makeResultPointer(const RedisReply* reply) {
      if(!reply) { return nullptr; }
      return  new RedisResult(makeResult(reply));
    }

    //执行redis命令
    static RedisReply* doRedisCommand(RediosConnect*conn, const std::string& command) {
      return static_cast<RedisReply*>(redisCommand(conn, command.data()));
    }
    //批量执行redis命令
    static RedisReply* doRedisCommand(RediosConnect*conn, const std::string& command, const std::vector<std::string>& args) {
      if (!conn){return nullptr;}
      if(command.empty()) { return  nullptr; }
      if(args.empty()) { return doRedisCommand(conn, command); }
      int argc = 1 + args.size();
      char** argv = new char*[argc];
      size_t* argvlen = new size_t[argc];
      int index = 0;
      argvlen[index] = command.length();
      argv[index] = new char[argvlen[index]];
      memset(argv[index], 0, argvlen[index]);
      memcpy(argv[index], command.data(), argvlen[index]);
      ++index;
      for(auto& str : args) {
        argvlen[index] = str.length();
        argv[index] = new char[argvlen[index]];
        memset(argv[index], 0, argvlen[index]);
        memcpy(argv[index], str.data(), argvlen[index]);
        ++index;
      }
      RedisReply* result = static_cast<RedisReply*>(redisCommandArgv(conn, argc, const_cast<const char**>(argv), const_cast<const size_t*>(argvlen)));
      do {
        --index;
        delete[] argv[index];
      } while(index > 0);
      delete[] argv;
      delete[] argvlen;
      return result;
    }
    //当前线程同步执行任务
    bool redisBlockTask(const Config& c, const std::string& cmd, const RedisCall& fun) {
      bool r = false;
      RediosConnect* conn = getRedisConnect(c);
      if (conn){
        RedisReply* result = doRedisCommand(conn, cmd);
        if (result){
          if(result->type == REDIS_REPLY_ERROR) {
            LOGERROR("do command :", cmd, " failed with:", std::string(result->str, result->len));
            MYASSERT(false);
          } else {
            fun(std::move(RedisResult::ResultPoniter(makeResultPointer(result))));
            r = true;
          }
          freeReplyObject(result);
        }
        redisFree(conn);
      }
      return r;
    }
    //当前线程同步执行任务
    bool redisBlockTask(const Config& c, const std::string& cmd, const std::vector<std::string>& args, const RedisCall& fun) {
      bool r = false;
      if(args.empty()) { return false; }
      RediosConnect* conn = getRedisConnect(c);
      if(conn) {
        RedisReply* result = doRedisCommand(conn, cmd, args);
        if(result) {
          if(result->type == REDIS_REPLY_ERROR) {
            LOGERROR("do command :", cmd, " failed with:", std::string(result->str, result->len));
            MYASSERT(false);
          } else {
            fun(std::move(RedisResult::ResultPoniter(makeResultPointer(result))));
            r = true;
          }
          freeReplyObject(result);
        }
        redisFree(conn);
      }
      return r;
    }

    class RedisThread : public TaskThread
    {
    public:
      explicit RedisThread(PoolPointer pool, const Config* c)
      : TaskThread(pool, c)
      , m_conn(nullptr)
      , m_connected(false){

      }
      virtual ~RedisThread() {
        if(m_conn) { freeConnect(); }
      }
    protected:
      virtual void doInit() override {
        reconnect();
      }
      virtual void doRun() override {
        if (!m_connected){ reconnect();}
        if (m_connected){ runTask();}
      }
      virtual void doExit() override {
        if(m_conn) { redisFree(m_conn); }
        m_conn = nullptr;
        m_connected = false;
      }
      virtual void doReset() override {
        m_connected = false;
      }
    protected:
      void runTask() {
        if(!m_currentTask) { m_currentTask = std::move(m_pool->getTask()); }
        if(!m_currentTask) {
#ifdef _DEBUG
          std::this_thread::sleep_for(std::chrono::milliseconds(10)); return;
#else
          std::this_thread::yield(); return;
#endif // _DEBUG

        }
        switch(m_currentTask->taskType()) {
        case Task::_REDIS_:{
          RedisReply* result = doRedisCommand(m_conn, m_currentTask->command().data());
          if (result){
            if(result->type == REDIS_REPLY_ERROR) {
              m_currentTask->error(Task::CMD_ERROR);
              MYASSERT(false);
              LOGERROR("do command :", m_currentTask->command(), " failed with:", std::string(result->str, result->len));
            }
            m_currentTask->action(std::move(boost::any(makeResultPointer(result))));
            freeReplyObject(result);
          } else {
            m_currentTask->error(m_conn->err);
            LOGERROR("do command :", m_currentTask->command(), " failed error", nullptr != m_conn ? m_conn->errstr : " no memory");
            freeConnect();
          }
          m_pool->doneTask(std::move(m_currentTask));
          m_currentTask = nullptr;
        }break;
        case Task::_REDIS_ARGS:{
          auto args = m_currentTask->args();
          if (!args || args->empty()){
            m_currentTask->error(Task::CMD_ERROR);
            MYASSERT(false);
            LOGERROR("do command :", m_currentTask->command(), " failed with no args");
            return;
          } else {
            RedisReply* result = doRedisCommand(m_conn, m_currentTask->command(), *args);
            if(result) {
              if(result->type == REDIS_REPLY_ERROR) {
                m_currentTask->error(Task::CMD_ERROR);
                MYASSERT(false);
                LOGERROR("do command :", m_currentTask->command(), " failed with:", std::string(result->str, result->len));
              }
              m_currentTask->action(std::move(boost::any(makeResultPointer(result))));
              freeReplyObject(result);
            } else {
              m_currentTask->error(m_conn->err);
              LOGERROR("do command :", m_currentTask->command(), " failed error", nullptr != m_conn ? m_conn->errstr : " no memory");
              freeConnect();
            }
          }
          m_pool->doneTask(std::move(m_currentTask));
          m_currentTask = nullptr;
        }break;
        default:
          MYASSERT(false, "current task type error with type");
          m_currentTask = nullptr;
          break;
        }
      }
      void freeConnect() {
        redisFree(m_conn);
        m_conn = nullptr;
        m_connected = false;
      }
    protected:
      void reconnect() {
        if(m_conn) { freeConnect(); }
        m_conn = getRedisConnect(*m_config);
        m_connected = nullptr != m_conn;
      }
    private:
      RediosConnect* m_conn;
      bool m_connected = false;
    };
    TaskThread::ThreadPointer TaskThread::createRedisThread(PoolPointer pool, const Config* c) {
      ThreadPointer t(new RedisThread(pool, c));
      return std::move(t);
    }



  }
}
