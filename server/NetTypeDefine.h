/********************************************************************

  Filename:   NetTypeDefine

  Description:NetTypeDefine

  Version:  1.0
  Created:  28:8:2015   13:34
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetTypeDefine_H__
#define __NetTypeDefine_H__
#include <google/protobuf/message.h>
#include "utility/MapTemplate.h"
#include "net/NetManager.h"
#include "server/TypeDefine.h"
namespace Server {
  typedef ShareSpace::NetSpace::SessionId Session;
  /*
  //�������ID���Լ�ÿ��socket������Ϊstring�������������
  //��Ҫ�Ƿ������ڲ�ͨѶ��ÿ����Ϣ����PlayerID
  TemplateNetObject(PlayerId, std::string, ServerSocket);


  //�������id,�Լ�ÿ��socket������ΪplayerID�������������
  //��Ҫ���ڷ����������ͨѶʹ��
  TemplateNetObject(PlayerId, PlayerId, ClientSocket);


  //������������,�Լ�ÿ��socket������Ϊstring�������������
  //��Ҫlogic ��gate��ͨѶ
  TemplateNetObject(unsigned int, std::string, GateSocket);
#define BindNetObjectCall(__SOCKET__, __MSG_NAME__, __CALL_BACK__) if(!__SOCKET__->registerMessage<__MSG_NAME__>(std::bind(&Impl::__CALL_BACK__, this, ph::_1))){return false;}
#define BindNetObjectBufCall(__SOCKET__, __MSG_NAME__, __CALL_BACK__) if(!__SOCKET__->registerMessage<__MSG_NAME__>()){return false;}
 */ /*
#define  TemplateNetObject(__POD_EXTRA__, __SESSION_NAME__, __NET_NAME__) typedef ShareSpace::MessageSpace::NetObject<__POD_EXTRA__,__SESSION_NAME__> __NET_NAME__;\
         typedef std::unique_ptr<__NET_NAME__> __NET_NAME__##Pointer; \
         typedef __NET_NAME__::Cache __NET_NAME__##Cache;

  //�������ID���Լ�ÿ��socket������Ϊstring�������������
  //��Ҫ�Ƿ������ڲ�ͨѶ��ÿ����Ϣ����PlayerID
  TemplateNetObject(PlayerId, std::string, ServerSocket);


  //�������id,�Լ�ÿ��socket������ΪplayerID�������������
  //��Ҫ���ڷ����������ͨѶʹ��
  TemplateNetObject(PlayerId, PlayerId, ClientSocket);


  //������������,�Լ�ÿ��socket������Ϊstring�������������
  //��Ҫlogic ��gate��ͨѶ
  TemplateNetObject(unsigned int, std::string, GateSocket);

  //�󶨻ص�����
#define BindNetObjectCall(__SOCKET__, __MSG_NAME__, __CALL_BACK__) if(!__SOCKET__->registerMessage<__MSG_NAME__>(std::bind(&Impl::__CALL_BACK__, this, ph::_1))){return false;}
  */}
#endif