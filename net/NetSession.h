/********************************************************************

  Filename:   NetSession

  Description:NetSession

  Version:  1.0
  Created:  31:3:2015   16:03
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetSession_H__
#define __NetSession_H__
#include "net/NetCore.h"
#include "net/NetUV.h"
namespace ShareSpace {
  namespace NetSpace {
    class NetSession : public boost::noncopyable, public std::enable_shared_from_this<NetSession> {
    public:
      enum ConnectState {
        _session_init_,
        _session_connect_,
        _session_close_,
      };

      explicit NetSession(ThreadPtr t,
                          SessionId id,
                          size_t len,
                          const NetConfig& config)
                          : m_thread(t)
                          , m_sessionId(id)
                          , m_bufferSend(new NetBuffer(len))
                          , m_bufferRecv(new NetBuffer(len))
                          , m_waiteMessage(nullptr)
                          , m_state(_session_init_)
                          , m_config(config)
                          , m_inSend(false)
                          , m_reconn(config.m_autoReconnect)
      {
        m_tcp = podMalloc<uv_tcp_t>();
        m_connect = podMalloc<uv_connect_t>();
        m_write = podMalloc<uv_write_t>();
        m_shutDown = podMalloc<uv_shutdown_t>();
        m_tcp->data = this;
        m_connect->data = this;
        m_write->data = this;
        m_shutDown->data = this;
      }
      ~NetSession() {
        podFree(m_tcp);
        podFree(m_connect);
        podFree(m_write);
        podFree(m_shutDown);
        m_thread.reset();
        m_bufferSend.reset();
        m_bufferRecv.reset();
        m_waiteMessage.reset();
      }

      ThreadPtr thread() {
        if (!m_thread.expired()){
          return m_thread.lock();
        } else {
          return nullptr;
        }
      }

      uv_tcp_t*      m_tcp;       //tcp
      uv_connect_t*  m_connect;   //conn
      uv_write_t*    m_write;     //write
      uv_shutdown_t* m_shutDown;  //shut down

      WeakThreadPtr m_thread;       //session ���ڵ��շ��߳�
      SessionId m_sessionId;        //session �����ID
      BufferPointer m_bufferSend;   //�ȴ����͵�buffer
      BufferPointer m_bufferRecv;   //�ȵ����ܵ�buffer
      MessagePtr m_waiteMessage;    //�ȴ����ݵ���Ϣ
      ConnectState m_state;         //session��״̬
      const NetConfig& m_config;    //��Ӧ������
      bool m_inSend;                //�Ƿ��ڷ�����Ϣ
      bool m_reconn;                //�Ƿ��������(�ͻ���)

      size_t m_recvTotalLen = 0;    //�յ����ֽ���
      size_t m_recvTotalCount = 0;

      size_t m_sendTotalLen = 0;    //���͵��ֽ���
      size_t m_sendTotalCount = 0;  
    };

  }
}
#endif