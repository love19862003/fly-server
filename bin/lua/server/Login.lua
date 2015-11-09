require("LoginCallBack")
LOGINSERVER = class("LOGIN")
LOGINSERVER._Instance = nil
function LOGINSERVER:Instance()
    if nil == LOGINSERVER._Instance then
        LOGINSERVER._Instance = LOGINSERVER.new()
    end
    return LOGINSERVER._Instance
end
--初始化
function LOGINSERVER:Init(loginConfig)
    self._config = loginConfig
    self:InitClientListen()
    self:InitGateListen()
    self._call = LOGINCallBack.new()
    self._call:Init(self)
end
function LOGINSERVER:Reload()
    require_ex("LoginCallBack")
    local call = LOGINCallBack.new()
    call:Init(self)
    call:CopyData(self._call)
    self._call = call
end
-- init listen client port
function LOGINSERVER:InitClientListen()
    self._listenClientSocket = SocketListen.new()
    self._listenClientSocketName = self._config.name..self._config.client.name
    -- add listen port 
    assert(self._listenClientSocket:init(self._listenClientSocketName, 
                                         self._config.client.ip,
                                         self._config.client.port, 
                                         self._config.client.maxConn))
    assert(NETMANAGER:Instance():ServerListenSocket(self._listenClientSocket))
end

-- init listen client port
function LOGINSERVER:InitGateListen()
    self._listenGateSocket = SocketListen.new()
    self._listenGateSocketName = self._config.name..self._config.gate.name
    -- add listen port 
    assert(self._listenGateSocket:init(self._listenGateSocketName, 
                                       self._config.gate.ip,
                                       self._config.gate.port,
                                       self._config.gate.maxConn))
    assert(NETMANAGER:Instance():ServerListenSocket(self._listenGateSocket))
end


