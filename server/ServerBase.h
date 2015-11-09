/********************************************************************

  Filename:   ServerBase

  Description:ServerBase

  Version:  1.0
  Created:  31:8:2015   10:39
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __ServerBase_H__
#define __ServerBase_H__
#include "utility/TimeEvent.h"
#include "server/NetTypeDefine.h"
#include "utility/MyJson.h"
struct lua_State;
namespace Server {
  class ServerBase
  {
  public:
    explicit ServerBase(ServerOption& option, const std::string& file, bool lua = false);
    virtual ~ServerBase();
    typedef ShareSpace::Utility::Timer TimeQueue;
  public:
    bool start();
    void run(unsigned int diff);
    void stop();
    bool command(const std::string& /*cmd*/) { return true; }

    int addTimeEvent(TimeQueue::time_type delay, TimeQueue::time_type interval, const TimeQueue::CallFun& cb,  int repeated = -1);
    int addTimeEvent(TimeQueue::time_type interval, const TimeQueue::CallFun& cb, int repeated = -1);
    bool cancelTimeEvent(int id);
    bool setTimeEventInterval(int id, TimeQueue::time_type interval);

    int addLuaTimeEvent(TimeQueue::time_type delay, TimeQueue::time_type interval, int repeated);

    const std::string& timeZone() const { return m_option._zone; }
    const std::string& propertyFile() const { return m_configFilePath; }


    bool initLuaState();
    void closeLuaState();

    void logDebug(const char* info);
    void logInfo(const char* info);
    void logWarn(const char* info);
    void logError(const char* info);
    void logFatal(const char* info);

  protected:
    virtual bool doInit() = 0;
    virtual bool doRegister() = 0;
    virtual bool doCommand() = 0;
    virtual void doRun(unsigned int) = 0;
    virtual void doStop() = 0;
    virtual bool doInitLua() { return true; }
    virtual void doCloseLua() { }
  protected:
    const ServerOption& option() const { return m_option; }
    ServerOption& option() { return m_option; }
    ServerOption& m_option;
    const std::string m_configFilePath;
  private:
    ServerBase(const ServerBase&) = delete;
    ServerBase& operator = (const ServerBase&) = delete;
    ServerBase& operator = (ServerBase&&) = delete;
    TimeQueue m_timer;
  protected:
    bool m_useLua = false;
    lua_State* m_luaState = nullptr;
    
  };
}
#endif