package.path = package.path..";../lua/?.lua;../lua/common/?.lua;../../pbs/?.lua"
package.path = package.path..";../lua/module/?.lua;../lua/db/?.lua;../lua/server/?.lua;../lua/player/?.lua"
function require_ex( _mname )
  --print( string.format("require_ex = %s", _mname) )
  if package.loaded[_mname] then
    print( string.format("require_ex module[%s] reload", _mname))
  end
  package.loaded[_mname] = nil
  return require( _mname )
end

require_ex ("functions")
require_ex ("mysql")
require_ex ("event")
require_ex ("net")
require_ex ("socketListen")
require_ex ("socketConn")
require_ex ("Manager")
require_ex ("reload")
require_ex ("redis")
require_ex ("cache")


local Service = nil
function logDB(info)
    assert(Service)
    Service:logDebug(info)
end
function logInfo(info)
    assert(Service)
    Service:logInfo(info)
end
function logWarn(info)
    assert(Service)
    Service:logWarn(info)
end
function logError(info)
    assert(Service)
    Service:logError(info)
end
function logFatal(info)
    assert(Service)
    Service:logFatal(info)
end
function nowTime()
    return os.time()
end
OpenServers = {}
ServerConfig =  require("config")
function init( server)
--初始化服务器
  Service = server
  local pbs = require_ex("registerPb")
  pbs.registerPbs("../../pbs/")

  if true == Service:hasCache() then
    require("cache")
    CACHE:Instance():Init(Service)
  end
  MYSQLDATA:Instance():Init(Service)
  EVENTMANAGER:Instance():Init(Service)
  NETMANAGER:Instance():Init(Service)
  REDISDATA:Instance():Init(Service)
  
    if true == ServerConfig["login"].enable then
        require ("Login")
        logInfo("enable login .......................")
        LOGINSERVER:Instance():Init(ServerConfig["login"])
        table.insert(OpenServers, LOGINSERVER:Instance())
    end
    if true == ServerConfig["center"].enable then
        require ("Center")
        logInfo("enable center .......................")
        CENTERSERVER:Instance():Init(ServerConfig["center"])
        table.insert(OpenServers, CENTERSERVER:Instance())
    end
    for i = 1, #ServerConfig["gates"] do
        require ("Gate")
        if true == ServerConfig["gates"][i].enable then
            logInfo("enable gate ......................."..i)
            local gate = GATESERVER.new()
            gate:Init(ServerConfig["gates"][i])
            table.insert(OpenServers, gate)
        end
    end
    for i = 1, #ServerConfig["games"] do
        require ("Game")
        if true == ServerConfig["games"][i].enable then
            logInfo("enable games ......................."..i)
            local game = GAMESERVER.new()
            game:Init(ServerConfig["games"][i])
            table.insert(OpenServers, game)
        end
    end
    for i = 1, #ServerConfig["cells"] do
        require ("Cell")
        if true == ServerConfig["cells"][i].enable then
            logInfo("enable cells ......................."..i)
            local cell = CELLSERVER.new()
            cell:Init(ServerConfig["cells"][i])
            table.insert(OpenServers, cell)
        end
    end
    return true;
end
function stop()
--服务器即将关闭
    logDB("server stop..")
end
function command(cmd)
    logInfo("handle command "..cmd)
    if cmd == "reload" then
        require_ex("reload")
    else
        reloadModules(cmd)
    end
    return true
end

function DBCall(id, rs)
--数据库回调
  MYSQLDATA:Instance():Call(id, rs)
--redis回调
  REDISDATA:Instance():Call(id, rs)
end
function eventCall(event, remove)
--定时器回调
    EVENTMANAGER:Instance():Call(event, remove)
end
function handleMessage(net, s, msgName, buffer, len, pid)
--收到网络消息
    NETMANAGER:Instance():HandleMessage(net, s, msgName, buffer, len, pid)
end
function netConnect(net, s)
--网络连接成功
    NETMANAGER:Instance():OnConnect(net, s)
end
function netClose(net, s)
--网络连接关闭
    NETMANAGER:Instance():OnDisConnect(net, s)
end
