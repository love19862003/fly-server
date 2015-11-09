/********************************************************************

  Filename:   TypeDefine

  Description:TypeDefine

  Version:  1.0
  Created:  27:8:2015   16:46
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "server/TypeDefine.h"
#include "utility/MyJson.h"
#include "net/NetCore.h"
#include "database/TaskThread.h"
using namespace ShareSpace;
namespace Server {

  namespace {
    const std::string sNCName("name");
    const std::string sNCAddress("address");
    const std::string sNCPort("port");
    const std::string sNCTime("time");
    const std::string sNCMaxConn("maxConnect");
    const std::string sNCService("Service");
    const std::string sNCAutoReconn("autoRecon");
    const std::string sDBConfig("database");
    const std::string sRedisConfig("redis");
    const std::string sDBName("db");
    const std::string sDBUrl("url");
    const std::string sDBUser("user");
    const std::string sDBPassword("password");
    const std::string sDBTread("thread");
    const std::string sDBIndex("index");
  }

  ServerOption::ServerOption(ShareSpace::NetSpace::NetManager& net,
                             const std::string& zone,
                             bool cacheEnable, 
                             const std::string& cacheName) 
   : _net(net)
   , _zone(zone)
   , _cacheEnable(cacheEnable)
   , _cacheName(cacheName){

  }
  bool LoadConfig::sLoadNetConfig(const Utility::MyJson& json, const std::string& path, NetSpace::NetConfig& config) {
    try
    {
      auto fun = [&config] (const Utility::MyJson& js)->NetSpace::NetConfig& {
        config.m_name = js.get(sNCName, std::string());
        config.m_address = js.get(sNCAddress, std::string());
        config.m_port = js.get(sNCPort,  int(0));
        config.m_timeOut = js.get(sNCTime,  int(0));
        config.m_maxConnect = js.get(sNCMaxConn,  int(1000));
        config.m_serviceType = js.get(sNCService, bool(false)) ? NetSpace::_SERVER_FLAG_ : NetSpace::_CLIENT_FLAG_;
        config.m_autoReconnect = false;
        if(NetSpace::_CLIENT_FLAG_ == config.m_serviceType) {
          config.m_autoReconnect = js.get(sNCAutoReconn, bool(false));
        }
        return config;
      };

      json.getGroup<NetSpace::NetConfig>(path, fun);
      return true;
    }
    catch (...){
      return false;
    }
  }
  bool  LoadConfig::sLoadDBConfig(const Utility::MyJson& json, const std::string& path, ShareSpace::DB::Config& config) {
    try {
      auto fun = [&config] (const Utility::MyJson& js)->DB::Config& {
        config.m_db_name = js.get(sDBName, std::string("database"));
        config.m_url = js.get(sDBUrl, std::string("127.0.0.1:3306"));
        config.m_thread = js.get(sDBTread,  int(1));
        config.m_password = js.get(sDBPassword, std::string("root"));
        config.m_user = js.get(sDBUser, std::string("root"));
        config.m_index = js.get(sDBIndex,  int(0));
        return config;
      };
      json.getGroup<DB::Config>(path, fun);
      return true;
    } catch(...) {
      return false;
    }
  }

}