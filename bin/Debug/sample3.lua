--local inspect = require("inspect")

--print(inspect(_G))
---------------------------------------------------------------------------------
function objinfo(obj)
    local meta = getmetatable(obj)
    if meta ~= nil then
        metainfo(meta)
    else
        print("no object infomation !!")
    end
end

function metainfo(meta)
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
print(g_test._test)

print(g_test:is_test())

print(g_test:ret_int())

temp = test(4)
print("temp ctor")
a = g_test:get()
print("a.test:"..a._test)
print("a.test:"..a:ret_int())
objinfo(a)
b = temp:get();
objinfo(b)
c = g_test:get()
print("c	-> ", c)
temp:set(a:ret_int())


print(temp._test)
print(temp:is_base())
print(temp:is_test())
function addPlayer(p)
print("add plyaer:"..p:ret_int())
end
