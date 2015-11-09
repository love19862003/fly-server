/********************************************************************

  Filename:   RedisManager

  Description:RedisManager

  Version:  1.0
  Created:  20:8:2015   17:28
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "database/RedisManager.h"
#include "log/MyLog.h"
namespace ShareSpace {
  namespace DB {

    RedisManager::RedisManager(const Config& c) :DBManager(c) {

    }
    RedisManager::~RedisManager() {

    }

    bool RedisManager::addTask(const std::string& cmd, const RedisCall& cb,  PoolTag f ) {
      if(cmd.empty()) { MYASSERT(false, "redis cmd empty"); return false; }
      auto t = createRedisTask(cmd, cb);
      return pushTask(std::move(t), f);
    }

    bool RedisManager::addTask(const std::string& cmd, const std::string& arg, const RedisCall& cb,  PoolTag f) {
      if(cmd.empty()) { MYASSERT(false, "redis cmd empty"); return false; }
      std::vector<std::string> args;
      args.push_back(arg);
      auto t = createRedisTask(cmd, std::move(args), cb);
      return pushTask(std::move(t), f);
    }
    bool RedisManager::addTask(const std::string& cmd, const std::vector<std::string>& args, const RedisCall& cb,  PoolTag f) {
      if(cmd.empty()) { MYASSERT(false, "redis cmd empty"); return false; }
      auto t = createRedisTask(cmd, args, cb);
      return pushTask(std::move(t), f);
    } 
    bool RedisManager::addBlockTask(const std::string& cmd, const RedisCall& cb) {
      if(cmd.empty()) { MYASSERT(false, "redis cmd empty"); return false; }
      return redisBlockTask(m_config, cmd, cb);
    }
    bool RedisManager::addBlockTask(const std::string& cmd, const std::string& arg, const RedisCall& cb) {
      std::vector<std::string> args;
      args.push_back(arg);
      return addBlockTask(cmd, args, cb);
    }
    bool RedisManager::addBlockTask(const std::string& cmd, const std::vector<std::string>& args, const RedisCall& cb) {
      if(cmd.empty()) { MYASSERT(false, "redis cmd empty"); return false; }
      return redisBlockTask(m_config, cmd, args, cb);
    }

    DBManager::ThreadPointer RedisManager::createThread(const PoolPointer& pool) {
      return std::move(TaskThread::createRedisThread(pool, &m_config));
    }
   
  }
}