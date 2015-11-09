CENTERCallBack = class("CENTERCallBack")
function CENTERCallBack:Init(center)
    self._center = center
    self._games = {}
    self._cells = {}
    self._test = 1000
    self:BindSocketListen()
end
function CENTERCallBack:CopyData( old)
    self._games = old._games
    self._cells = old._cells
    if(old._test ~= nil) then 
        print(old._test) 
    else 
        print("...................nil")
    end 
    for k, v in pairs(self._games) do
        logInfo("reload game list:"..v.info.server)
    end
end
function CENTERCallBack:BindSocketListen()
    local center = self._center
    local socket = center._listenSocket
    socket:bindConnectCall(function(s) end)
    -- bind session close call
    socket:bindCloseCall(function(s)
        for k,v in pairs(self._games) do
            if s == v.session then 
                --self._games[v.info.server] = nil
                logError("handle game:"..v.info.server.." close")
                return
            end
        end
        for k,v in pairs(self._cells) do
            if s == v.session then 
                --self._cells[v.info.server] = nil
                logError("handle cell:"..v.info.server.." close")
                return
            end
        end
     end)
    -- bind default call
    socket:bindDefaultCallBack(
    function( session, name, buffer, len, online) 
        logError("handle msg:"..name.." not found call back")
        assert(false)
        end)
    socket:bindCallBack("Pro.ServerRegisterS2S", function ( msg, pid, s ) self:handleServerRegister(msg, pid, s) end)
    socket:bindCallBack("Pro.LoginC2S", function ( msg, pid, s ) self:handlePlayerLogin(msg, pid, s) end)
end

function CENTERCallBack:handleServerRegister(msg, pid, s)
    if msg.type == "GAME" then
        self._games[msg.server] = {}
        self._games[msg.server].info = msg
        self._games[msg.server].session = s
        logInfo("center handle game :"..msg.server)
    elseif msg.type == "CELL" then
        self._cells[msg.server] = {}
        self._cells[msg.server].info = msg
        self._cells[msg.server].session = s
        logInfo("center handle cell :"..msg.server)
    else
    end
end
function CENTERCallBack:handlePlayerLogin(msg, pid, s)
    -- player login
end