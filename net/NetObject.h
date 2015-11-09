/********************************************************************

  Filename:   NetObject

  Description:NetObject

  Version:  1.0
  Created:  13:8:2015   19:03
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetObject_H__
#define __NetObject_H__
/*
#include <set>
#include <google/protobuf/message.h>
#include "utility/MapTemplate.h"
#include "net/NetManager.h"
#include <iostream>
#include "log/MyLog.h"
namespace ph = std::placeholders;
namespace ShareSpace {
  namespace NetSpace {

    struct DefValueSpace {
      template<typename T>
      static T defaultNetTypeValue() {
        return  T();
      }
      template<unsigned long long>
      static unsigned long long defaultNetTypeValue() {
        return 0;
      }
      template<int>
      static int defaultNetTypeValue() {
        return  0;
      }
      template<char>
      static char defaultNetTypeValue() {
        return  '0';
      }
    };

    template<typename PODExtra, typename SessionName>
    class NetObjectBase {
    public:
      typedef  google::protobuf::Message MSGType;
      typedef  typename std::shared_ptr<MSGType> MsgPtr;
      typedef  typename NetSpace::NetBlock BlockType;
      typedef  typename NetSpace::MessagePtr  BlockPtrType;
      typedef  typename NetSpace::SessionId  SessionId;
      typedef  typename NetSpace::NetCallBack   NetCallBack;
      typedef  typename NetSpace::NetCallBackPtr NetCallBackPtr;

      typedef  SessionName  SessionNameType;
      typedef  PODExtra     PODExtraType;

      typedef  typename NetSpace::NetName NetName;
       
      typedef  std::tuple<NetName, PODExtraType, SessionId, MsgPtr, SessionNameType> Cache;
      typedef  std::list<Cache> CacheList;
      typedef  std::function<void(SessionId)> SessionConnFun;
      typedef  std::function<void(const SessionNameType&, SessionId)> SessionCloseFun;
      typedef  std::function<void(const Cache&)> FunCallBack;
      typedef  std::function<void(const std::string&, void*, size_t, const PODExtraType&, const SessionId&, const SessionNameType&)> FunDefBuffCall;

      enum {
        _NET_NAME_,
        _EXTRA_ID_,
        _SESSION_ID_,
        _MESSAGE_PTR,
        _SESSION_NAME_ID,
      };

      //所属网络服务的名字
      static const NetName& netName(const Cache& t) {
        return std::get<_NET_NAME_>(t);
      }
      //绑定的别名
      static const SessionNameType& sessionName(const Cache& t) {
        return std::get<_SESSION_NAME_ID>(t);
      }
      //附带的数据
      static const PODExtraType& extraId(const Cache& t) {
        return std::get<_EXTRA_ID_>(t);
      }
      //session
      static const SessionId& sessionId(const Cache& t) {
        return std::get<_SESSION_ID_>(t);
      }
      //消息指针
      static const MsgPtr& messagePtr(const Cache& t) {
        return std::get<_MESSAGE_PTR>(t);
      }
      //debug
      static void debugCache(const Cache& t) {
#ifdef _DEBUG
//         std::stringstream ss;
//         ss << "net:" << netName(t)
//           << " bind:" << sessionName(t)
//           << " extraId:" << extraId(t)
//           << " session:" << sessionId(t)
//           << " message:" << messagePtr(t)->DebugString();
//         LOGDEBUG(ss.str().c_str());
#endif // _DEBUG
      }

      template<typename M>
      static const M& cRefMsg(const Cache& t) {
        auto p = std::static_pointer_cast<const M>(messagePtr(t));
        return *p;
      }

      template<typename M>
      static M& refMsg(const Cache& t) {
        auto p = std::static_pointer_cast<M>(messagePtr(t));
        return *p;
      }

      static MsgPtr makeMsg(const std::string& name, const void* buffer, size_t len) {
        const google::protobuf::Descriptor* descriptor = google::protobuf::DescriptorPool::generated_pool()->FindMessageTypeByName(name);
        if(!descriptor) { return nullptr; }
        const google::protobuf::Message* prototype = google::protobuf::MessageFactory::generated_factory()->GetPrototype(descriptor);
        MsgPtr ptr(prototype->New());
        if(!ptr->ParseFromArray(buffer, len)) {
          return nullptr;
        }
        return ptr;
      }

    protected:
      const std::string& messageFullName(const MSGType* msg) const {
        return msg->GetDescriptor()->full_name();
      }
    
      template<typename MSG>
      const std::string& messageFullName()const {
        return MSG::default_instance().GetDescriptor()->full_name();
      }

      char* unPack(const BlockPtrType& msg, std::string& msgName, PODExtraType& extra, size_t& len) {
        auto& b = msg->data();
        if(!b->readPod<PODExtraType>(extra)) { return nullptr; }
        int nameLen = 0;
        if(!b->readPod<int>(nameLen)) { return nullptr; }
        char* p = b->readData(nameLen);
        if(!p) { return nullptr; }
        msgName = std::string(p, nameLen);
        len = b->needReadLength();
        return b->readData(len);
      }
      // make send block 
      BlockPtrType pack(const MSGType* m,
                        const SessionId& s,
                        const PODExtraType& extra) {
        std::string content;
        m->SerializeToString(&content);
        return pack(messageFullName(m), content.c_str(), content.length(), s, extra);
      }
      BlockPtrType pack(const std::string& name,
                        const void* buffer,
                        size_t len,
                        const SessionId& s,
                        const PODExtraType& extra) {
        int nameLen = name.length();
        int size = sizeof(NetSpace::NetBlock::head) + sizeof(PODExtraType) + sizeof(int) + nameLen + len + 1;
        std::unique_ptr<NetSpace::NetBuffer> b(new NetSpace::NetBuffer(size));
        b->writeData(sizeof(NetSpace::NetBlock::head)); // set write pos
        b->tailPod<PODExtraType>(extra);
        b->tailPod<int>(nameLen);
        b->tailData(name.c_str(), nameLen);
        b->tailData((const char*)buffer, len);
        BlockPtrType ptr(new BlockType(s, std::move(b)));
        return ptr;
      }

      //调用回调函数
      void handleMessage(const NetName& net, const BlockPtrType& ptr) {
        std::string msgName;
        PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>();
        size_t len = 0;
        char* buffer = unPack(ptr, msgName, extra, len);
        SessionId s = ptr->session();
        if (nullptr == buffer){ makeCacheError(s);return;}
        const google::protobuf::Descriptor* descriptor = google::protobuf::DescriptorPool::generated_pool()->FindMessageTypeByName(msgName);
        MYASSERT(descriptor, "not found descript with :", msgName);
        if(!descriptor) { makeCacheError(s); return; }
        const google::protobuf::Message* prototype = google::protobuf::MessageFactory::generated_factory()->GetPrototype(descriptor);
        MYASSERT(prototype, "not found prototype with :", msgName);
        if(!prototype) { makeCacheError(s); return; }
        auto& call = m_callMap.getData(msgName);
        if(call || m_defCall) {
          MsgPtr msgPtr(prototype->New());
          if(!msgPtr->ParseFromArray(buffer, len)) { makeCacheError(s);  return; }
          auto cache = std::make_tuple(m_config.m_name, extra,s, msgPtr, doGetSessionName(s));
          if(call) { call(cache); return; }
          if(m_defCall) { m_defCall(cache); }
        } else {
          if(m_defCallBuff) { m_defCallBuff(msgName, buffer, len, extra, s, doGetSessionName(s)); return; }
        }
      }

      //有链接连接进来的回调
      void onConnect(const NetName& name, const SessionId& s) {
        doSessionConnect(s);
      }
      //有链接连接关闭的回调
      void onClose(const NetName& name, const SessionId& s) {
        doSessionclose(s);
      }
      const NetSpace::NetConfig& getNetConfig() const {
        return m_config;
      }

      NetCallBackPtr makeCall() {
        NetCallBackPtr ptr(new NetCallBack);
        ptr->m_messageCall = std::bind(&NetObjectBase::handleMessage, this, ph::_1, ph::_2);
        ptr->m_connectCall = std::bind(&NetObjectBase::onConnect, this, ph::_1, ph::_2);
        ptr->m_closeCall = std::bind(&NetObjectBase::onClose, this, ph::_1, ph::_2);
        return std::move(ptr);
      }

    public:
      explicit NetObjectBase(const NetSpace::NetConfig& config,
                             NetSpace::NetManager& net,
                             const FunCallBack& def = nullptr,
                             const SessionConnFun& conn = nullptr,
                             const SessionCloseFun& close = nullptr,
                             const FunDefBuffCall& buffCall = nullptr
                             ) 
      : m_config(config)
      , m_callSessionClonnect(conn)
      , m_callSessionClose(close)
      , m_net(net)
      , m_defCall(def)
      , m_defCallBuff(buffCall){
        m_net.add(config, std::move(makeCall()));
        m_callMap.setOptional(std::string(), nullptr);
      }
      ~NetObjectBase() {

      }

      //注册回调函数
      template<typename MSG>
      bool registerMessage(const FunCallBack& call) {
        auto& key = messageFullName<MSG>();
        return  m_callMap.addData(key, call);
      }

      const NetSpace::NetConfig& config() const { return m_config; }

    protected:
      //读取的流
      virtual bool makeCacheError(SessionId s) = 0;
      virtual void doSessionConnect(SessionId s) = 0;
      virtual void doSessionclose(SessionId s) = 0;
      virtual const SessionNameType& doGetSessionName(SessionId s) = 0;
    protected:
      NetSpace::NetConfig     m_config;                     //配置信息
      SessionConnFun          m_callSessionClonnect;        //连接成功回调
      SessionCloseFun         m_callSessionClose;           //连接关闭回调  
      NetSpace::NetManager&   m_net;                        //网络实例
   private:
      FunCallBack m_defCall = nullptr;                        //当消息没有注册回调函数的时候默认调用的函数
      FunDefBuffCall m_defCallBuff = nullptr;
      Utility::ObjectMap<std::string, FunCallBack> m_callMap; //回调函数列表
    };

    template<typename PODExtra, typename SessionName>
    class NetServer : public  NetObjectBase<PODExtra, SessionName> 
    {
    public:
      explicit NetServer(const NetSpace::NetConfig& config,
                         NetSpace::NetManager& net,
                         const FunCallBack& def = nullptr,
                         const SessionConnFun& conn = nullptr,
                         const SessionCloseFun& close = nullptr,
                         const FunDefBuffCall& defb = nullptr)
                         :NetObjectBase(config, net, def, conn, close, defb) {
        m_sessionNames.setOptional(DefValueSpace::defaultNetTypeValue<SessionNameType>(), 0);
        MYASSERT(config.m_serviceType == NetSpace::_SERVER_FLAG_, "net type error with name", config.m_name);
      }
      ~NetServer() { }
    private:
      virtual bool makeCacheError(SessionId s) override {
        MYASSERT(false, "cache make msg error, kick session:", s, "with net:", this->config().m_name);
        m_waitSendList.eraseData(m_sessionNames.getKey(s));
        kickSession(s);
        return true;
      }
      virtual void doSessionConnect(SessionId s) override {
        m_sessions.insert(s);
        m_callSessionClonnect(s);
      }
      virtual void doSessionclose(SessionId s) override {
        const SessionNameType& name = m_sessionNames.getKey(s);
        m_callSessionClose(name, s);
        m_sessions.erase(s);
        m_sessionNames.eraseData(name);
        m_waitSendList.eraseData(name);
      }
      virtual const SessionNameType& doGetSessionName(SessionId s) override {
        return m_sessionNames.getKey(s);
      }
    protected:
      void addWaitList(const SessionNameType& name, const Cache& c) {
        if(m_waitSendList.hasData(name)) {
          m_waitSendList.getData(name).push_back(c);
        } else {
          CacheList l;
          l.push_back(c);
          m_waitSendList.addData(name, l);
        }
      }
    public:
      bool send(const std::string& name,
                const void* buffer,
                size_t len,
                const SessionId& s,
                const PODExtraType& extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        if(0 == m_sessions.count(s)) { return false; }
        return  m_net.send(pack(name, buffer,len ,s, extra));
      }
      //发送消息.没有绑定的别名的session可以发送
      template<typename MSG>
      bool send(const MSG& msg,
                const SessionId& s,
                const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        if(0 == m_sessions.count(s)) { return false; }
        return  m_net.send(pack(&msg, s, extra));
      }
      //发送消息.没有绑定的别名的session可以发送
      bool send(const MsgPtr& m,
                const SessionId& s,
                const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        if (0 == m_sessions.count(s)){return false;}
        return m_net.send(pack(m.get(), s, extra));
      }

      //发送消息.只有绑定的别名的session可以发送
      template<typename MSG>
      bool sendMessage(const MSG& msg,
                       const SessionNameType& alias,
                       const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        auto& s = m_sessionNames.getData(alias);
        if(!m_sessionNames.isOptionalValue(s)) {
          return send(msg, s, extra);
        } else {
          MsgPtr m(new MSG(msg));
          auto c = std::make_tuple(m_config.m_name, extra, DefValueSpace::defaultNetTypeValue<SessionId>(), m, alias);
          addWaitList(alias, c);
          return true;
        }
        return false;
      }

      //发送消息.只有绑定的别名的session可以发送
      bool sendMessage(const MsgPtr& m,
                       const SessionNameType& alias,
                       const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        auto& s = m_sessionNames.getData(alias);
        if(!m_sessionNames.isOptionalValue(s)) {
          return send(m, s, extra);
        } else {
          auto c = std::make_tuple(m_config.m_name, extra, DefValueSpace::defaultNetTypeValue<SessionId>(), m, alias);
          addWaitList(alias, c);
          return true;
        }
        return false;
      }

      bool sendMessage(const std::string& msgName,
                       const void* buffer,
                       size_t len,
                       const SessionNameType& alias,
                       const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        auto& s = m_sessionNames.getData(alias);
        if(!m_sessionNames.isOptionalValue(s)) {
          return send(msgName, buffer, s, extra);
        } else {
          auto m = makeMsg(msgName, buffer, len);
          if (m){
            auto c = std::make_tuple(m_config.m_name, extra, DefValueSpace::defaultNetTypeValue<SessionId>(), m, alias);
            addWaitList(alias, c);
            return true;
          }
        }
        return false;
      }
      //发送消息到所有对象
      template<typename MSG>
      void sendToAll(const MSG& msg,
                     const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        for(auto& s : m_sessions) { send(msg, s, extra); }
      }

      //发送消息到所有对象
      void sendToAll(const MsgPtr& m,
                     const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        for(auto& s : m_sessions) { send(m, s, extra); }
      }

      //绑定session的别名
      void bindSession(const SessionNameType& name, const SessionId& id) {
        m_sessionNames.replaceData(name, id);
        for(auto& m : m_waitSendList.getData(name)) {
          send(messagePtr(m), id, NetObjectBase::extraId(m));
        }
        m_waitSendList.eraseData(name);
      }

      bool hasBind(const SessionNameType& name) const {
        return m_sessionNames.hasData(name);
      }
      //解绑session的别名
      void unBindSession(const SessionNameType& name) {
        if (hasBind(name)){
          m_waitSendList.eraseData(name);
          m_sessionNames.eraseData(name);
        }
      }

      //kick
      bool kickBind(const SessionNameType& name) {
        auto s = m_sessionNames.getData(name);
        return kickSession(s);
      }
       //kick
      bool kickSession(SessionId s) {
        if(m_sessions.count(s) > 0) { return m_net.kick(s); }
        return false;
      }
    private:
      NetServer(const NetServer&) = delete;
      NetServer& operator = (const NetServer&) = delete;
      NetServer& operator = (NetServer&&) = delete;
      std::set<SessionId> m_sessions;                                         // onlines
      Utility::ObjectMap<SessionNameType, SessionId> m_sessionNames;   // session 和session name 绑定列表
      Utility::ObjectMap<SessionNameType, CacheList> m_waitSendList;   //等待发送的列表
    };

    template<typename PODExtra, typename SessionName>
    class NetClient : public  NetObjectBase<PODExtra, SessionName>{
    public:
      explicit NetClient(const NetSpace::NetConfig& config,
                         const SessionName& name,
                         NetSpace::NetManager& net,
                         const FunCallBack& def = nullptr,
                         const SessionConnFun& conn = nullptr,
                         const SessionCloseFun& close = nullptr,
                         const FunDefBuffCall& defb = nullptr)
                         :NetObjectBase(config, net, def, conn, close, defb), m_sessionName(name) {
        MYASSERT(config.m_serviceType == NetSpace::_CLIENT_FLAG_, "net type error with name", config.m_name);
      }
      ~NetClient() { }
    
    protected:
      virtual bool makeCacheError(SessionId s) override {
        MYASSERT(false, "cache make msg error, kick session", s);
        kickSession(s);
        return true;
      }
      virtual void doSessionConnect(SessionId s) {
        m_isConnect = true;
        m_session = s;
        m_callSessionClonnect(s);
        for (auto& m : m_waitSendList){
          sendMessage(NetObjectBase::messagePtr(m), NetObjectBase::extraId(m));
        }
      }
      virtual void doSessionclose(SessionId s) {
        m_callSessionClose(m_sessionName, s);
        m_session = INVALID_SESSION_ID;
        m_waitSendList.clear();
        m_isConnect = false;
      }
      virtual const SessionNameType& doGetSessionName(SessionId s) override {
        return m_sessionName;
      }
    protected:
      bool send(const std::string& name,
                const void* buffer,
                size_t len,
                const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        if(m_isConnect) {
          return  m_net.send(pack(name, buffer, len, m_session, extra));
        } else {
          auto m = makeMsg(name, buffer, len);
          if (m){
            m_waitSendList.push_back(std::make_tuple(m_config.m_name, extra, DefValueSpace::defaultNetTypeValue<SessionId>(), m, m_sessionName));
            return true;
          }
          return false;
        }
      }

      //发送消息.没有绑定的别名的session可以发送
      template<typename MSG>
      bool send(const MSG& msg,
                const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        if(m_isConnect) {
          return  m_net.send(pack(&msg, m_session, extra));
        } else {
          MsgPtr m(new MSG(msg));
          m_waitSendList.push_back(std::make_tuple(m_config.m_name, extra, DefValueSpace::defaultNetTypeValue<SessionId>(), m, m_sessionName));
          return true;
        }
       
      }
      //发送消息.没有绑定的别名的session可以发送
      bool send(const MsgPtr& m,
                const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        if(m_isConnect) {
          return  m_net.send(pack(m.get(), m_session, extra));
        } else {
          m_waitSendList.push_back(std::make_tuple(m_config.m_name, extra, DefValueSpace::defaultNetTypeValue<SessionId>(), m, m_sessionName));
          return true;
        }
      }
    public:
      //发送消息.只有绑定的别名的session可以发送
      template<typename MSG>
      bool sendMessage(const MSG& msg,
                       const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        return send(msg, extra);
      }

      //发送消息.只有绑定的别名的session可以发送
      bool sendMessage(const MsgPtr& m,
                       const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        return send(m, extra);
      }
      
      bool sendMessage(const std::string& name,
                       const void* buffer,
                       size_t len,
                       const PODExtraType extra = DefValueSpace::defaultNetTypeValue<PODExtraType>()) {
        return send(name, buffer, len,  extra);
      }


      bool kickSession(SessionId s) {
        if(m_isConnect) {
          return m_net.kick(s);
        }
        return false;
      }
    private:
      NetClient(const NetClient&) = delete;
      NetClient& operator = (const NetClient&) = delete;
      NetClient& operator = (NetClient&&) = delete;
      SessionId m_session = INVALID_SESSION_ID;            //session id 
      CacheList m_waitSendList;           //等待发送的列表
      bool m_isConnect = false;           //链接状态
      SessionName m_sessionName ;         //绑定
    };

#define  TemplateNetObject(__POD_EXTRA__, __SESSION_NAME__, __NET_NAME__) typedef ShareSpace::NetSpace::NetServer<__POD_EXTRA__,__SESSION_NAME__> __NET_NAME__##Listen;\
         typedef std::unique_ptr<__NET_NAME__##Listen> __NET_NAME__##ListenPointer; \
         typedef ShareSpace::NetSpace::NetClient<__POD_EXTRA__,__SESSION_NAME__> __NET_NAME__##Conn;\
         typedef std::unique_ptr<__NET_NAME__##Conn> __NET_NAME__##ConnPointer;   \
         typedef ShareSpace::NetSpace::NetObjectBase<__POD_EXTRA__,__SESSION_NAME__> __NET_NAME__##Base;\
         typedef ShareSpace::NetSpace::NetObjectBase<__POD_EXTRA__,__SESSION_NAME__>::Cache __NET_NAME__##Cache;  

  }
}
*/
#endif