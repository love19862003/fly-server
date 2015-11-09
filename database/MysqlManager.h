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
      //���һ������,������ɺ������߳�ִ�лص� cbΪ�ص�����
      bool addTask(const std::string& sql,const StmtCall& cb,  PoolTag f = _pool_normal_ );
      //���һ������,����ִ���ڹ����߳�ִ��cb
      bool addPreparTask(const std::string& cmd, const PStmtCall& cb,  PoolTag f = _pool_normal_);
      //���һ������,�ڵ�ǰ�߳�����ִ��
      bool addBlockTask(const std::string& sql, const StmtCall& cb);
      //���һ������,�ڵ�ǰ�߳�����ִ��
      bool addBlockPreparTask(const std::string& cmd, const PStmtCall& cb);
    protected:
      //����mysql client�߳�
      virtual ThreadPointer createThread(const PoolPointer& pool) override;
    private:
      MysqlManager(const MysqlManager&) = delete;
      MysqlManager operator = (const MysqlManager&) = delete;
    };
  }
}
#endif