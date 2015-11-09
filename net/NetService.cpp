/********************************************************************

  Filename:   NetService

  Description:NetService

  Version:  1.0
  Created:  31:3:2015   19:27
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "net/NetService.h"
#include "net/NetSession.h"
#include "net/NetThread.h"
#include "net/NetCore.h"
#include "net/NetUV.h"
#include "utility/MapTemplate.h"
#include <algorithm>
#include <set>
#include "log/MyLog.h"
#include <thread>
#include <iostream>
namespace ShareSpace {
  namespace NetSpace {
    class NetSignalData : public boost::noncopyable {
    public:
      explicit NetSignalData(const NetConfig& c, NetServiceData* f, NetCallBackPtr call)
        : m_configs(c)
        , m_service(f)
        , m_run(false)
        , m_calls(std::move(call)){
        if(_SERVER_FLAG_ == m_configs.m_serviceType) {
          m_tcp = podMalloc<uv_tcp_t>();
          m_tcp->data = this;
          m_configs.m_autoReconnect = false;
        } else {
          m_tcp = nullptr;
        }
      }
      virtual ~NetSignalData() {
        if(m_tcp) {
          podFree(m_tcp);
          m_tcp = nullptr;
        }
        m_calls.reset();
      }

      NetConfig m_configs;          //配置信息
      NetServiceData* m_service;    //服务配置数据指针
      uv_tcp_t* m_tcp;              //用来侦听的端口绑定(server类型)
      bool m_run;                   //是否在使用
      NetCallBackPtr m_calls;       //回调函数
    };

    typedef std::shared_ptr<NetSignalData> SignalPointer;

    class NetServiceData : public boost::noncopyable {
    public:
      enum ServiceState {
        _SERVICE_INIT_ = 0,
        _SERVICE_RUN_ = 1,
        _SERVICE_STOP_ = 2,
      };
      enum  {
        _DEFAULT_BUFFER_SIZE = 65535,
      };

      explicit NetServiceData(unsigned int c)
        : m_state(_SERVICE_INIT_)
        , m_currentId(INVALID_SESSION_ID)
        , m_workThreadCount(c) {
        m_workThreadCount = c > 0 ? c : 1;
        m_sessions.setOptional(INVALID_SESSION_ID);
        m_nets.setOptional("");
      }
      virtual ~NetServiceData() {
        m_threads.clear();
        m_sessions.clear();
        m_nets.clear();
      }
      
      SessionPtr addNewSession(const NetConfig& config) {
        ThreadPtr t(nullptr);
        size_t value = 0;
        for (auto& tt : m_threads){
          if (!t ||  value < tt->busy()){
            t = tt;
            value = tt->busy();
          }
        }
        ++m_currentId;
        return  SessionPtr(new NetSession(t, m_currentId, _DEFAULT_BUFFER_SIZE, config));
      }
      uv_async_t  m_asyncStop;                    //停止网络服务
      uv_async_t  m_asyncNew;                     //新加了网络服务
      uv_thread_t m_mainThread;                   //网络侦听线程
      uv_loop_t*  m_loop = nullptr;               //m_mainThread 的loop
      std::list<ThreadPtr> m_threads;             //工作线程池
      Utility::ObjPtrMap<SessionId, NetSession> m_sessions;
      Utility::ObjPtrMap<NetName, NetSignalData> m_nets;
      ServiceState m_state;                       //服务状态
      SessionId m_currentId = INVALID_SESSION_ID; //下一个session id 
      unsigned int m_workThreadCount;             //工作收发线程数量
    };


    static void callService(void* p);
    static void callStopSercive(uv_async_t* handle);
    static void callAddNet(uv_async_t* handle);
    static void callSessionConnect(uv_stream_t* tcp, int status);
    static void callDoConnectting(SessionPtr s);
    static void callClose(uv_handle_t* handle);
    static void callAlloc(uv_handle_t* handle, size_t len, uv_buf_t* buff);
    static void callRead(uv_stream_t* stream, ssize_t nread, const uv_buf_t* buf);
    static void callWrite(uv_write_t* req, int status);
    static void callShutDown(uv_shutdown_t* req, int status);
    static void callConnect(uv_connect_t* req, int status);
    static void callAsyncAddSession(uv_async_t* handle);
    static void callAsyncStopThread(uv_async_t* handle);
    static void callAsyncKickSession(uv_async_t* handle);
    static void callAsyncSendMessage(uv_async_t* handle);
    static void callDoConnectting(SessionPtr s);
    static void callRWThreadRun(void* t);
    static void callRWThreadSend(NetThread* t);

    // 
    void callService(void* p) {
      NetService* ptr = static_cast<NetService*>(p);
      if(ptr) {
        ptr->serviceRun();
      }
    }
    void callStopSercive(uv_async_t* handle) {
      NetService* ptr = static_cast<NetService*>(handle->data);
      if(ptr) {
        ptr->serviceStop();
      }
    }
    void callAddNet(uv_async_t* handle) { 
      NetServiceData* p = static_cast<NetServiceData*>(handle->data);
      if (p){
        for (const auto& pair : p->m_nets.constRefMap()){
          const auto& c = pair.second;
          if (!c->m_run){
             if (_SERVER_FLAG_ == c->m_configs.m_serviceType){
               struct sockaddr_in addr;
               uv_ip4_addr(c->m_configs.m_address.c_str(), c->m_configs.m_port, &addr);
               uv_tcp_init(p->m_loop, c->m_tcp);
               uv_tcp_bind(c->m_tcp, (const sockaddr*)&addr, 0);
               uv_listen((uv_stream_t*)(c->m_tcp), c->m_configs.m_maxConnect, callSessionConnect);
               c->m_run = true;
             } else if(_CLIENT_FLAG_ == c->m_configs.m_serviceType) {
               SessionPtr s = p->addNewSession(c->m_configs);
               auto t = s->thread();
               if(!t) { MYASSERT(false);  return; }
               c->m_run = true;
               {
                 NetGuardLock locker(&t->m_mutexs[NetThread::mutex_session]);
                 t->m_newList.push_back(s);
               }
               uv_async_send(&t->m_asyncs[NetThread::async_add_session]);
             }
          }
        }
      }
    }

    void callSessionConnect(uv_stream_t* tcp, int status) {
      if(status == -1) {
        // error!
        return;
      }
      NetSignalData* ptr = static_cast<NetSignalData*>(tcp->data);
      if (ptr){
        SessionPtr s = ptr->m_service->addNewSession(ptr->m_configs);
        auto t = s->thread();
        if(!t) { MYASSERT(false);  return; }
        uv_tcp_t* lister = ptr->m_tcp;
        {
          NetGuardLock locker(&t->m_mutexs[NetThread::mutex_session]);
          t->m_newList.push_back(s);
        }

        //uv_tcp_init(s->m_thread->m_loop, s->m_tcp);
        uv_tcp_init(tcp->loop, s->m_tcp);
        if(0 == uv_accept((uv_stream_t*)lister, (uv_stream_t*)s->m_tcp)) {
          uv_async_send(&t->m_asyncs[NetThread::async_add_session]);
        } else { 
          uv_close((uv_handle_t*)s->m_tcp, nullptr);
        }
      }
    }
    void callClose(uv_handle_t* handle) {
      SessionPtr s = (static_cast<NetSession*>(handle->data))->shared_from_this();
      if (s){
        auto t = s->thread();
        if(!t) { MYASSERT(false);  return; }
        if(_CLIENT_FLAG_ == s->m_config.m_serviceType) {
          if(s->m_reconn) {
            s->m_state = NetSession::_session_close_;
            uv_tcp_init(t->m_loop, s->m_tcp);
            callDoConnectting(s);
            return ;
          } else {
            t->m_clientList.erase(s);
          }
        } 
        NetGuardLock lock(&t->m_mutexs[NetThread::mutex_session]);
        t->m_onlines--;
        t->m_onlieList.erase(s);
        s->m_state = NetSession::_session_close_;
        t->m_stateList.push_back(s);
      }
    }
    void callAlloc(uv_handle_t* handle, size_t len, uv_buf_t* buff) {
      NetSession* s = static_cast<NetSession*>(handle->data);
      if (s){
        //s->m_bufferRecv->addSize(len);
        size_t ll = s->m_bufferRecv->maxLength() - s->m_bufferRecv->length();
        size_t l = std::min<size_t>(len, ll);
        uv_buf_t b = uv_buf_init(s->m_bufferRecv->writeData(), l);
        *buff = b;
      }
    }
    void callWrite(uv_write_t* req, int status) {
      NetSession* s = static_cast<NetSession*>(req->data);
      if(status > 0) {
        uv_shutdown(s->m_shutDown, (uv_stream_t*)s->m_tcp, callShutDown);
        return;
      }
      auto t = s->thread();
      if(t) { t->m_totalRealSend += s->m_bufferSend->length(); } else { MYASSERT(false); }
      s->m_sendTotalLen += s->m_bufferSend->length();
      

      s->m_bufferSend->reset();
      s->m_inSend = false;
      callRWThreadSend(t.get());
    }
    void callRead(uv_stream_t* stream, ssize_t nread, const uv_buf_t* buf) {
      auto readMessage = [] (NetSession* s)->MessagePtr {
        if(!s->m_waiteMessage) {  s->m_waiteMessage = std::make_shared<NetBlock>(s->m_sessionId); }
        if(s->m_waiteMessage) {
          s->m_waiteMessage->recv(s->m_bufferRecv, nullptr);
          if(s->m_waiteMessage->bodyDone()) {
            auto p = s->m_waiteMessage;
            s->m_waiteMessage = nullptr;
            return p;
          }
        }
        return nullptr;
      };

      NetSession* s = static_cast<NetSession*>(stream->data);
       if(nread >= 0 && s && buf && buf->base && buf->len > 0) {
         std::list<MessagePtr> list;
         s->m_bufferRecv->writeData(nread);
         s->m_recvTotalLen += nread;
         auto t = s->thread();
         if(!t) { MYASSERT(false);  return; }
         t->m_totalRealRecv += nread;

         while(s->m_bufferRecv->hasWrite()) {
           auto m = readMessage(s);
           if(m) { 
             list.push_back(m);
             s->m_recvTotalLen++;
             t->m_totalRealRecvCount++; 
           }else {break;}
         }
         {
           NetGuardLock locker(&t->m_mutexs[NetThread::mutex_recive]);
           t->m_recvList.insert(t->m_recvList.end(), list.begin(), list.end());
         }
         return;
       }
       uv_shutdown(s->m_shutDown, stream, callShutDown);
    }
    void callShutDown(uv_shutdown_t* req, int /*status*/) {
      NetSession* ptr = static_cast<NetSession*>(req->data);
      if(ptr) {
        uv_close((uv_handle_t*)ptr->m_tcp, callClose);
      }
    }

    void callConnect(uv_connect_t* req, int status) { 
      NetSession* ptr = static_cast<NetSession*>(req->data);
      if (ptr){
        auto t = ptr->thread();
        if(!t) { MYASSERT(false);  return; }
        auto s = ptr->shared_from_this();
        auto c = std::count(t->m_clientList.begin(), t->m_clientList.end(), s);
        if(c > 0) {
          if (0 == status){
            s->m_state = NetSession::_session_connect_;
            t->m_onlieList.insert(s);
            t->m_stateList.push_back(s);
            uv_read_start((uv_stream_t*)ptr->m_tcp, callAlloc, callRead);
            return;
          }
          if(s->m_reconn) {
            callDoConnectting(s);
          }
        }
      }
    }

    void callAsyncAddSession(uv_async_t* handle) {
      NetThread* p = static_cast<NetThread*>(handle->data);
      if (p){
        NetGuardLock lock(&p->m_mutexs[NetThread::mutex_session]);
        p->m_onlines += p->m_newList.size();
        for (auto& s : p->m_newList){
          if (_SERVER_FLAG_ == s->m_config.m_serviceType){
            s->m_state = NetSession::_session_connect_;
            uv_read_start((uv_stream_t*)s->m_tcp, callAlloc, callRead);
            p->m_onlieList.insert(s);
            p->m_stateList.push_back(s);
          } else if(_CLIENT_FLAG_ == s->m_config.m_serviceType) {
            p->m_clientList.insert(s);
            uv_tcp_init(p->m_loop, s->m_tcp);
            callDoConnectting(s);
          }
        }
        p->m_newList.clear();
      }
    }
    void callAsyncStopThread(uv_async_t* handle) {
      NetThread* p = static_cast<NetThread*>(handle->data);
      if(p) {
        // send all data && stop loop
        //LOGDEBUG("before stop send msg size:", p->m_sendList.size());
        callRWThreadSend(p);
        //LOGDEBUG("after stop send msg size:", p->m_sendList.size());
        uv_stop(p->m_loop);
      }
    }
    void callAsyncKickSession(uv_async_t* handle) {
      NetThread* p = static_cast<NetThread*>(handle->data);
      if(p) {
        std::list<SessionPtr> list;
        {
          NetGuardLock lock(&p->m_mutexs[NetThread::mutex_session]);
          list = p->m_kickList;
          p->m_kickList.clear();
        }
        while(list.size() > 0) {
          SessionPtr s = list.front();
          list.pop_front();
          if(p->m_onlieList.count(s) > 0) {
            uv_close((uv_handle_t*)s->m_tcp, callClose);
          }
        }
      }
    }
    void callRWThreadSend(NetThread* t) {
      auto sessionFun = [] (SessionId id, const std::set<SessionPtr>& l)->SessionPtr {
        auto it = std::find_if(l.begin(),
                               l.end(),
                               [id] (const SessionPtr& s) { return s->m_sessionId == id; });
        if(it != l.end()) {
          return  *it;
        }
        return nullptr;
      };

      std::set<SessionPtr> sset;
      sset.clear();
      NetGuardLock lock(&t->m_mutexs[NetThread::mutex_send]);
      auto& msgList = t->m_sendList;
      if (msgList.empty()){
        return;
      }
      //std::cout << std::this_thread::get_id() << std::endl;
      //LOGDEBUG("before send list size:", t->m_sendList.size());
      auto it = msgList.begin();
      auto itEnd = msgList.end();
      while(it != itEnd) {
        auto& msg = *it;
        auto s = sessionFun(msg->session(), t->m_onlieList);
        // not found session remove msg
        if (!s){
          it = msgList.erase(it);
          continue;
        }
        // not connected 
        if (s->m_state != NetSession::_session_connect_){
          ++it;
          continue;
        }
        // in send  or send buffer full wait next loop
        if(s->m_inSend || s->m_bufferSend->isFull()) {
          ++it;
          continue;
        }
        // read buffer data  && insert to send list
        auto& buffer = msg->data();
        buffer->readBuffer(*s->m_bufferSend);
        sset.insert(s);

        // if msg data read complete remove it
        // else wait next loop to read left data
        if(!buffer->hasRead()) {
          it = msgList.erase(it);
          t->m_totalRealSendCount++;
          s->m_sendTotalCount++;
        } else {
          ++it;
        }
      }
      // call send data 
      for (auto& s : sset){
        uv_buf_t buf;
        buf.base = s->m_bufferSend->data();
        buf.len = s->m_bufferSend->length();
        uv_write(s->m_write, (uv_stream_t*)s->m_tcp, &buf, 1, callWrite);
        s->m_inSend = true;
      }
    }
    void callAsyncSendMessage(uv_async_t* handle) {
      NetThread* p = static_cast<NetThread*>(handle->data);
      if(p) {
        callRWThreadSend(p);
      }
    }
    void callDoConnectting(SessionPtr s) {
      struct sockaddr_in addr;
      uv_ip4_addr(s->m_config.m_address.c_str(), s->m_config.m_port, &addr);
     /* int r =*/ uv_tcp_connect(s->m_connect, s->m_tcp, (const struct sockaddr*)&addr, callConnect);
    }

    void callRWThreadRun(void* t) {
      NetThread* p = static_cast<NetThread*>(t);
      if (p){
        uv_loop_t* loop = podMalloc<uv_loop_t>();
        uv_loop_init(loop);
        p->m_loop = loop;
        uv_async_init(loop, &p->m_asyncs[NetThread::async_add_session], callAsyncAddSession);
        uv_async_init(loop, &p->m_asyncs[NetThread::async_stop_thread], callAsyncStopThread);
        uv_async_init(loop, &p->m_asyncs[NetThread::async_kick_session], callAsyncKickSession);
        uv_async_init(loop, &p->m_asyncs[NetThread::async_send_message], callAsyncSendMessage);
        for(auto& ptr : p->m_clientList) {
          uv_tcp_init(loop, ptr->m_tcp);
          callDoConnectting(ptr);
        }
        p->m_state = NetThread::_RUN_;
        uv_run(loop, UV_RUN_DEFAULT);
        uv_loop_close(loop);
        podFree(loop);
        p->m_loop = nullptr;
        p->m_clientList.clear();
      }
    }

    NetService::NetService(unsigned int t)
      :m_serviceData(new NetServiceData(t)) {
    }
    NetService::~NetService(){
      stop();
      m_serviceData.reset();
    }

    bool NetService::start() {
       if (!m_serviceData /*|| m_serviceData->m_nets.size()*/){
         return false;
       }
       uv_thread_create(&m_serviceData->m_mainThread, callService, this);
       m_serviceData->m_state = NetServiceData::_SERVICE_RUN_;
       return true;
    }

    void NetService::stop() {
      if(m_serviceData->m_state != NetServiceData::_SERVICE_STOP_) {
        uv_async_send(&m_serviceData->m_asyncStop);
        uv_thread_join(&m_serviceData->m_mainThread);
        m_serviceData->m_state = NetServiceData::_SERVICE_STOP_;
      }
    }

    bool NetService::remove(const NetName& name) {
      if(!m_serviceData->m_nets.hasData(name)) { return false; }
      auto c = m_serviceData->m_nets.getData(name);
      if(c->m_configs.m_serviceType == _SERVER_FLAG_) { return false; }
      for (auto& pair : m_serviceData->m_sessions.constRefMap()){
        if (pair.second->m_config.m_name == name){
          kick(pair.first);
          return true;
        }
      }
      return true;
    }

    bool NetService::add(const NetConfig& config, NetCallBackPtr calls) {
      if(config.m_name.empty()) { return false; }
      if(m_serviceData->m_nets.hasData(config.m_name)){ return false; }
      SignalPointer ptr(new NetSignalData(config, m_serviceData.get(), std::move(calls)));
      m_serviceData->m_nets.addData(config.m_name, ptr);
      
      if (NetServiceData::_SERVICE_RUN_ == m_serviceData->m_state){
        uv_async_send(&m_serviceData->m_asyncNew);
      }
      return true;
    }

    bool NetService::poll() {
      assert(m_serviceData && m_serviceData->m_state == NetServiceData::_SERVICE_RUN_);
      std::list<MessagePtr> msglist;
      std::list<SessionPtr> sessionList;
      size_t totalRecv = 0;
      size_t totalSend = 0;
      for(auto& t : m_serviceData->m_threads) {
        if(NetThread::_RUN_ == t->m_state) {
            {
              NetGuardLock locker(&t->m_mutexs[NetThread::mutex_recive]);
              msglist.insert(msglist.end(), t->m_recvList.begin(), t->m_recvList.end());
              t->m_recvList.clear();
              totalRecv += t->m_totalRealRecv;
              totalSend += t->m_totalRealSend;
            }
           {
             NetGuardLock locker(&t->m_mutexs[NetThread::mutex_session]);
             sessionList.insert(sessionList.end(), t->m_stateList.begin(), t->m_stateList.end());
             t->m_stateList.clear();
           }
        }
      }
      auto getCalls = [this](SessionPtr s)->const NetCallBackPtr&{
        MYASSERT(nullptr != s && m_serviceData->m_nets.hasData(s->m_config.m_name),
        "get session calls error with not found data :",
        nullptr != s ? s->m_config.m_name : "net config name not found");
        return m_serviceData->m_nets.getData(s->m_config.m_name)->m_calls;
      };

       for(auto& s : sessionList) {
         auto& calls = getCalls(s);
         if (calls){
           if(NetSession::_session_connect_ == s->m_state) {
             m_serviceData->m_sessions.addData(s->m_sessionId, s); //.insert(std::make_pair(s->m_sessionId, s));
             calls->m_connectCall(s->m_config.m_name, s->m_sessionId);
           }
           if(NetSession::_session_close_ == s->m_state) {
             calls->m_closeCall(s->m_config.m_name, s->m_sessionId);
             if(_CLIENT_FLAG_ == s->m_config.m_serviceType && nullptr == m_serviceData->m_nets.eraseData(s->m_config.m_name)) {
               MYASSERT(false, "not found client net config with name:", s->m_config.m_name);
             }
             m_serviceData->m_sessions.eraseData(s->m_sessionId); //(s->m_sessionId);
           }
         }
       }

       for (auto& m : msglist){
         auto s = m_serviceData->m_sessions.getData(m->session());
         if (s){
           auto& calls = getCalls(s);
           if(calls) { calls->m_messageCall(s->m_config.m_name, m);}
         }
         
       }
        //LOGDEBUG(" net send:", totalSend,  " recv:", totalRecv);
       return true;
    }

    bool NetService::send(const MessagePtr& msg) {
      auto s = m_serviceData->m_sessions.getData(msg->session());
      if(s) {
        auto t = s->thread();
        if(!t) { MYASSERT(false);  return false; }
        t->m_totalSendCount++;
        t->m_totalSendSize += msg->data()->length();
        NetGuardLock locker(&t->m_mutexs[NetThread::mutex_send]);
        t->m_sendList.push_back(msg);
        uv_async_send(&t->m_asyncs[NetThread::async_send_message]);
        return true;
      }
      return false;
    }
    bool NetService::send(const NetName& name, const MessagePtr& msg) {
      if(!m_serviceData->m_nets.hasData(name)) { return false; }
      for(auto& pair : m_serviceData->m_sessions.constRefMap()) {
        auto s = pair.second;
        if (s && s->m_config.m_name == name){
          MessagePtr ptr(msg->clone(s->m_sessionId));
          send(ptr);
        }
      }
      return true;
    }
    bool NetService::kick(const SessionId& id) {
      auto s = m_serviceData->m_sessions.getData(id);
      if(s) { 
        s->m_reconn = false;
        auto t = s->thread();
        if(!t) { MYASSERT(false);  return false; }
        NetGuardLock lock(&t->m_mutexs[NetThread::mutex_session]);
        t->m_kickList.push_back(s);
        uv_async_send(&t->m_asyncs[NetThread::async_kick_session]);
        return true;
      }
      return false;
    }
    bool NetService::isRun() const {
      return NetServiceData::_SERVICE_RUN_ == m_serviceData->m_state;
    }
    void NetService::serviceRun() {
      uv_loop_t* loop = podMalloc<uv_loop_t>();
      uv_loop_init(loop);
      m_serviceData->m_loop = loop;
      m_serviceData->m_asyncStop.data = this;
      m_serviceData->m_asyncNew.data = m_serviceData.get();
      // begin init listen server
      for (const auto& pair : m_serviceData->m_nets.constRefMap()){
        const auto& c = pair.second;
        if(_SERVER_FLAG_ == c->m_configs.m_serviceType) {
          struct sockaddr_in addr;
          uv_ip4_addr(c->m_configs.m_address.c_str(), c->m_configs.m_port, &addr);
          uv_tcp_init(loop, c->m_tcp);
          uv_tcp_bind(c->m_tcp, (const sockaddr*)&addr, 0);
          uv_listen((uv_stream_t*)(c->m_tcp), c->m_configs.m_maxConnect, callSessionConnect);
          c->m_run = true;
        }
      }
      //create work thread
      for(unsigned int i = 0; i < m_serviceData->m_workThreadCount; ++i) {
        ThreadPtr ptr(new NetThread());
        m_serviceData->m_threads.push_back(ptr);
      }
      //begin create client conn
      for(const auto& pair : m_serviceData->m_nets.constRefMap()) {
        const auto& c = pair.second;
        if(_CLIENT_FLAG_ == c->m_configs.m_serviceType) {
          SessionPtr s = m_serviceData->addNewSession(c->m_configs);
          auto t = s->thread();
          if(!t) { MYASSERT(false); }
          t->m_clientList.insert(s);
          t->m_onlines++;
          c->m_run = true;
        }
      }
      //call thread run
      for (auto& t : m_serviceData->m_threads){
        if(!t->m_loop) {
          uv_thread_create(&t->m_thread_work, callRWThreadRun, t.get());
        }
      }
      //run loop
      uv_async_init(loop, &m_serviceData->m_asyncStop, callStopSercive);
      uv_async_init(loop, &m_serviceData->m_asyncNew, callAddNet);
      uv_run(loop, UV_RUN_DEFAULT);
      uv_loop_close(loop);
      podFree(loop);
      loop = nullptr;
      m_serviceData->m_loop = nullptr;
    }

    void NetService::serviceStop() {
      //停止读写线程
      for (auto&t : m_serviceData->m_threads){
        uv_async_send(&t->m_asyncs[NetThread::async_stop_thread]);
        uv_thread_join(&t->m_thread_work);
      }
      uv_stop(m_serviceData->m_loop);
    }

    









  }
}