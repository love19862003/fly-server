local protobuf = require("protobuf")
require("print_r")
require("dump_proto")
local pbs = { msgPool= {}} 
function registerPb( path ) 
 local addr = assert(io.open(path,"rb"),"Can not load pb file:"..path) 
 local buffer = addr:read "*a" 
 addr:close() 
 logInfo(path)  
 protobuf.register(buffer) 
end 
pbs.registerPbs = function(path) 
   registerPb(path.."PlayerKickS2C.pb")
   table.insert(pbs.msgPool,"PlayerKickS2C.pb")
   registerPb(path.."PlayerExitS2S.pb")
   table.insert(pbs.msgPool,"PlayerExitS2S.pb")
   registerPb(path.."QueryGateStateLG2GT.pb")
   table.insert(pbs.msgPool,"QueryGateStateLG2GT.pb")
   registerPb(path.."LoginC2S.pb")
   table.insert(pbs.msgPool,"LoginC2S.pb")
   registerPb(path.."PlayerDataS2C.pb")
   table.insert(pbs.msgPool,"PlayerDataS2C.pb")
   registerPb(path.."GateS2C.pb")
   table.insert(pbs.msgPool,"GateS2C.pb")
   registerPb(path.."ServerStopS2C.pb")
   table.insert(pbs.msgPool,"ServerStopS2C.pb")
   registerPb(path.."ServerRegisterS2S.pb")
   table.insert(pbs.msgPool,"ServerRegisterS2S.pb")
   registerPb(path.."LoginResultS2C.pb")
   table.insert(pbs.msgPool,"LoginResultS2C.pb")
end 
return pbs 
