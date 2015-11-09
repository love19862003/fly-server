require "socketConn"
CLIENT = class("CLIENT")
CLIENT._Instance = nil
--实例
function CLIENT:Instance()
    if nil == CLIENT._Instance then
        CLIENT._Instance = CLIENT.new()
    end
    return CLIENT._Instance
end
--初始化
function CLIENT:Init()
    self.socket = SocketConn.new()
    assert(self.socket:init("client", "127.0.0.1", "10000"))
    self.socket:bindConnectCall(
    function() 
        logInfo("client Conn success")
        local msg = {}
        msg.name = "client"
        msg.password = "cfdvfdv"
        NETMANAGER:Instance():SendMsg(self.socket:getSession(), "Pro.LoginC2S", msg, 0)
    end)
    self.socket:bindCloseCall(function() logInfo("client close") end)
    self.socket:bindCallBack("Pro.LoginC2S", function(msg, pid ) self:handleLogin(msg, pid) end)
    NETMANAGER:Instance():ClientConnSocket(self.socket)
end
--收到登录消息
function CLIENT:handleLogin(msg, pid) 
    local session = CLIENT._Instance.socket:getSession()
    logInfo("client handle server message with "..session.." pid "..pid)
    NETMANAGER:Instance():SendMsg(session, "Pro.LoginC2S", msg, pid)
end