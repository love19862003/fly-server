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

       uv_loop_t*  m_loop;                  //�߳����ڵ�loop
       uv_thread_t m_thread_work;           //�߳�
       uv_async_t  m_asyncs[async_max_];    //�첽�ź�
       uv_mutex_t  m_mutexs[mutex_max_];    //��
       ThreadState m_state;                 //�߳�����״̬
       std::list<SessionPtr>  m_kickList;   //kick �б�
       std::list<SessionPtr>  m_newList;    //�����ӽ���������,�ȴ����䵽�������߳̽��ж�д����
       std::set<SessionPtr>   m_clientList; //�ͻ�����������
       std::list<SessionPtr>  m_stateList;  //״̬�иı�����ӣ������������ߵ��ߵ��߳��б��ȴ��ص����֪ͨ����
       std::set<SessionPtr>   m_onlieList;  //��ǰ���ߵ�����
       std::list<MessagePtr>  m_recvList;   //���߳��յ�����Ϣ�б�
       std::list<MessagePtr>  m_sendList;   //���߳���Ҫ�·�����Ϣ�б�
       unsigned int m_onlines;              //���ߵ�session����
       
       size_t m_totalRealRecv = 0;          //�յ����ֽ���
       size_t m_totalRealRecvCount = 0;     //�յ�����Ϣ��

       size_t m_totalRealSend = 0;          //��ʵ���͵��ֽ���
       size_t m_totalRealSendCount = 0;     //���͵���Ϣ��

       size_t m_totalSendCount = 0;         //�ܼ������͵���Ϣ��
       size_t m_totalSendSize = 0;          //�ܼ������͵��ֽ���

       size_t busy() const {
         return m_onlines > 0 ? (m_totalSendSize + m_totalRealRecv) / m_onlines : 0;
       }
       
     protected:

     private:
     };
  }
}
#endif