require ("GateCallBack")
GATESERVER = class("GATESERVER")
--初始化
function GATESERVER:Init(gateConfig)
    self._config = gateConfig
    self:InitListen()
    self:InitConnGame()
    self:InitConnLogin()
    self._call = GATECallBack.new()
    self._call:Init(self)
end
-- Reload 
function GATESERVER:Reload()
    require_ex("GateCallBack")
    local call = GATECallBack.new()
    call:Init(self)
    call:CopyData(self._call)
    self._call = call
end
-- init listen client port
function GATESERVER:InitListen()
    self._listenSocket = SocketListen.new()
    self._listenSocketName = self._config.name..self._config.client.name
    -- add listen port 
    assert(self._listenSocket:init(self._listenSocketName,
                                   self._config.client.ip,
                                   self._config.client.port,
                                   self._config.client.maxConn))
    -- add net object to manager 
    assert(NETMANAGER:Instance():ServerListenSocket(self._listenSocket))
end
-- init conn game server data 
function GATESERVER:InitConnGame( )
    self._connGameSocket = SocketConn.new()
    self._connGameSocketName = self._config.name..self._config.game.name
    assert(self._connGameSocket:init(self._connGameSocketName, 
                                     self._config.game.ip,
                                     self._config.game.port))
    assert(NETMANAGER:Instance():ClientConnSocket(self._connGameSocket))

end
function GATESERVER:InitConnLogin()
    self._connLoginSocket = SocketConn.new()
    self._connLoginSocketName = self._config.name..self._config.login.name
    assert(self._connLoginSocket:init(self._connLoginSocketName,
                                      self._config.login.ip,
                                      self._config.login.port))
    assert(NETMANAGER:Instance():ClientConnSocket(self._connLoginSocket))
end