local protobuf = require("protobuf")
SocketListen = class("SocketListen")
--初始化信息
function SocketListen:init(name,ip,port,conns)
    self._socketInfo = {name, ip, port, conns}
    self._messageCall = {}
    self._closeCall = nil
    self._connectCall = nil
    self._messageDefaultCall = nil
    return true
end
--获取ip
function SocketListen:getIP()
    return self._socketInfo[2]
end
--获取名字
function SocketListen:getListenName()
    return self._socketInfo[1]
end
--获取端口
function SocketListen:getPort()
    return self._socketInfo[3]
end
--获取最大连接数
function SocketListen:maxConn()
    return self._socketInfo[4]
end
--绑定消息回调
function SocketListen:bindCallBack(msgName, call)
    self._messageCall[msgName] = call
end
--绑定默认回调
function SocketListen:bindDefaultCallBack(call)
    self._messageDefaultCall = call
end
--绑定新连接进来回调
function SocketListen:bindConnectCall(call)
    self._connectCall = call
end
--绑定连接关闭回调
function SocketListen:bindCloseCall(call)
    self._closeCall = call
end
--管理器调用
function SocketListen:connect(session)
    if nil ~= self._connectCall then
        self._connectCall(session)
    end
end
--管理器调用
function SocketListen:disConnect(session)
    if nil ~= self._closeCall then
        self._closeCall(session)
    end
end
--管理器调用
function SocketListen:dispatch(session, name, buffer, len, pid)
    if nil ~= self._messageCall[name] then
        local msg = protobuf.decode(name, buffer, len)
        self._messageCall[name](msg, pid, session)
        return true
    elseif nil ~= self._messageDefaultCall then
        self._messageDefaultCall(session, name, buffer, len, pid)
    else
        return false
    end
end