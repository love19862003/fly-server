/********************************************************************

  Filename:   MysqlManager

  Description:MysqlManager

  Version:  1.0
  Created:  20:8:2015   17:27
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "database/MysqlManager.h"
#include "log/MyLog.h"
namespace ShareSpace {
  namespace DB {

    MysqlManager::MysqlManager(const Config& c) : DBManager(c) {

    }
    MysqlManager::~MysqlManager() {

    }

    bool MysqlManager::addTask(const std::string& sql, const StmtCall& cb,  PoolTag f /* = TaskPool::_pool_normal_ */) {
      if(sql.empty()) { MYASSERT(false, "task sql empty"); return false; }
      auto t = createQueryTask(sql, cb);
      return pushTask(std::move(t), f);
    }
    bool MysqlManager::addPreparTask(const std::string& cmd, const PStmtCall& cb,  PoolTag f /* = TaskPool::_pool_normal_ */) {
      if(cmd.empty()) { MYASSERT(false, "task cmd empty"); return false; }
      auto t = createCommandTask(cmd, cb);
      return pushTask(std::move(t), f);
    }
    bool MysqlManager::addBlockTask(const std::string& sql, const StmtCall& cb) {
      if(sql.empty()) { MYASSERT(false, "task sql empty"); return false; }
      return mysqlBlockTask(m_config, sql, cb);
    }
    bool MysqlManager::addBlockPreparTask(const std::string& cmd, const PStmtCall& cb) {
      if(cmd.empty()) { MYASSERT(false, "prepar task sql empty"); return false; }
      if(!cb) { MYASSERT(false, "prepar call function is null"); return false; }
      return mysqlBlockPreparTask(m_config, cmd, cb);
    }
    DBManager::ThreadPointer MysqlManager::createThread(const PoolPointer& pool){
      return std::move(TaskThread::createMysqlThread(pool, &m_config));
    }

  }
}