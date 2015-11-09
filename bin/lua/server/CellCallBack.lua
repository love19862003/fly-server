CELLCallBack = class("CELLCallBack")
function CELLCallBack:Init(cell)
    self._cell = cell
    self:BindSocketConn()
end
function CELLCallBack:CopyData( old )
    
end
function CELLCallBack:BindSocketConn()
    local cell = self._cell
    local socket = cell._connCenterSocket
    -- connect callback 连接成功。发送注册信息
    socket:bindConnectCall(function ()
        local msg = {}
        msg.server = cell._connCenterSocketName
        msg.type = "CELL"
        self:SendToCenter("Pro.ServerRegisterS2S", msg)
    end)
    -- close call back 连接关闭了
    socket:bindCloseCall( function()
        logInfo("handle cell disconnect from center server with cell:"..cell._config.name)
    end)
    --default callback 默认收到消息的处理函数
    socket:bindDefaultCallBack( function ( msgName, buffer, len, pid ) assert(false) end)
end
function CELLCallBack:SendToCenter(name, msg, pid)
    if nil == pid then pid = 0 end
    NETMANAGER:Instance():SendMsg(self._cell._connCenterSocket:getSession(), name, msg, pid)
end