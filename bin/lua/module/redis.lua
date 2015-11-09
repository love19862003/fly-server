require ("functions")
REDISDATA = class("REDISDATA")
REDISDATA._Instance = nil
--���ݿ��ֶ�����
local TypeTable = {"string","int","nil","error", "status", "type_error"}

local function readData(rs)
    if true == rs:isStr() then
        return {rs:str(), "string"}
    end
    
    if true == rs:isNil() then
        return {nil, "nil"}
    end
    
    if true == rs:isInteger() then
        return {rs:integer(), "int"} 
    end
    
    if true == rs:isStatus() then
        return {rs:str(), "status"} 
    end
    
    if true == rs:isError() then
        return {rs:str(), "error"} 
    end
    
    if true == rs:isInVaild() then
        return {nil, "type_error"} 
    end
    
    return {nil, "type_error"}
end
local function RedisRead(rs, fun)
    local tmp = {}
    while(true == rs:next()) do
        table.insert(tmp, readData(rs))
    end
    fun(tmp)
end
local function makeRedisCmd(cmd, filed)
    local ps = LuaRedisArgs(cmd)
    if nil ~= field  then
        for i=1, #filed do
            ps:push(field[i])
        end
    end
    return ps
end
--ʵ��
function REDISDATA:Instance()
    if nil == REDISDATA._Instance then
        REDISDATA._Instance = REDISDATA.new()
    end
    return REDISDATA._Instance
end
--��ʼ������ģ��
function REDISDATA:Init(server)
    self._service = server
    self._callList = {}
    return true
end
--����һ��redis
function REDISDATA:AddDataBase(db, url, thread)
    return self._service:addRedis(db, url, thread)
end
--�ص�������
function REDISDATA:Call(id, p)
    if nil ~= self._callList[id]  then
        self._callList[id](p)
        self._callList[id]=nil
    end
end
--�̵߳���
-- db redis����
-- SQL ���
-- fun = function( data) for i=0, #data do row(rowdata) end end
-- flag �̱߳�ʾ
-- filed �����б� { "xxx", "ffff"} or nil
-- ����bool 
function REDISDATA:Query(db, sql, fun, flag, filed)
    local redisCmd =  makeRedisCmd(sql, filed)
    local hasCall = false
    if nil ~= fun then 
        hasCall = true
    end
    local id = self._service:redisQuery(db,redisCmd,hasCall,flag)
    if id > 0 then
        if nil ~= fun then
            self._callList[id]= function (rs)
                RedisRead(rs, fun)
            end
        end
    end
    return id > 0
end
