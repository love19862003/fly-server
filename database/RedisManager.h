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
#ifndef __RedisManager_H__
#define __RedisManager_H__
#include "database/DBManager.h"
#include "database/RedisDefine.h"
namespace ShareSpace {
  namespace DB {
    class RedisManager : public DBManager {
    public:
      explicit RedisManager(const Config& c);
      virtual ~RedisManager();

      //线程执行查询 cb在当前线程回调 cmd 不支持二进制
      bool addTask(const std::string& cmd, const RedisCall& cb,  PoolTag f = _pool_normal_);
      //线程执行查询 cb在当前线程回调。 arg 支持二进制
      bool addTask(const std::string& cmd, const std::string& arg, const RedisCall& cb, PoolTag f = _pool_normal_);
      //线程执行查询 cb在当前线程回调。 args 支持二进制
      bool addTask(const std::string& cmd, const std::vector<std::string>& args, const RedisCall& cb,  PoolTag f = _pool_normal_);

      //阻塞当前线程执行 cb在有结果立即执行  cmd 不支持二进制, 有可能被截断
      bool addBlockTask(const std::string& cmd, const RedisCall& cb);
      //阻塞当前线程执行 cb在有结果立即执行  arg 支持二进制
      bool addBlockTask(const std::string& cmd, const std::string& arg, const RedisCall& cb);
      //阻塞当前线程执行 cb在有结果立即执行  args 支持二进制
      bool addBlockTask(const std::string& cmd, const std::vector<std::string>& args, const RedisCall& cb);
    protected:
      //创建redis client线程
      virtual ThreadPointer createThread(const PoolPointer& pool) override;
    private:
      RedisManager(const RedisManager&) = delete;
      RedisManager operator = (const RedisManager&) = delete;
    };
  }
}
#endif