EVENTMANAGER = class("EVENTMANAGER")
EVENTMANAGER._Instance = nil
--ʵ��
function EVENTMANAGER:Instance()
    if nil == EVENTMANAGER._Instance then
        EVENTMANAGER._Instance = EVENTMANAGER.new()
    end
    return EVENTMANAGER._Instance
end
--��ʼ������ģ��
function EVENTMANAGER:Init( service)
    self._service = service
    self._callList = {}
    return true
end
--�ص������� remove �¼�ִ�����
function EVENTMANAGER:Call(id, remove)
    if nil ~= self._callList[id] then
        self._callList[id]()
        --logInfo("call event:"..id)
        if true == remove  then 
            --logInfo("remove event:"..id)
            self._callList[id] = nil
        end
    end
end
--ȡ���¼�
-- ���� �¼�ID
-- ����ֵ bool
function EVENTMANAGER:CancelEvent(id)
    if nil ~= self._callList[id] then
        self._callList[id] = nil
        --logInfo("remove event:"..id)
        return  self._service:cancelEvent(id)
    end
    return false
end
--�����¼�
-- delay �ӳ�ʱ��
-- interval ���ʱ��
-- repeated ����  -1Ϊ����
-- fun �ص�����
-- ����ֵ bool
function EVENTMANAGER:AddEvent(delay, interval, repeated, fun)
    if nil == fun then 
        return false
    end
    local evid = self._service:addEvent(delay, interval, repeated) 
    if evid > 0 then
        self._callList[evid] = fun
        --logInfo("add event:"..evid)
        return evid > 0
    else
        return false
    end
end
--�޸��¼�
-- ID �¼�ID
-- interval ʱ����
-- ����ֵbool
function EVENTMANAGER:ChangeInterval(id, interval)
    if nil ~= self._callList[id] then
        self._callList[id] = nil
        return  self._service:setEventInterval(id, interval)
    end
    return false
end