GAMECallBack = class("GAMECallBack")
function GAMECallBack:Init(game)
    self._game = game
    self._gates = {} -- key pid, value session
    self:BindSocketListen()
    self:BindSocketConn()
end
function GAMECallBack:CopyData(old)
    self._gates = old._gates
end
function GAMECallBack:BindSocketListen()
    local game = self._game
    local socket = game._listenSocket
    socket:bindConnectCall(function (s)
        logDB("game handle a gate connect..")
    end)
    socket:bindCloseCall(function(s)
        for k,v in pairs(self._gates) do
            if v.session == s then
                self._gates[v.info.server] = nil
                return 
            end
        end
    end)
    socket:bindDefaultCallBack(function( session, name, buffer, len, pid)
        --if nil ~= self._onlines[pid] then
            -- need check player state on the player manager 
            NETMANAGER:Instance():SendBuff(self._connCenterSocket:getSession(), name, buffer, len,pid)
        --else
        --  logDB("handle msg "..name.." with pid"..pid.." pid not online")
        --  assert(false)
        --end
    end)
    socket:bindCallBack("Pro.ServerRegisterS2S", function ( msg, pid, s ) self:handleGateRegister(msg, pid, s) end)
    socket:bindCallBack("Pro.PlayerExitS2S", function ( msg, pid, s ) self:handleGatePlayerExit(msg, pid, s) end)
    socket:bindCallBack("Pro.ServerStopS2C", function ( msg, pid, s ) self:handleGateStop(msg, pid, s) end)
end
function GAMECallBack:BindSocketConn()
    local game = self._game
    local socket = game._connCenterSocket
    socket:bindConnectCall(function ()
        local msg = {}
        msg.server = game._connCenterSocketName
        msg.type = "GAME"
        self:SendToCenter("Pro.ServerRegisterS2S", msg, 0)
    end)
    -- close call back
    socket:bindCloseCall( function()
        logInfo("handle game disconnect from center server with game:"..game._config.name)
    end)
    --default callback
    socket:bindDefaultCallBack( function ( msgName, buffer, len, pid )
        if pid > 0 then
            -- send to the online player get the gate session in the manager 
            local gateSession = self:GateSession("gate1")--PLAYERMANAGER:getPlayer(pid)->getGate())
            NETMANAGER:Instance():SendBuff(gateSession, msgName, buffer, len,pid)
        elseif 0 == pid then
            -- send to all online player 
            NETMANAGER:Instance():SendToAll2(game._listenSocketName, msgName, buffer, len)
        else
            assert(false)
        end
    end)
    socket:bindCallBack("Pro.LoginResultS2C", function (msg, pid ) self:handleCenterLoginResult(msg, pid)end)
end
function GAMECallBack:GateSession( gate )
    if nil ~= self._gates[gate] then
        return self._gates[gate].session
    end
    return 0
end

function GAMECallBack:SendToCenter(name, msg, pid)
    if nil == pid then pid = 0  end
    NETMANAGER:Instance():SendMsg(self._game._connCenterSocket:getSession(),name, msg, pid)
end
function GAMECallBack:SendToGate(gate, name, msg, pid)
    if nil == pid then pid = 0  end
    local gateSession = self:GateSession(gate)
    NETMANAGER:Instance():SendMsg(gateSession,name, msg, pid)
end
function GAMECallBack:handleGateRegister(msg, pid, s)
    self._gates[msg.server] = {}
    self._gates[msg.server].info =  msg
    self._gates[msg.server].session = s
    logInfo("game handle gate "..msg.server.." register")
end
function GAMECallBack:handleGatePlayerExit(msg, pid, s)
    logInfo("handle player exit:", pid)
    -- body
end
function GAMECallBack:handleGateStop( msg, pid, s )
    logInfo("handle a gate stop..")
    -- body
end
function GAMECallBack:handleCenterLoginResult(msg, pid)
    --检测登录结果
    self:SendToGate(msg.gate, "Pro.LoginResultS2C", msg, pid)
end