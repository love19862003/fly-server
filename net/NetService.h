/********************************************************************

  Filename:   NetService

  Description:NetService

  Version:  1.0
  Created:  31:3:2015   18:51
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetService_H__
#define __NetService_H__
#include <boost/noncopyable.hpp>
#include "net/NetCore.h"
namespace ShareSpace {
  namespace NetSpace {
    class NetServiceData;
    class NetService : public boost::noncopyable
    {
    public:
      explicit NetService(unsigned int t);
      virtual ~NetService();
      //开始服务
      bool start();

      //关闭网络
      void stop();

      //增加网络
      bool add(const NetConfig& config, NetCallBackPtr calls);

      //移除网络
      bool remove(const NetName& name);
      
      //获取消息和状态改变
      bool poll();
      
      //发送消息
      bool send(const MessagePtr& msg);
      //发送消息
      bool send(const NetName& name, const MessagePtr& msg);
      
      //kick
      bool kick(const SessionId& id);
      
      //是否在run
      bool isRun() const;

    public:
      //在工作线程执行
      void serviceStop();

      // 在工作线程执行
      void serviceRun();
    protected:

    private:
      std::unique_ptr<NetServiceData> m_serviceData;
    };
  }
}

#endif