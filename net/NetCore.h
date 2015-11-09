/********************************************************************

  Filename:   NetCore

  Description:NetCore

  Version:  1.0
  Created:  31:3:2015   14:08
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetCore_H__
#define __NetCore_H__
#include <functional>
#include <memory>
#include <list>
#include <map>
#include "net/NetMessage.h"
namespace ShareSpace {
  namespace NetSpace {
 
    template< typename PODTYPE>
    PODTYPE* podMalloc() {
      return static_cast<PODTYPE*>(malloc(sizeof(PODTYPE))); 
    }
    template< typename PODTYPE>
    void podFree(PODTYPE* t) {
      free(t);
    }
   

    enum ServiceFlag{
      _SERVER_FLAG_,
      _CLIENT_FLAG_,
    };
    // net config
    struct NetConfig {
      std::string  m_name;
      std::string  m_address;
      int m_port;
      int m_timeOut;
      int m_maxConnect;
      ServiceFlag  m_serviceType;
      bool         m_autoReconnect;
    };

    typedef std::string NetName;
    typedef std::shared_ptr<NetBlock> MessagePtr;
    typedef std::function<void(const NetName&, const MessagePtr&)> messageCall;
    typedef std::function<void(const NetName&, const SessionId&)>  sessionCall;
    typedef std::function<MessagePtr(const SessionId&, size_t)> FunMakeBlock;
    struct NetCallBack{
      messageCall m_messageCall;
      sessionCall m_connectCall;
      sessionCall m_closeCall;
      FunMakeBlock m_makeBlockCall;
    };
    typedef std::unique_ptr<NetCallBack> NetCallBackPtr;
   
  }
}
#endif