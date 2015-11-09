/********************************************************************

  Filename:   FannyServer

  Description:FannyServer

  Version:  1.0
  Created:  16:9:2015   16:32
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "server/FannyServer.h"
#include "utility/TimeEvent.h"
#include <google/protobuf/message.h>
#include "server/TypeDefine.h"
#include "utility/MapTemplate.h"
#include "net/NetManager.h"
#include "utility/MyJson.h"
#include "luatinker/lua_tinker.h"
#include "pbc-master/pbc-lua.h"
#include "pbc-master/pbc.h"
#include "log/MyLog.h"
#include "utility/TimeInterface.h"
#include "database/BindMysqlToLua.h"
#include "database/MysqlManager.h"
#include "database/BindRedisToLua.h"
#include "database/RedisManager.h"
#include "cache/MemoryCache.h"
namespace ph = std::placeholders;
using namespace ShareSpace;
namespace Server {
  class FannyServer::Impl {
  public:
    explicit Impl(ServerOption& option, const std::string& file)
      : m_option(option), m_luaFile(file), m_luaState(nullptr) {
      if(m_option._cacheEnable && !m_option._cacheName.empty()) {
        m_cache = std::move(CacheSpace::Cache::createCache(CacheSpace::Cache::_cache_normal_, m_option._cacheName));
      }
    };
    virtual ~Impl() {
      if(m_luaState) {
        lua_close(m_luaState);
        m_luaState = nullptr;
      }

      for(auto& pair : m_Mysqls) {
        auto& mysql = pair.second;
        mysql->stop();
      }
      m_Mysqls.clear();
      for(auto& pair : m_redis) {
        auto& redis = pair.second;
        redis->stop();
      }
      m_redis.clear();
      m_cache.reset();
    }
    typedef ShareSpace::Utility::Timer TimeQueue;
    typedef  google::protobuf::Message pbMsg;
    typedef  std::shared_ptr<pbMsg> pbMsgPtr;
    //��������
    bool start() {
      auto now = Utility::nowOfmilliseconds();
      m_timer.reset(now);
      return initLuaState();
    }
    //run
    void run(unsigned int /*diff*/) {
      auto now = Utility::nowOfmilliseconds();
      m_timer.run(now);
      // run mysql
      for(auto& pair : m_Mysqls) {
        auto& mysql = pair.second;
        mysql->poll();
      }
      for(auto& pair : m_redis) {
        auto& redis = pair.second;
        redis->poll();
      }
    }
    //�رշ�����
    void stop() {
      closeLuaState();
      m_timer.stop();

    }
    bool command(const std::string& cmd) {
      return luaCommand(cmd);
    }
  private:
    //��ʱ��
    TimeQueue m_timer;
  public:
    //////////////////////////////////////////////////////////////////////////
    //����LUA��ʱ���¼�
    //delay ��ǰ�ӳٶ��
    //interval ʱ����
    //repeated ִ�д��� -1��������
    //return �¼�ID
    int addEvent(TimeQueue::time_type delay, TimeQueue::time_type interval, int repeated) {
      if(m_luaState) {
        TimeQueue::CallFun cb = [=] (int id, int re, TimeQueue::time_type /*inte*/) {
          lua_tinker::call<void>(m_luaState, "eventCall", id, re == 1);
        };
        return m_timer.addEvent(delay, interval, cb, repeated);
      }
      return 0;
    }
    //ȡ��LUA��ʱ���¼�
    //ID �¼�ID
    //return �Ƿ�ɹ�
    bool cancelTimeEvent(int id) {
      return m_timer.cancelEvent(id);
    }
    //�޸Ķ�ʱ�����
    //ID �¼�ID
    //interval ʱ����
    //return �Ƿ�ɹ�
    bool setTimeEventInterval(int id, TimeQueue::time_type interval) {
      return m_timer.setInterval(id, interval);
    }

    //////////////////////////////////////////////////////////////////////////
    //����ģ��ص���Ϣ
    NetSpace::NetCallBackPtr makeCall() {
      NetSpace::NetCallBackPtr ptr(new  NetSpace::NetCallBack);
      ptr->m_messageCall = std::bind(&FannyServer::Impl::handleNetMessage, this, ph::_1, ph::_2);
      ptr->m_connectCall = std::bind(&FannyServer::Impl::onConnect, this, ph::_1, ph::_2);
      ptr->m_closeCall = std::bind(&FannyServer::Impl::onClose, this, ph::_1, ph::_2);
      return std::move(ptr);
    }
    bool removeSocket(std::string name) {
      return m_option._net.remove(name);
    }
    //����һ�������˿ڵ�server socket
    //name ������
    //URL ��ַ
    //port �˿�
    //maxConn ���������
    //return �Ƿ�ɹ�
    bool addServerSocket(const char* name, const char* url, unsigned int port, unsigned int maxConn) {
      NetSpace::NetConfig  config;
      config.m_name = name;
      config.m_address = url;
      config.m_port = port;
      config.m_maxConnect = maxConn;
      config.m_serviceType = NetSpace::_SERVER_FLAG_;
      config.m_autoReconnect = false;
      return m_option._net.add(config, std::move(makeCall()));
    }
    //����һ�����Ӷ˿ڵ�client socket
    //name ������
    //URL ��ַ
    //port �˿�
    //return �Ƿ�ɹ�
    bool addConnSocket(const char* name, const char* url, unsigned int port) {
      NetSpace::NetConfig  config;
      config.m_name = name;
      config.m_address = url;
      config.m_port = port;
      config.m_maxConnect = 1;
      config.m_serviceType = NetSpace::_CLIENT_FLAG_;
      config.m_autoReconnect = true;
      return m_option._net.add(config, std::move(makeCall()));
    }
    //��ʼ��LUA
    //return �Ƿ�ɹ�
    bool initLuaState() {
      m_luaState = luaL_newstate();
      lua_tinker::openLuaLibs(m_luaState);
      lua_tinker::openLuaLib(m_luaState, "protobuf.c", luaopen_protobuf_c);

      lua_tinker::class_add<FannyServer::Impl>(m_luaState, "FannyServer::Impl");
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "addEvent", &FannyServer::Impl::addEvent);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "cancelEvent", &FannyServer::Impl::cancelTimeEvent);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "setEventInterval", &FannyServer::Impl::setTimeEventInterval);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "logDebug", &FannyServer::Impl::logDebug);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "logInfo", &FannyServer::Impl::logInfo);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "logWarn", &FannyServer::Impl::logWarn);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "logError", &FannyServer::Impl::logError);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "logFatal", &FannyServer::Impl::logFatal);

      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "addServerSocket", &FannyServer::Impl::addServerSocket);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "addConnSocket", &FannyServer::Impl::addConnSocket);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "kickSession", &FannyServer::Impl::kickSession);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "sendMessage", &FannyServer::Impl::sendMessage);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "sendBuffer", &FannyServer::Impl::sendBuffer);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "sendToAll", &FannyServer::Impl::sendToAll);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "sendBufferToAll", &FannyServer::Impl::sendToAll2);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "removeSocket", &FannyServer::Impl::removeSocket);


      //��MYSQL TO LUA
      DB::LuaMySqlResult::registerToLua(m_luaState);
      DB::LuaMyPSCall::registerToLua(m_luaState);
      DB::LuaRedisArgs::registerToLua(m_luaState);
      DB::LuaRedisResult::registerToLua(m_luaState);

      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "addMysql", &FannyServer::Impl::addMysql);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "sMysqlQuery", &FannyServer::Impl::sMysqlQuery);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "sMysqlPsQuery", &FannyServer::Impl::sMysqlPsQuery);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "mysqlQuery", &FannyServer::Impl::mysqlQuery);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "mysqlPsQuery", &FannyServer::Impl::mysqlPsQuery);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "addRedis", &FannyServer::Impl::addRedis);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "redisQuery", &FannyServer::Impl::redisQuery);

      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "hasCache", &FannyServer::Impl::hasCache);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "loadCache", &FannyServer::Impl::loadCache);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "saveCache", &FannyServer::Impl::saveCache);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "removeCache", &FannyServer::Impl::removeCache);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "putRemoveCache", &FannyServer::Impl::putRemoveCache);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "putCache", &FannyServer::Impl::putCache);
      lua_tinker::class_def<FannyServer::Impl>(m_luaState, "putExecute", &FannyServer::Impl::putExecute);

      lua_tinker::dofile(m_luaState, m_luaFile.c_str());
      lua_tinker::call<bool>(m_luaState, "init", this);
      return true;
    }
    //�ر�LUA
    void closeLuaState() {
      lua_tinker::call<void>(m_luaState, "stop");
    }
    //�ȼ���lua
    bool luaCommand(const std::string cmd = "") {
      return lua_tinker::call<bool>(m_luaState, "command", cmd);
    }

    //LOG DEBUG���
    void logDebug(const char* info) {
      LOGDEBUG(info);
    }
    //LOG INFO���
    void  logInfo(const char* info) {
      LOGINFO(info);
    }
    //LOG WARNING���
    void  logWarn(const char* info) {
      LOGWARNING(info);
    }
    //LOG ERROR���
    void  logError(const char* info) {
      LOGERROR(info);
    }
    //LOG FATAL���
    void  logFatal(const char* info) {
      LOGFATAL(info);
    }

    // pack message
    NetSpace::MessagePtr pack(NetSpace::SessionId s, const std::string& name, const void* buffer, size_t len, PlayerId pid) {
      int nameLen = name.length();
      int size = sizeof(NetSpace::NetBlock::head) + sizeof(PlayerId) + sizeof(int) + nameLen + len + 1;
      std::unique_ptr<NetSpace::NetBuffer> b(new NetSpace::NetBuffer(size));
      b->writeData(sizeof(NetSpace::NetBlock::head)); // set write pos
      b->tailPod<PlayerId>(pid);
      b->tailPod<int>(nameLen);
      b->tailData(name.c_str(), nameLen);
      b->tailData((const char*)buffer, len);
      NetSpace::MessagePtr ptr(new NetSpace::NetBlock(s, std::move(b)));
      return ptr;
    }
    //unpack message
    void* unPack(const NetSpace::MessagePtr& ptr, PlayerId& pid, size_t& len, std::string& name) {
      auto& b = ptr->data();
      if(!b->readPod<PlayerId>(pid)) { return nullptr; }
      int nameLen = 0;
      if(!b->readPod<int>(nameLen)) { return nullptr; }
      char* p = b->readData(nameLen);
      if(!p) { return nullptr; }
      name = std::string(p, nameLen);
      len = b->needReadLength();
      return b->readData(len);
    }
    //kickһ�����ӡ� �����client socket ��ֹͣ�˷���
    //session ����ID
    //return �Ƿ�ɹ�
    bool kickSession(NetSpace::SessionId s) {
      return  m_option._net.kick(s);
    }
    //������Ϣ
    //name������ģ������
    //session ����ID
    //msgName ��Ϣ����
    //playerId ���ID
    void sendToAll(const std::string name, const std::string msgName, const std::string buffer) {
      auto ptr = pack(0, msgName, buffer.c_str(), buffer.length(), 0);
      m_option._net.send(name, ptr);
    }
    void sendToAll2(const std::string name, const std::string msgName, const void* buffer, size_t len) {
      auto ptr = pack(0, msgName, buffer, len, 0);
      m_option._net.send(name, ptr);
    }

    //������Ϣ
    //session ����ID
    //msgName ��Ϣ����
    //playerId ���ID
    void sendMessage(NetSpace::SessionId s, const std::string msgName, const std::string buffer, PlayerId pid) {
      auto ptr = pack(s, msgName, buffer.c_str(), buffer.length(), pid);
      m_option._net.send(ptr);
    }
    //������Ϣ2
    //session ����ID
    //msgName ��Ϣ����
    //len ����
    //playerId ���ID
    void sendBuffer(NetSpace::SessionId s, const char* msgName, const void* buffer, size_t len, PlayerId pid) {
      auto ptr = pack(s, msgName, buffer, len, pid);
      m_option._net.send(ptr);
    }
    //�������Ϣ. �ص�LUA
    //lua:handleMessage(name , session, msgName, buffer, len ,playerId)
    //name ��������
    //session ����ID
    //msgName ��Ϣ����
    //buffer ����
    //len ����
    //playerId ���ID
    void handleNetMessage(const NetSpace::NetName& name, const NetSpace::MessagePtr& ptr) {
      PlayerId pid = 0;
      std::string msgName;
      size_t len = 0;
      void* buffer = unPack(ptr, pid, len, msgName);
      if(len > 0) {
        lua_tinker::call<void>(m_luaState, "handleMessage", name, ptr->session(), msgName, buffer, len, pid);
      } else {
        MYASSERT(false, "handle msg error");
        kickSession(ptr->session());
      }
    }
    //һ��socket���ӳɹ�
    //name ��������
    //s ���ӵ�ID
    void onConnect(const NetSpace::NetName& name, const NetSpace::SessionId& s) {
      return lua_tinker::call<void>(m_luaState, "netConnect", name, s);
    }
    //һ��socket�ر�
    //name ��������
    //s ���ӵ�ID
    void onClose(const NetSpace::NetName& name, const NetSpace::SessionId& s) {
      return lua_tinker::call<void>(m_luaState, "netClose", name, s);
    }
  public:
    //����һ��MYSQL���ݲ�ѯ
    //mysqlName ������
    //url MySQL��ַ "127.0.0.1:3306"
    //user �˺�
    //pwd ����
    //DB ���ݿ�����
    //TC Ĭ���߳���
    //return �Ƿ�ɹ�
    bool addMysql(std::string mysqlName, std::string url, std::string user, std::string pwd, std::string db, int tc) {
      if(m_Mysqls.count(mysqlName) > 0) { return false; }
      DB::Config c;
      c.m_user = user;
      c.m_db_name = db;
      c.m_password = pwd;
      c.m_thread = tc;
      c.m_url = url;
      c.m_index = 0;
      MysqlType mysql(new DB::MysqlManager(c));
      mysql->start();
      m_Mysqls.insert(std::make_pair(mysqlName, std::move(mysql)));
      return true;
    }
    //�����߳�������ѯһ��MySQL����
    //url MySQL��ַ "127.0.0.1:3306"
    //user �˺�
    //pwd ����
    //DB ���ݿ�����
    //SQL ���
    //����ִ�е��¼�
    unsigned int sMysqlQuery(std::string url, std::string user, std::string pwd, std::string db, std::string sql) {
      DB::Config c;
      c.m_user = user;
      c.m_db_name = db;
      c.m_password = pwd;
      c.m_thread = 1;
      c.m_url = url;
      c.m_index = 0;
      ++m_currentCallId;
      unsigned int callId = m_currentCallId;
      auto fun = [=] (DB::STMTPointer& p)->bool {
        std::unique_ptr<DB::LuaMySqlResult> result(new DB::LuaMySqlResult(p->getResultSet()));
        lua_tinker::call<void>(m_luaState, "DBCall", callId, result.get());
        return true;
      };
      DB::mysqlBlockTask(c, sql, fun);
      return callId;
    }
    //�����߳�������ѯһ��MySQL����
    //url MySQL��ַ "127.0.0.1:3306"
    //user �˺�
    //pwd ����
    //DB ���ݿ�����
    //SQL ���
    //����ִ�е��¼�
    bool sMysqlPsQuery(std::string url, std::string user, std::string pwd, std::string db, std::string sql, DB::LuaMyPSCall luaData) {
      DB::Config c;
      c.m_user = user;
      c.m_db_name = db;
      c.m_password = pwd;
      c.m_thread = 1;
      c.m_url = url;
      c.m_index = 0;
      std::shared_ptr<DB::LuaMyPSCall> ptr(new DB::LuaMyPSCall(luaData));
      auto fun = [=] (sql::PreparedStatement* p)->void {
        ptr->execute(p);
      };
      DB::mysqlBlockPreparTask(c, sql, fun);
      return true;
    }
    //�����߳�������ѯһ��MySQL����
    //mysql ִ�������MySQL������
    //sql ���
    //flag ���߳�ִ�б�ʾ��0�������� ����������ִ���̱߳�ʾ
    //����ִ�е��¼�ID ���ص������߳�ִ�У�
    unsigned int mysqlQuery(std::string mysql, std::string sql, int flag) {
      if(m_Mysqls.count(mysql) <= 0) { return -1; }
      auto& p = m_Mysqls.at(mysql);
      ++m_currentCallId;
      unsigned int callId = m_currentCallId;
      auto fun = [=] (DB::STMTPointer& p)->bool {
        std::unique_ptr<DB::LuaMySqlResult> result(new DB::LuaMySqlResult(p->getResultSet()));
        lua_tinker::call<void>(m_luaState, "DBCall", callId, result.get());
        return true;
      };
      p->addTask(sql, fun, flag);
      return callId;
    }
    //�����߳�������ѯһ��MySQL����
    //mysql ִ�������MySQL������
    //sql ���
    //flag ���߳�ִ�б�ʾ��0�������� ����������ִ���̱߳�ʾ
    //����ִ�е��¼�ID  ���ص��ڹ����߳�ִ�У�
    bool mysqlPsQuery(std::string mysql, std::string cmd, int flag, DB::LuaMyPSCall luaData) {
      if(m_Mysqls.count(mysql) <= 0) { return -1; }
      auto& p = m_Mysqls.at(mysql);
      //++m_currentCallId;
      //unsigned int callId = m_currentCallId;
      std::shared_ptr<DB::LuaMyPSCall> ptr(new DB::LuaMyPSCall(luaData));
      auto fun = [=] (sql::PreparedStatement* p)->void {
        ptr->execute(p);
      };
      p->addPreparTask(cmd, fun, flag);
      return true;
    }
  private:
    ServerOption& m_option;
    const std::string m_luaFile;
    lua_State* m_luaState = nullptr;
    typedef std::unique_ptr<DB::MysqlManager> MysqlType;
    std::map<std::string, MysqlType> m_Mysqls;
    unsigned int m_currentCallId = 0;
  public:
    //����һ��REDIS���ݲ�ѯ
    //name ������
    //url REDIS��ַ "127.0.0.1:3306"
    //TC Ĭ���߳���
    //return �Ƿ�ɹ�
    bool addRedis(std::string name, std::string url, int tc) {
      if(m_redis.count(name) > 0) { return false; }
      DB::Config c;
      c.m_thread = tc;
      c.m_url = url;
      c.m_index = 0;
      RedisType redis(new DB::RedisManager(c));
      redis->start();
      m_redis.insert(std::make_pair(name, std::move(redis)));
      return true;
    }
    unsigned int redisQuery(const std::string name,DB::LuaRedisArgs args, bool call, int flag) {
      if(m_redis.count(name) <= 0) { return -1; }
      auto& p = m_redis.at(name);
      ++m_currentCallId;
      unsigned int callId = m_currentCallId;
      DB::RedisCall fun = nullptr;
      if (call){
        fun = [=] (const DB::RedisResult::ResultPoniter&  p)->void {
          std::unique_ptr<DB::LuaRedisResult> ptr(new DB::LuaRedisResult(p.get()));
          lua_tinker::call<void>(m_luaState, "DBCall", callId, ptr.get());
        };
      }
      if (args.args().empty()){
        p->addTask(args.command(), fun, flag);
      } else {
        p->addTask(args.command(),args.args(), fun, flag);
      }
      return callId;
    }
  private:
    typedef std::unique_ptr<DB::RedisManager> RedisType;
    std::map<std::string, RedisType> m_redis;
  public:
    bool hasCache() const {
      return  nullptr != m_cache;
    }

    std::string loadCache(const char* key) {
      if(!hasCache()) { MYASSERT(false, "not found cache"); return ""; }
      auto p = m_cache->load(key);
      if (p){return p.get();}
      return "";
    }
    bool saveCache(const char* key, std::string value) {
      if(!hasCache()) { MYASSERT(false, "not found cache"); return false; }
      return m_cache->save(key, value);
    }
    bool removeCache(const char* key) {
      if(!hasCache()) { MYASSERT(false, "not found cache"); return false; }
      return m_cache->remove(key);
    }
    void putRemoveCache(const char* key) {
      if(!hasCache()) { MYASSERT(false, "not found cache"); return; }
      return m_cache->batchDelete(key);
    }
    void putCache(const char* key, std::string value) {
      if(!hasCache()) { MYASSERT(false, "not found cache"); return ; }
      return m_cache->batchPut(key, value);
    }
    bool putExecute() {
      if(!hasCache()) { MYASSERT(false, "not found cache"); return false; }
      return m_cache->batchExecute();
    }
  private:
    typedef CacheSpace::Cache::pointer CachePointer;
    CachePointer m_cache;
  private:
    Impl(const Impl&) = delete;
    Impl& operator = (const Impl&) = delete;
    Impl& operator = (Impl&&) = delete;
  };
}
TemplateServerCreateInterface(FannyServer)
