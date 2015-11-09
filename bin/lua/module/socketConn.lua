local protobuf = require("protobuf")
SocketConn = class("SocketConn")
--初始化信息
function SocketConn:init(name,ip,port)
    self._socketInfo = {name, ip, port}
    self._messageCall = {}
    self._closeCall = nil
    self._connectCall = nil
    self._session = nil
    return true
end
--获取ip
function SocketConn:getIP()
    return self._socketInfo[2]
end
--获取名字
function SocketConn:getConnName()
    return self._socketInfo[1]
end
--获取端口
function SocketConn:getPort()
    return self._socketInfo[3]
end
--绑定消息回调
function SocketConn:bindCallBack(msgName, call)
    self._messageCall[msgName] = call
end
--绑定默认回调
function SocketConn:bindDefaultCallBack(call)
    self._messageDefaultCall = call
end
--绑定新连接进来回调
function SocketConn:bindConnectCall(call)
    self._connectCall = call
end
--绑定连接关闭回调
function SocketConn:bindCloseCall(call)
    self._closeCall = call
end
--获得session
function SocketConn:getSession()
    return self._session
end
--管理器调用
function SocketConn:connect(session)
    self._session = session
    if nil ~= self._connectCall then
        self._connectCall()
    end
    
end
--管理器调用
function SocketConn:disConnect(session)
    self._session = nil
    if nil ~= self._closeCall then
        self._closeCall()
    end
end
--管理器调用
function SocketConn:dispatch(session, name, buffer, len, pid)
    if nil ~= self._messageCall[name] then
        logInfo("dispatch msg:"..name)
        local msg = protobuf.decode(name, buffer, len)
        self._messageCall[name](msg, pid)
        return true
    elseif nil ~= self._messageDefaultCall then
        self._messageDefaultCall(name, buffer, len, pid)
        return true
    else
        return false
    end
    
end