#include <thread>
#include <iostream>
#include <atomic>
#include <signal.h>
#include <time.h>
#include <thread>
#include <functional>
#include "server/FannyServer.h"
#include "message/protocal_all.h"
#include "server/NetTypeDefine.h"
#include "server/Version.h"
#include "utility/MyJson.h"
#include "log/MyLog.h"
#include <mutex>

using namespace ShareSpace;

namespace {
  const std::string sLogConfigName("log");
  const std::string sThreadConfig("thread");
  const std::string sZone("zone");
  const std::string sTick("tick");
  const std::string sEnableCache("enbaleCache");
  const std::string sCacheName("cacheName");
  const std::string sLua("lua");
  const std::string sFile("file");
}

template<typename T>
std::unique_ptr<T> createNetObject(Server::ServerOption& op, const std::string& luaFile) {
    return std::unique_ptr<T>(new T(op, luaFile));
}

static std::atomic<bool> isRunning(true);
static std::function<void()> quitFunction = nullptr;
void signalHandler(int /*sig*/) {
  isRunning = false;
  if(quitFunction) {
    quitFunction();
  }
}

int main(int argc, char* argv[]) {
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  const char*  file = "config.json";
  if(argc >= 2) { file = argv[1]; }
  Utility::MyJson json(file);
  auto logConfig = json.get(sLogConfigName, std::string("log.properties"));
  LOGINIT(logConfig.c_str());
  LOGINFO("server version:", staticVersion());
  LOGINFO("revision:", staticRevision());
  std::cout<<"version:" << staticVersion() << std::endl;
  unsigned int tc = json.get(sThreadConfig, int(1));
  unsigned int tickMilliSeconds = json.get(sTick, int(3000));
  bool cacheEnable = json.get(sEnableCache, bool(false));
  std::string cacheName = json.get(sCacheName, std::string());
  if (cacheEnable && cacheName.empty()){
    MYASSERT(false, "enable cache but cache name empty");
#ifndef _DEBUG
    google::protobuf::ShutdownProtobufLibrary();
    LOGRELEASE();
    return 1;
#endif // _DEBUG
  }
  NetSpace::NetManager service(tc);
  auto zone = json.get(sZone, std::string("MST+08"));
  Server::ServerOption option(service, zone, cacheEnable, cacheName);
  std::string luaFile = json.get(sLua, std::string("../lua/main.lua"));
#ifndef _DEBUG
  signal(SIGABRT, signalHandler);
  signal(SIGINT, signalHandler);
#endif

  auto server = createNetObject<Server::FannyServer>(option, luaFile);

  if(server && !server->start()) {
    MYASSERT(false, "start server failed !!");
    return 1;
  }
  service.start();
  std::clock_t currentTick, lastTick;
  currentTick = lastTick = std::clock();

  quitFunction = [&] ()->void {
    if(server) { server->stop(); }
  };
  auto tick = [&] (bool reset)->std::chrono::milliseconds {
    currentTick = std::clock();
    auto d = (double)(currentTick - lastTick) / CLOCKS_PER_SEC * 1000;
    if(reset) { lastTick = currentTick; }
    return std::chrono::milliseconds(static_cast<long>(d));
  };
#ifdef _DEBUG
  std::string _command;
  std::mutex _mutex;
  std::thread commandThread([&] ()->void {
    while(true) {
      std::string str;
      std::cin >> str;
      {
        std::lock_guard<std::mutex> lock(_mutex);
        _command = str;
        if("stop" == str) { return; }
      }

    }
  });

  auto commandCall = [&] () {
    std::lock_guard<std::mutex> lock(_mutex);
    if(_command.empty()) { return; }
    if ("stop" == _command ){
      signalHandler(0);
      return;
    } else { if(server) { server->command(_command); _command.clear(); } }
  };
#endif // _DEBUG
  while(isRunning.load()){
#ifdef _DEBUG
    commandCall();
#endif // _DEBUG
    auto diff = tick( true).count();
    service.poll();
    if(server) { server->run(diff); }
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
  }

  do {
    service.poll();
  } while(tick(false).count() < tickMilliSeconds);
  service.stop();
#ifdef _DEBUG
  commandThread.join();
#endif
  if(server) { server.reset(); }
  google::protobuf::ShutdownProtobufLibrary();
  LOGRELEASE();
}
