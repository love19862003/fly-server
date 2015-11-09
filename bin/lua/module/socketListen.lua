local protobuf = require("protobuf")
SocketListen = class("SocketListen")
--��ʼ����Ϣ
function SocketListen:init(name,ip,port,conns)
    self._socketInfo = {name, ip, port, conns}
    self._messageCall = {}
    self._closeCall = nil
    self._connectCall = nil
    self._messageDefaultCall = nil
    return true
end
--��ȡip
function SocketListen:getIP()
    return self._socketInfo[2]
end
--��ȡ����
function SocketListen:getListenName()
    return self._socketInfo[1]
end
--��ȡ�˿�
function SocketListen:getPort()
    return self._socketInfo[3]
end
--��ȡ���������
function SocketListen:maxConn()
    return self._socketInfo[4]
end
--����Ϣ�ص�
function SocketListen:bindCallBack(msgName, call)
    self._messageCall[msgName] = call
end
--��Ĭ�ϻص�
function SocketListen:bindDefaultCallBack(call)
    self._messageDefaultCall = call
end
--�������ӽ����ص�
function SocketListen:bindConnectCall(call)
    self._connectCall = call
end
--�����ӹرջص�
function SocketListen:bindCloseCall(call)
    self._closeCall = call
end
--����������
function SocketListen:connect(session)
    if nil ~= self._connectCall then
        self._connectCall(session)
    end
end
--����������
function SocketListen:disConnect(session)
    if nil ~= self._closeCall then
        self._closeCall(session)
    end
end
--����������
function SocketListen:dispatch(session, name, buffer, len, pid)
    if nil ~= self._messageCall[name] then
        local msg = protobuf.decode(name, buffer, len)
        self._messageCall[name](msg, pid, session)
        return true
    elseif nil ~= self._messageDefaultCall then
        self._messageDefaultCall(session, name, buffer, len, pid)
    else
        return false
    end
end