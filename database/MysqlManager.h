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
#ifndef __MysqlManager_H__
#define __MysqlManager_H__
#include "database/DBManager.h"
#include "database/MysqlDefine.h"
namespace ShareSpace {
  namespace DB {
    class MysqlManager : public DBManager
    {
    public:
      explicit MysqlManager(const Config& c);
      virtual ~MysqlManager();
      //添加一个任务,任务完成后在主线程执行回调 cb为回调函数
      bool addTask(const std::string& sql,const StmtCall& cb,  PoolTag f = _pool_normal_ );
      //添加一个任务,任务执行在工作线程执行cb
      bool addPreparTask(const std::string& cmd, const PStmtCall& cb,  PoolTag f = _pool_normal_);
      //添加一个任务,在当前线程阻塞执行
      bool addBlockTask(const std::string& sql, const StmtCall& cb);
      //添加一个任务,在当前线程阻塞执行
      bool addBlockPreparTask(const std::string& cmd, const PStmtCall& cb);
    protected:
      //创建mysql client线程
      virtual ThreadPointer createThread(const PoolPointer& pool) override;
    private:
      MysqlManager(const MysqlManager&) = delete;
      MysqlManager operator = (const MysqlManager&) = delete;
    };
  }
}
#endif