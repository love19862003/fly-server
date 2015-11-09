function reloadModules(cmd)
    if cmd == "all" then
        reloadCofigs()
        reloadCallBack()
        reloadPbs()
        reloadPlayers()
        return
    end
    if cmd == "config" then
        reloadCofigs()
        return
    end
    if cmd == "callback" then
        reloadCallBack()
        return
    end
    if cmd == "commodity" then
        reloadCommodity()
        return
    end
    if cmd == "player" then
        reloadPlayers()
        return
    end
    if cmd == "pbs" then
        reloadPbs()
        return
    end
    print("not found command:"..cmd)
    return
end
function reloadPlayers()

end
function reloadCallBack()
    for i=1, #OpenServers do 
        OpenServers[i]:Reload()
    end
end
function reloadCommodity()

end
function reloadCofigs()

end
function reloadPbs()
    local pbs = require_ex("registerPb")
    pbs.registerPbs("../../pbs/")
end