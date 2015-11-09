/********************************************************************

  Filename:   NetThread

  Description:NetThread

  Version:  1.0
  Created:  31:3:2015   15:33
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetThread_H__
#define __NetThread_H__
#include <boost/noncopyable.hpp>
#include "net/NetCore.h"
#include "net/NetUV.h"
#include <list>
#include <set>
namespace ShareSpace {
  namespace NetSpace {
     class NetThread : public boost::noncopyable
     {
     public:
       enum ThreadState {
         _INIT_ = 0,
         _RUN_ = 1,
         _STOP_ = 2,
       };

       enum {
         async_add_session,
         async_stop_thread,
         async_send_message,
         async_kick_session,
         async_max_,
       };
       enum {
         mutex_send,
         mutex_recive,
         mutex_session,
         mutex_max_,
       };

       explicit  NetThread() : m_loop(nullptr), m_state(_INIT_), m_onlines(0){
         for(auto& m : m_mutexs) {
           uv_mutex_init(&m);
         }
         for(auto& a : m_asyncs) {
           a.data = this;
         }
       }
       ~NetThread() {
         m_kickList.clear();
         m_newList.clear();
         m_clientList.clear();
         m_stateList.clear();
         m_onlieList.clear();
         m_recvList.clear();
         m_sendList.clear();
       }

       uv_loop_t*  m_loop;                  //线程所在的loop
       uv_thread_t m_thread_work;           //线程
       uv_async_t  m_asyncs[async_max_];    //异步信号
       uv_mutex_t  m_mutexs[mutex_max_];    //锁
       ThreadState m_state;                 //线程运行状态
       std::list<SessionPtr>  m_kickList;   //kick 列表
       std::list<SessionPtr>  m_newList;    //新连接进来的链接,等待分配到本工作线程进行读写服务
       std::set<SessionPtr>   m_clientList; //客户端网络链接
       std::list<SessionPtr>  m_stateList;  //状态有改变的链接，新连进来或者掉线的线程列表。等待回调相关通知函数
       std::set<SessionPtr>   m_onlieList;  //当前在线的链接
       std::list<MessagePtr>  m_recvList;   //本线程收到的消息列表
       std::list<MessagePtr>  m_sendList;   //本线程需要下发的消息列表
       unsigned int m_onlines;              //在线的session数量
       
       size_t m_totalRealRecv = 0;          //收到的字节数
       size_t m_totalRealRecvCount = 0;     //收到的消息数

       size_t m_totalRealSend = 0;          //真实发送的字节数
       size_t m_totalRealSendCount = 0;     //发送的消息数

       size_t m_totalSendCount = 0;         //总计请求发送的消息数
       size_t m_totalSendSize = 0;          //总计请求发送的字节数

       size_t busy() const {
         return m_onlines > 0 ? (m_totalSendSize + m_totalRealRecv) / m_onlines : 0;
       }
       
     protected:

     private:
     };
  }
}
#endif