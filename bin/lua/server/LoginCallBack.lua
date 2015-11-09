LOGINCallBack = class("LOGINCallBack")
function LOGINCallBack:Init(login)
    self._login = login
    self._onlines = {} -- key session  value time
    self._gate = {} -- key pid, value session
    self:BindSocketListen()
    self:BindSocketGateListen()
    self:CheckEvent()
end
function LOGINCallBack:CopyData(old)
    self._onlines = old._onlines
    self._gate = old._gate
    old:RemoveEvent()
end
function LOGINCallBack:BindSocketListen()
    local login = self._login
    local socket = login._listenClientSocket
    socket:bindConnectCall(
        function(s) 
            self._onlines[s] = nowTime() 
            local ip, port = self:GateInfo()
            local gate = {}
            if nil == self._gate[1] then
                gate.state = "SERVER_CLOSE"
            else
                gate.state = "OK"
                gate.gate = self._gate[1].info.address
                gate.port = self._gate[1].info.port
                self._gate[1].info.online = self._gate[1].info.online + 1
                self:SortGate()
            end
            NETMANAGER:Instance():SendMsg(s, "Pro.GateS2C", gate, 0)
    end)
    socket:bindCloseCall(function(s) self._onlines[s] = nil end)
    socket:bindDefaultCallBack(function( s, name, buffer, len, pid) end)
    
end
function LOGINCallBack:BindSocketGateListen()
    local login = self._login
    local socket = login._listenGateSocket
    socket:bindConnectCall(function(s) end)
    socket:bindCloseCall(
    function(s)
        for i=1, #self._gate do
            if s == self._gate[i].session then 
                table.remove(self._gate, i)
                return
            end
        end
     end)
    socket:bindDefaultCallBack(function( s, name, buffer, len, online) end)
    socket:bindCallBack("Pro.ServerRegisterS2S", function ( msg, pid, s ) self:handleGateRegister(msg, pid, s) end)
end
function LOGINCallBack:RemoveEvent()
    if nil ~= self._event_id then
        EVENTMANAGER:Instance():CancelEvent(self._event_id)
        self._event_id = nil
    end
    if nil ~= self._query_event_id then
        EVENTMANAGER:Instance():CancelEvent(self._query_event_id)
        self._query_event_id = nil
    end
end
function LOGINCallBack:CheckEvent()
    self._event_id = EVENTMANAGER:Instance():AddEvent(0,5000,-1, 
    function() 
        local now = nowTime()
        local delSession = {}
        for k,v in pairs(self._onlines) do
            if now - v > 10000 then
                NETMANAGER:Instance():KickSession(k)
                table.insert(delSession, k)
            end 
        end 
        for i=1,#delSession do
            self._onlines[delSession[i]] = nil  
        end
    end)
    --定时查询gate状态
    local live = self._login._config.live
    self._query_event_id = EVENTMANAGER:Instance():AddEvent(0,live,-1, 
    function() 
        local msg = {}
        for i=1, #self._gate do
            NETMANAGER:Instance():SendMsg(self._gate[i].session, "Pro.QueryGateStateLG2GT", msg, 0)
        end
    end)
end
function LOGINCallBack:SortGate(  )
    local heart = self._login._config.heart
    table.sort( self._gate, function (left, right )
        local now = nowTime()
        if now - left.time < heart  and now - right.time < heart then
            return left.info.online < right.info.online
        else
            return left.time > right.time
        end
    end )
end
--收到登录消息
function LOGINCallBack:handleGateRegister(msg, pid, session) 
    logInfo("login handle gate "..msg.server.." register message")
    local gate = {}
    gate.info = msg
    gate.session = session
    gate.time = nowTime()

    for i=1, #self._gate do
        if session == self._gate[i].session then
            self._gate[i] = gate
            break
        end
    end
    self:SortGate()
end
 