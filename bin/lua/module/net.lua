local protobuf = require("protobuf")
require ("functions")
NETMANAGER = class("NETMANAGER")
NETMANAGER._Instance = nil

function NETMANAGER:Instance()
    if nil == NETMANAGER._Instance then
        NETMANAGER._Instance = NETMANAGER.new()
    end
    return NETMANAGER._Instance
end
--
function NETMANAGER:Init( server)
    self._service = server
    self._objects = {}
    logDB("init net manager")
    return true
end
-- 收到网络消息 分发下去
function NETMANAGER:HandleMessage(name, session, msgName, buffer, len , pid)
    logDB("net handle msg:"..msgName)
    for objName, obj in pairs(self._objects) do
        if name ==  objName then
            --local msg = protobuf.decode(msgName, buffer, len)
            return obj:dispatch(session, msgName, buffer, len, pid)
        end
    end
    return false
end
-- 发送消息
-- session 连接ID 
-- msgName 消息名字
-- data buffer
-- pid  玩家ID
-- 返回值 bool
function NETMANAGER:SendMsg(session, msgName, data, pid)
    local buffer = protobuf.encode(msgName, data)
    return self._service:sendMessage(session, msgName, buffer, pid)
end
-- 发送消息
-- session 连接ID 
-- msgName 消息名字
-- buffer buffer
-- len 长度
-- pid  玩家ID
-- 返回值 bool
function NETMANAGER:SendBuff( session, msgName, buffer, len, pid )
    return self._service:sendBuffer(session, msgName, buffer, len, pid)
    -- body
end
-- 发送消息
-- name 网络连接名字
-- msgName 消息名字
-- buffer buffer
-- 返回值 bool
function NETMANAGER:SendToAll(name, msgName, data)
    local buffer = protobuf.encode(msgName, data)
    return self._service:sendToAll(name, msgName, buffer)
end
-- 发送消息
-- name 网络连接名字
-- msgName 消息名字
-- buffer buffer
-- len 长度
-- 返回值 bool
function NETMANAGER:SendToAll2(name, msgName, buffer, len)
    --local buffer = protobuf.encode(msgName, data)
    return self._service:sendBufferToAll(name, msgName, buffer,len)
end
-- 有新连接进来
function NETMANAGER:OnConnect(name, session)
    logDB("net onConnect :"..name.." s:"..session)
    for objName, obj in pairs(self._objects) do
        if name ==  objName then
            obj:connect(session)
            return true
        end
    end
    return false
end
-- 有连接关闭
function NETMANAGER:OnDisConnect(name, session)
    logDB("net onDisconnect :"..name.." s:"..session)
    for objName, obj in pairs(self._objects) do
        if name == objName then
            obj:disConnect(session)
            return true
        end
    end
    return false
end
-- 增加一个TCP server 对应
function NETMANAGER:ServerListenSocket(obj)
    local name = obj:getListenName()
    logDB("add Listen name:"..name)
    if nil == self._objects[name] then
        if true == self._service:addServerSocket(name, obj:getIP(), obj:getPort(), obj:maxConn()) then
            self._objects[name] =  obj
            return true
        end
    end
    return false
end
-- 增加一个TCP client 对应
function NETMANAGER:ClientConnSocket(obj)
    local name = obj:getConnName()
    logDB("add Conn name:"..name)
    if nil == self._objects[name] then
        if true == self._service:addConnSocket(name, obj:getIP(), obj:getPort()) then
            self._objects[name] =  obj
            return true
        end
    end
    return false
end
-- kick 一个连接
function NETMANAGER:KickSession(s)
    return self._service:kickSession(s)
end
--  删除一个网络对象
function NETMANAGER:RemoveNetObj(name)
    if nil ~= self._objects[name] then
        if true == self._service:removeSocket(name) then
            self._objects[name] = nil
        end
    end
end