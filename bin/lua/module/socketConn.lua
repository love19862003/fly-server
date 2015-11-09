local protobuf = require("protobuf")
SocketConn = class("SocketConn")
--��ʼ����Ϣ
function SocketConn:init(name,ip,port)
    self._socketInfo = {name, ip, port}
    self._messageCall = {}
    self._closeCall = nil
    self._connectCall = nil
    self._session = nil
    return true
end
--��ȡip
function SocketConn:getIP()
    return self._socketInfo[2]
end
--��ȡ����
function SocketConn:getConnName()
    return self._socketInfo[1]
end
--��ȡ�˿�
function SocketConn:getPort()
    return self._socketInfo[3]
end
--����Ϣ�ص�
function SocketConn:bindCallBack(msgName, call)
    self._messageCall[msgName] = call
end
--��Ĭ�ϻص�
function SocketConn:bindDefaultCallBack(call)
    self._messageDefaultCall = call
end
--�������ӽ����ص�
function SocketConn:bindConnectCall(call)
    self._connectCall = call
end
--�����ӹرջص�
function SocketConn:bindCloseCall(call)
    self._closeCall = call
end
--���session
function SocketConn:getSession()
    return self._session
end
--����������
function SocketConn:connect(session)
    self._session = session
    if nil ~= self._connectCall then
        self._connectCall()
    end
    
end
--����������
function SocketConn:disConnect(session)
    self._session = nil
    if nil ~= self._closeCall then
        self._closeCall()
    end
end
--����������
function SocketConn:dispatch(session, name, buffer, len, pid)
    if nil ~= self._messageCall[name] then
        logInfo("dispatch msg:"..name)
        local msg = protobuf.decode(name, buffer, len)
        self._messageCall[name](msg, pid)
        return true
    elseif nil ~= self._messageDefaultCall then
        self._messageDefaultCall(name, buffer, len, pid)
        return true
    else
        return false
    end
    
end