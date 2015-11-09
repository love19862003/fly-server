require ("functions")
CACHE = class("CACHE")
CACHE._Instance = nil
function CACHE:Instance()
    if nil == CACHE._Instance then
        CACHE._Instance = CACHE.new()
    end
    return CACHE._Instance
end
--初始化数据模块
function CACHE:Init(server)
    self._service = server
    return true
end
--判断是否启用cache 
--返回值 bool
function CACHE:hasCache()
    return self._service:hasCache()
end
--读取内容
--返回值string 没有返回空串
function CACHE:load( key)
  return self._service:loadCache(key)
end
--保存内容
--返回值bool
function CACHE:save( key, content)
  return self._service:saveCache(key, content)
end
--删除内容
--返回值bool
function CACHE:remove( key)
  return self._service:removeCache(key)
end
--在执行批次处理的时候，最后要调用putExecute
--批次删除
function CACHE:putRemove( key)
  self._service:putRemoveCache(key)
end
--批次写
function CACHE:putWrite( key, content)
  self._service:putCache(key, content)
end
--执行批次
--返回值bool
function CACHE:putExecute()
  return self._service:putExecute()
end