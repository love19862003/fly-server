Player = class("Player")
function Player:Init( info, gate, online, account)
  self._info = info
  self._server = server
  self._online = online
  self._account = account
end
function Player:CopyData( old)
  self._info = old._info
  self._server = old._server
  self._online = old._online
  self._account = old._account
end