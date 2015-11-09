require ("functions")
MYSQLDATA = class("MYSQLDATA")
MYSQLDATA._Instance = nil
--���ݿ��ֶ�����
local TypeTable = {"blob","bool","double","int","uint","int64","uint64","string"}
--�����ֶ�����
local function setData(ps, field, type, value)
    if type==TypeTable[1] then
        ps:setBlob(field, value)
    elseif type=="bool" then
        ps:setBoolean(field, value)
    elseif type=="double" then
        ps:setDouble(field, value)
    elseif type=="int" then
        ps:setInt(i, value)
    elseif type=="uint" then
        ps:setUInt(field, value)
    elseif type=="int64" then
        ps:setInt64(field,value)
    elseif type=="uint64" then
        ps:setUInt64(field,value)
    elseif type=="string" then
        ps:setString(field,value)
    else
        assert(false)
        return false
    end
    return true
end
--��ȡ�ֶ�
local function getData(rs,type,field)
    if type==TypeTable[1] then
        return rs:getBlob(field)
    elseif type=="bool" then
        return rs:getBoolean(field)
    elseif type=="double" then
        return rs:getDouble(field)
    elseif type=="int" then
        return rs:getInt(field)
    elseif type=="uint" then
        return rs:getUInt(field)
    elseif type=="int64" then
        return rs:getInt64(field)
    elseif type=="uint64" then
        return rs:getUInt64(field)
    elseif type=="string" then
        return rs:getString(field)
    else
        assert(false)
        return nil
    end
end
local function MakeLuaMyPSCall(data)
    local ps = LuaMyPSCall()
    for i=1, #data do
        local type = data[i][1]
        local value = data[i][2]
        assert(setData(ps, i, type, value))
    end
    return ps
end
local function StmtReadCall(rs, column, fun)
    local data = {}
    while (rs:next() == true) do
        local columnData = {}
        for i=1,#column do 
            local type = column[i][1]
            local field = column[i][2]
            columnData[field]=getData(rs,type,field)
        end
        table.insert(data, columnData)
    end
    fun(data)
end
--ʵ��
function MYSQLDATA:Instance()
    if nil == MYSQLDATA._Instance then
        MYSQLDATA._Instance = MYSQLDATA.new()
    end
    return MYSQLDATA._Instance
end
--��ʼ������ģ��
function MYSQLDATA:Init( server)
    self._service = server
    self._callList = {}
    return true
end
--����һ��MYSQL���ݿ�
-- db ���ݿ�����
-- URL ���ݿ��ַ�Ͷ˿� " 127.0.0.1:3306"
-- user �û���
-- pwd ����
-- thread �����߳���
-- ����ֵ bool
function MYSQLDATA:AddDataBase(db, url, user, pwd, thread)
    return self._service:addMysql(db, url, user, pwd, db, thread)
end
--�ص�������
function MYSQLDATA:Call(id, p)
    --print("mysqlcall:"..id)
    if nil ~= self._callList[id]  then
        self._callList[id](p)
        self._callList[id]=nil
    end
end
--�̵߳���
-- db ���ݿ�����
-- sql ִ�����
-- flag �̱߳�ʾ
-- column = {{"int", "id"}, {"blob", "test"}}
-- fun = function( data) for i=0, #data do row(rowdata) end end
-- ����ֵbool
function MYSQLDATA:Query(db, sql, flag, column, fun)
    local id = self._service:mysqlQuery(db,sql,flag)
    if id > 0 then
        if nil ~= fun then
            self._callList[id]= function (rs)
                StmtReadCall(rs, column, fun)
            end
        end
    end
    return id > 0
end
--�̵߳���
-- db ���ݿ�����
-- sql ִ�����
-- flag �̱߳�ʾ
-- column = {{"int", 10}, {"blob", "test"}, {"bool", true}}
-- ����ֵ bool
function MYSQLDATA:PsQuery(db, sql, flag, column)
    if nil == column then
        return false
    end
    local pCall = MakeLuaMyPSCall(column)
    return self._service:mysqlPsQuery(db,sql,flag, pCall)
end
--��̬����
-- URL ���ݿ��ַ�Ͷ˿� " 127.0.0.1:3306"
-- user �û���
-- pwd ����
-- db ���ݿ�����
-- SQL ���
-- column = {{"int", "id"}, {"blob", "test"}}
-- fun = function( data) for i=0, #data do row(rowdata) end end
-- ����ֵ bool
function MYSQLDATA:SQuery(url, user, pwd, db, sql, column, fun)
    local id = self._service:sMysqlQuery(url, user, pwd, db,sql)
    if id > 0 then
        if nil ~= fun then
            self._callList[id]= function (rs)
                StmtReadCall(rs, column, fun)
            end
        end
    end
    return id > 0
end
--��̬����
-- URL ���ݿ��ַ�Ͷ˿� " 127.0.0.1:3306"
-- user �û���
-- pwd ����
-- db ���ݿ�����
-- SQL ���
-- column = {{"int", 10}, {"blob", "test"}, {"bool", true}}
-- ����ֵ bool
function MYSQLDATA:SPsQuery(url, user, pwd, db, sql, column)
    if nil == column then
        return false
    end
    local pCall = MakeLuaMyPSCall(column)
    return self._service:sMysqlPsQuery(url, user, pwd, db,sql, pCall)
end