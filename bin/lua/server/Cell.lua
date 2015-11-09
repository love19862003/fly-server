require("CellCallBack")
CELLSERVER = class("CELLSERVER")
function CELLSERVER:Init(cellConfig)
    self._config = cellConfig
    self:InitDatabase(ServerConfig.db[cellConfig.db])
    self:InitConnCenter()
    self._call = CELLCallBack.new()
    self._call:Init(self)
end
function CELLSERVER:Reload()
    require_ex("CellCallBack")
    local call = CELLCallBack.new()
    call:Init(self)
    call:CopyData(self._call)
    self._call = call
end
function CELLSERVER:InitDatabase(config)
    self._dbconfig = config
    assert(MYSQLDATA:Instance():AddDataBase(self._dbconfig.name ,self._dbconfig.ip, self._dbconfig.user, self._dbconfig.password, self._dbconfig.thread)) 
end
function CELLSERVER:InitConnCenter()
    self._connCenterSocket = SocketConn.new()
    self._connCenterSocketName = self._config.name..self._config.center.name
    assert(self._connCenterSocket:init(self._connCenterSocketName, 
                                       self._config.center.ip,
                                       self._config.center.port))
    assert(NETMANAGER:Instance():ClientConnSocket(self._connCenterSocket))
end