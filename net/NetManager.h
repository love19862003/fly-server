/********************************************************************

  Filename:   NetManager

  Description:NetManager

  Version:  1.0
  Created:  31:3:2015   19:14
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetManager_H__
#define __NetManager_H__
#include "net/NetCore.h"
namespace ShareSpace {
  namespace NetSpace {
    class NetService;
    class NetManager {
    public:

      explicit NetManager(unsigned int t);
      virtual ~NetManager();
      //开始服务
      bool start();

      //关闭网络
      void stop();

      //增加网络
      bool add(const NetConfig& config, NetCallBackPtr calls);

      //移除一个网络
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
    protected:
    private:
      NetManager(const NetManager&) = delete;
      NetManager& operator = (const NetManager&) = delete;
      NetManager& operator = (NetManager&&) = delete;
      std::unique_ptr<NetService> m_service;
    };
  }
}


#endif