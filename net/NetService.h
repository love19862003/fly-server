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
      //��ʼ����
      bool start();

      //�ر�����
      void stop();

      //��������
      bool add(const NetConfig& config, NetCallBackPtr calls);

      //�Ƴ�����
      bool remove(const NetName& name);
      
      //��ȡ��Ϣ��״̬�ı�
      bool poll();
      
      //������Ϣ
      bool send(const MessagePtr& msg);
      //������Ϣ
      bool send(const NetName& name, const MessagePtr& msg);
      
      //kick
      bool kick(const SessionId& id);
      
      //�Ƿ���run
      bool isRun() const;

    public:
      //�ڹ����߳�ִ��
      void serviceStop();

      // �ڹ����߳�ִ��
      void serviceRun();
    protected:

    private:
      std::unique_ptr<NetServiceData> m_serviceData;
    };
  }
}

#endif