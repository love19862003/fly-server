/********************************************************************

  Filename:   TypeDefine

  Description:TypeDefine

  Version:  1.0
  Created:  27:8:2015   16:10
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __TypeDefine_H__
#define __TypeDefine_H__
#include <string>

namespace ShareSpace { 
  namespace DB { struct Config; } 
  namespace Utility { class MyJson; }
  namespace NetSpace { struct NetConfig; class NetManager; }
}
namespace Server {
  struct ServerOption 
  {
    explicit ServerOption(ShareSpace::NetSpace::NetManager&, const std::string&, bool, const std::string&);
    ShareSpace::NetSpace::NetManager& _net;     // net module
    std::string _zone;
    bool _cacheEnable;
    std::string _cacheName;
    //ShareSpace::GMCommand& _gm;
    //ShareSpace::GameConfig& _config;
  };

  typedef unsigned long PlayerId;
  struct LoadConfig {
  static bool sLoadNetConfig(const ShareSpace::Utility::MyJson& json,
                      const std::string& path,
                      ShareSpace::NetSpace::NetConfig& config);
  static bool sLoadDBConfig(const ShareSpace::Utility::MyJson& json,
                     const std::string& path,
                     ShareSpace::DB::Config& config);
  };
}
#endif