/********************************************************************

  Filename:   ServerBase

  Description:ServerBase

  Version:  1.0
  Created:  31:8:2015   11:01
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "server/ServerBase.h"
#include "utility/TimeInterface.h"
#include "log/MyLog.h"
#include "luatinker/lua_tinker.h"
#include "pbc-master/pbc.h"
#include "pbc-master/pbc-lua.h"

using namespace ShareSpace;
namespace Server {
  ServerBase::ServerBase(ServerOption& option, const std::string& file, bool lua) : m_option(option), m_configFilePath(file), m_timer(), m_useLua(lua) {

  }
  ServerBase::~ServerBase() {
    m_timer.stop();
  }

  bool ServerBase::start() {
    if(!doInit()) { return false; }
    if(!doRegister()) { return false; }
    if(!doCommand()) { return false; }
    if(!initLuaState()) { return false; }
    auto now = Utility::nowOfmilliseconds();
    m_timer.reset(now);
    return true;
  }
  bool ServerBase::initLuaState() {
    if(!m_useLua) { return true; }
    m_luaState = luaL_newstate();
    lua_tinker::openLuaLibs(m_luaState);
    lua_tinker::openLuaLib(m_luaState, "protobuf.c", luaopen_protobuf_c);

    lua_tinker::class_add<ServerBase>(m_luaState, "ServerBase");
    lua_tinker::class_def<ServerBase>(m_luaState, "addLuaTimeEvent", &ServerBase::addLuaTimeEvent);
    lua_tinker::class_def<ServerBase>(m_luaState, "cancelTimeEvent", &ServerBase::cancelTimeEvent);
    lua_tinker::class_def<ServerBase>(m_luaState, "setTimeEventInterval", &ServerBase::setTimeEventInterval);
    lua_tinker::class_def<ServerBase>(m_luaState, "logDebug", &ServerBase::logDebug);
    lua_tinker::class_def<ServerBase>(m_luaState, "logInfo", &ServerBase::logInfo);
    lua_tinker::class_def<ServerBase>(m_luaState, "logWarn", &ServerBase::logWarn);
    lua_tinker::class_def<ServerBase>(m_luaState, "logError", &ServerBase::logError);
    lua_tinker::class_def<ServerBase>(m_luaState, "logFatal", &ServerBase::logFatal);
    return doInitLua();
  }
  void ServerBase::closeLuaState() {
    if(nullptr != m_luaState) {
      doCloseLua();
      lua_close(m_luaState);
      m_luaState = nullptr;
    }
  }
  void ServerBase::run(unsigned int diff) {
    auto now = Utility::nowOfmilliseconds();
    m_timer.run(now);
    doRun(diff);
  }

  void ServerBase::stop() {
    doStop();
    closeLuaState();
    m_timer.stop();
  }

  int ServerBase::addTimeEvent(TimeQueue::time_type delay, TimeQueue::time_type interval, const TimeQueue::CallFun& cb, int repeated) {
    auto now = Utility::nowOfmilliseconds();
    return m_timer.addEvent(now, delay, interval, cb, repeated);
  }
  int ServerBase::addTimeEvent(TimeQueue::time_type interval, const TimeQueue::CallFun& cb, int repeated) {
    return  addTimeEvent(0, interval, cb, repeated);
  }
  int ServerBase::addLuaTimeEvent(TimeQueue::time_type delay, TimeQueue::time_type interval, int repeated) {
    if (m_luaState){
      TimeQueue::CallFun cb = [=] (int id, TimeQueue::time_type last, TimeQueue::time_type inte) {
        lua_tinker::call<void>(m_luaState, "eventCall", id, last, inte);
      };
      return addTimeEvent(delay, interval, cb, repeated);
    }
    return 0;
  }

  bool ServerBase::cancelTimeEvent(int id) {
    return m_timer.cancelEvent(id);
  }
  bool ServerBase::setTimeEventInterval(int id, TimeQueue::time_type interval) {
    return m_timer.setInterval(id, interval);
  }

  void  ServerBase::logDebug(const char* info) {
    LOGDEBUG(info);
  }
  void  ServerBase::logInfo(const char* info) {
    LOGINFO(info);
  }
  void  ServerBase::logWarn(const char* info) {
    LOGWARNING(info);
  }
  void  ServerBase::logError(const char* info) {
    LOGERROR(info);
  }
  void  ServerBase::logFatal(const char* info) {
    LOGFATAL(info);
  }

}