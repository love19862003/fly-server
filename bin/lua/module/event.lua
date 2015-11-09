EVENTMANAGER = class("EVENTMANAGER")
EVENTMANAGER._Instance = nil
--实例
function EVENTMANAGER:Instance()
    if nil == EVENTMANAGER._Instance then
        EVENTMANAGER._Instance = EVENTMANAGER.new()
    end
    return EVENTMANAGER._Instance
end
--初始化数据模块
function EVENTMANAGER:Init( service)
    self._service = service
    self._callList = {}
    return true
end
--回调管理器 remove 事件执行完毕
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
--取消事件
-- 参数 事件ID
-- 返回值 bool
function EVENTMANAGER:CancelEvent(id)
    if nil ~= self._callList[id] then
        self._callList[id] = nil
        --logInfo("remove event:"..id)
        return  self._service:cancelEvent(id)
    end
    return false
end
--增加事件
-- delay 延迟时间
-- interval 间隔时间
-- repeated 次数  -1为无限
-- fun 回调函数
-- 返回值 bool
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
--修改事件
-- ID 事件ID
-- interval 时间间隔
-- 返回值bool
function EVENTMANAGER:ChangeInterval(id, interval)
    if nil ~= self._callList[id] then
        self._callList[id] = nil
        return  self._service:setEventInterval(id, interval)
    end
    return false
end