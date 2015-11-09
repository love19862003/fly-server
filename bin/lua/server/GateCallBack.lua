GATECallBack = class("GATECallBack")
-- gate call back
function GATECallBack:Init(gate)
    self._gate = gate
    self._onlines = {} -- key session  value time
    self._players = {} -- key pid, value session
    self._onlineCount = 0
    self:BindSocketListen()
    self:BindSocketConnGame()
    self:BindSocketConnLogin()
    self:EventCheck()
end
function GATECallBack:CopyData(old)
    self._players = old._players
    self._onlines = old._onlines 
    self._onlineCount = old._onlineCount 
    old:RemoveEvent()
end
function GATECallBack:GetPlayerId(session)
    for k, v in pairs(self._players)  do
        if v == s  then
            return k
        end
    end 
    return nil
end
function GATECallBack:SendToGame(msgName, msg, pid)
    NETMANAGER:Instance():SendMsg(self._gate._connGameSocket:getSession(),msgName, msg, pid)
end
function GATECallBack:SendToPlayer( msgName, msg, pid )
    if nil ~= self._players[pid] then
        NETMANAGER:Instance():SendMsg(self._players[pid],msgName, msg, pid)
        return true
    else
        return false
    end
end
function GATECallBack:RemoveEvent()
    if nil ~= self._event_id then
        EVENTMANAGER:Instance():CancelEvent(self._event_id)
        self._event_id = nil
    end
end
function GATECallBack:EventCheck()
    -- add event to delete client session with time out 
    self._event_id = EVENTMANAGER:Instance():AddEvent(0,5000,-1, 
    function() 
        local now = nowTime()
        local delSession = {}
        for k,v in pairs(self._onlines) do
            if now - v > 30000 then
                NETMANAGER:Instance():KickSession(k)
                table.insert(delSession, k)
            end 
        end 
        for i=1,#delSession do
            self._onlines[delSession[i]] = nil  
        end
    end)
end
-- socket listen client
function GATECallBack:BindSocketListen()
    local gate = self._gate
    local socket = gate._listenSocket
    -- on new connect 
    socket:bindConnectCall(
    function(s) 
        self._onlines[s] = nowTime() 
        self._onlineCount = self._onlineCount + 1 
    end)
    -- on disconnect
    socket:bindCloseCall(
    function(s) 
        self._onlines[s] = nil
        self._onlineCount = self._onlineCount - 1
        if  self._onlineCount < 0 then 
            self._onlineCount = 0 
            assert(false)
        end
        local pid = self:GetPlayerId(s)
        if nil ~= pid then
            self._players[pid] = nil
            local msg = {}
            msg.reason = "Net_DISCONNECT"
            msg.server = gate._listenSocketName
            msg.session = s
            self:SendToGame("Pro.PlayerExitS2S", msg, pid)
        end
    end)
    -- default call back
    socket:bindDefaultCallBack(function( session, name, buffer, len, pid)
        if nil ~= self._onlines[pid] then
            NETMANAGER:Instance():SendBuff(gate._connGameSocket:getSession(), name, buffer, len,pid)
        else
            logDB("handle msg "..name.." with pid"..pid.." pid not online")
            assert(false)
        end
    end)
    -- call back
    socket:bindCallBack("Pro.LoginC2S", function ( msg, pid, s ) self:handleLogin(msg, pid, s) end)
end
-- socket connect to game server 
function GATECallBack:BindSocketConnGame()
    local gate = self._gate
    local socket = gate._connGameSocket
    -- connect callback
    socket:bindConnectCall(
    function ()
        local msg = {}
        msg.server = gate._connGameSocketName
        msg.port = gate._config.game[port]
        msg.online = self._onlineCount  
        self:SendToGame("Pro.ServerRegisterS2S", msg, 0)
    end)
    socket:bindCloseCall( function() logDB("handle gate disconnect from game server with gate:"..gate._config.name) end)
    socket:bindDefaultCallBack( 
    function ( msgName, buffer, len, pid )
        if nil ~= self._players[pid] then
            -- send to the online player 
            NETMANAGER:Instance():SendBuff(self._players[pid], msgName, buffer, len,pid)
        elseif 0 == pid then
            -- send to all online player 
            NETMANAGER:Instance():SendToAll2(gate._listenSocketName, msgName, buffer, len)
        else
            assert(false)
        end
    end)
    socket:bindCallBack("Pro.ServerStopS2C", function (msg, pid ) self:handleGSStop(msg, pid)end)
    socket:bindCallBack("Pro.LoginResultS2C",function (msg, pid ) self:handleGSLoginResult(msg, pid)end)
    socket:bindCallBack("Pro.PlayerKickS2C", function (msg, pid ) self:handleGSKickPlayer(msg, pid)end)
end
-- socket connect to login server 
function GATECallBack:BindSocketConnLogin()
    local gate = self._gate
    local socket = gate._connLoginSocket
    local fun = function() 
        local msg = {}
        msg.server = gate._connLoginSocketName
        msg.port = gate._config.client[port] 
        msg.online = self._onlineCount 
        msg.address = gate._config.outip
        NETMANAGER:Instance():SendMsg(gate._connLoginSocket:getSession(),"Pro.ServerRegisterS2S", msg, self._onlineCount)
    end
    socket:bindConnectCall(fun)
    -- close call back
    socket:bindCloseCall( function()
        logInfo("handle gate disconnect from login server with gate:"..gate._config.name)
    end)
    --default callback
    socket:bindDefaultCallBack( function ( msgName, buffer, len, pid ) fun() end)
end
--收到登录消息
function GATECallBack:handleLogin(msg, pid, session) 
    logDB("handle client login message")
    msg.session = session
    msg.gate = self._gate._connGameSocketName
    self:SendToGame("Pro.LoginC2S", msg, 0)
end
--收到停服信息
function GATECallBack:handleGSStop(msg, pid) 
    logInfo("handle handleGSStop message")
end

--收到登录回馈
function GATECallBack:handleGSLoginResult(msg, pid) 
    logInfo("handle handleGSLoginResult message")
    if pid > 0  and msg.error == "NO_ERROR_CODE" then
        self._onlines[msg.session] = nil
        self._players[pid] = msg.session
        self:SendToPlayer("Pro.LoginResultS2C", msg, pid)
    else 
        self._onlines[msg.session] = nowTime() 
        NETMANAGER:Instance():SendMsg(msg.session, "Pro.LoginResultS2C", msg, 0)
    end
end

--收到踢人消息
function GATECallBack:handleGSKickPlayer(msg, pid) 
    logInfo("handle handleGSKickPlayer message")
    local session =  self._gate._players[pid] 
    if nil ~= session then
        NETMANAGER:Instance():KickSession(session)
    end
    self._gate._players[pid] = nil
end