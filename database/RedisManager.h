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

      //�߳�ִ�в�ѯ cb�ڵ�ǰ�̻߳ص� cmd ��֧�ֶ�����
      bool addTask(const std::string& cmd, const RedisCall& cb,  PoolTag f = _pool_normal_);
      //�߳�ִ�в�ѯ cb�ڵ�ǰ�̻߳ص��� arg ֧�ֶ�����
      bool addTask(const std::string& cmd, const std::string& arg, const RedisCall& cb, PoolTag f = _pool_normal_);
      //�߳�ִ�в�ѯ cb�ڵ�ǰ�̻߳ص��� args ֧�ֶ�����
      bool addTask(const std::string& cmd, const std::vector<std::string>& args, const RedisCall& cb,  PoolTag f = _pool_normal_);

      //������ǰ�߳�ִ�� cb���н������ִ��  cmd ��֧�ֶ�����, �п��ܱ��ض�
      bool addBlockTask(const std::string& cmd, const RedisCall& cb);
      //������ǰ�߳�ִ�� cb���н������ִ��  arg ֧�ֶ�����
      bool addBlockTask(const std::string& cmd, const std::string& arg, const RedisCall& cb);
      //������ǰ�߳�ִ�� cb���н������ִ��  args ֧�ֶ�����
      bool addBlockTask(const std::string& cmd, const std::vector<std::string>& args, const RedisCall& cb);
    protected:
      //����redis client�߳�
      virtual ThreadPointer createThread(const PoolPointer& pool) override;
    private:
      RedisManager(const RedisManager&) = delete;
      RedisManager operator = (const RedisManager&) = delete;
    };
  }
}
#endif