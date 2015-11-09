Manager = class("Manager")
function Manager:Init()
  self._pool = {}
end
function Manager:Add(key, obj)
  if nil == self._pool[key] then
    self._pool[key] = obj
    return true
  end
  return false
end
function Manager:Get(key)
  return self._pool[key]
end
function Manager:Set(key, obj)
  self._pool[key] = obj
end