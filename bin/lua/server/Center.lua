require("CenterCallBack")
CENTERSERVER = class("CENTERSERVER")
CENTERSERVER._Instance = nil
function CENTERSERVER:Instance()
    if nil == CENTERSERVER._Instance then
        CENTERSERVER._Instance = CENTERSERVER.new()
    end
    return CENTERSERVER._Instance
end
--初始化
function CENTERSERVER:Init(centerConfig)
    self._config = centerConfig
    self:InitDataBase(ServerConfig.db[centerConfig.db])
    self:InitListen()
    self._call = CENTERCallBack.new()
    self._call:Init(self)
end
function CENTERSERVER:Reload()
    require_ex("CenterCallBack")
    local call = CENTERCallBack.new()
    call:Init(self)
    call:CopyData(self._call)
    self._call = call
end
function CENTERSERVER:InitListen()
    self._listenSocket = SocketListen.new()
    self._listenSocketName = self._config.name..self._config.server.name
    -- add listen port 
    assert(self._listenSocket:init(self._listenSocketName,
                                   self._config.server.ip,
                                   self._config.server.port,
                                   self._config.server.maxConn))
    -- add net object to manager 
    assert(NETMANAGER:Instance():ServerListenSocket(self._listenSocket))
end

function CENTERSERVER:InitDataBase(DBConfig)
    if nil == DBConfig then return end
    self._dbconfig = DBConfig
    assert(MYSQLDATA:Instance():AddDataBase(self._dbconfig.name, 
                                            self._dbconfig.ip,
                                            self._dbconfig.user,
                                            self._dbconfig.password,
                                            self._dbconfig.thread)) 
end
