function Dump.object_info(obj)
    local meta = getmetatable(obj)
    if meta ~= nil then
        Dump.metainfo(meta)
    else
        print("no object infomation !!")
    end
end

function Dump.metainfo(meta)
    if meta ~= nil then
        local name = meta["__name"]
        if name ~= nil then
            metainfo(meta["__parent"])
            print("<"..name..">")
            for key,value in pairs(meta) do 
                if not string.find(key, "__..") then 
                    if type(value) == "function" then
                        print("\t[f] "..name..":"..key.."()") 
                        elseif type(value) == "userdata" then
                        print("\t[v] "..name..":"..key)
                    end
                end
            end
        end
    end
end