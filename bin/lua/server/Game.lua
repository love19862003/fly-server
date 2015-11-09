require("GameCallBack")
GAMESERVER = class("GAMESERVER")
--初始化
function GAMESERVER:Init(gameConfig)
    self._config = gameConfig
    self:InitListen()
    self:InitConnCenter()
    self._call = GAMECallBack.new()
    self._call:Init(self)
end
function GAMESERVER:Reload()
    require_ex("GameCallBack")
    local call = GAMECallBack.new()
    call:Init(self)
    call:CopyData(self._call)
    self._call = call
end
function GAMESERVER:InitListen()
    self._listenSocket = SocketListen.new()
    self._listenSocketName = self._config.name..self._config.gate.name
    assert(self._listenSocket:init(self._listenSocketName,
                                   self._config.gate.ip,
                                   self._config.gate.port,
                                   self._config.gate.maxConn ))
    assert(NETMANAGER:Instance():ServerListenSocket(self._listenSocket))
end
function GAMESERVER:InitConnCenter( ... )
    self._connCenterSocket = SocketConn.new()
    self._connCenterSocketName = self._config.name..self._config.center.name
    assert(self._connCenterSocket:init(self._connCenterSocketName, 
                                       self._config.center.ip,
                                       self._config.center.port))
    assert(NETMANAGER:Instance():ClientConnSocket(self._connCenterSocket))
end


