local lfs = require "lfs"
local sTable = {}
local sTag = {}
local sRegList ={}
local fileLog = nil
function loadFile(path, fileName)
    local file = assert(io.open(path,"rb"))
    local tBefore = {}
    for line in file:lines() do
        local f = string.find(line, "import%s+\"%w+.proto\";")
        local import = line
        if nil ~=  f then
           line = string.gsub(line, "import%s+\"", "")
           local s, e = string.find(line, ".proto\";")
           if s ~= nil then
             line = string.sub(line,0 ,s-1)
           else
             assert(false)
           end
            fileLog:write(string.format("file:%s import filename:%s file:%s \n", fileName, line, import))
            if nil == tBefore then
                tBefore = {}
            end
            --print(fileName.." dep "..line)
            table.insert(tBefore, line)
        end
    end
    file:close()
    sTable[fileName] = tBefore
end
function RegProtoList(name)
    if nil ~= sTable[name] then
        for k, v in pairs(sTable[name]) do
            if nil == sTag[v] then
                RegProtoList(v)
            end
        end
    else
      print("not found file:"..name)
      fileLog:write(string.format("not find file:%s \n", name))
      return
    end


    if nil == sTag[name] then
      sTag[name] = 1
      table.insert(sRegList, name)
    end
end

function register(path)
    for k, v in pairs(sTable) do
        RegProtoList(k)
    end

    local outFile = assert(io.open(path,"w+"))
    outFile:write("local protobuf = require(\"protobuf\")\n")
    outFile:write("require(\"print_r\")\n")
    outFile:write("require(\"dump_proto\")\n")
    outFile:write("local pbs = { msgPool= {}} \n")
    outFile:write("function registerPb( path ) \n")
    outFile:write(" local addr = assert(io.open(path,\"rb\"),\"Can not load pb file:\"..path) \n")
    outFile:write(" local buffer = addr:read \"*a\" \n")
    outFile:write(" addr:close() \n")
    outFile:write(" logInfo(path)  \n")
    outFile:write(" protobuf.register(buffer) \n")
    outFile:write("end \n")

    outFile:write("pbs.registerPbs = function(path) \n")


    for k, v in pairs (sRegList)  do
        --print("reg:"..v)
        outFile:write(string.format("   registerPb(path..\"%s.pb\")\n", v))
        outFile:write(string.format("   table.insert(pbs.msgPool,\"%s.pb\")\n", v))
    end
    outFile:write("end \n")
    outFile:write("return pbs \n")
    outFile:close()
end

function attrdir (path, pathFile)
    fileLog = assert(io.open(pathFile.."test","w+"))
    local fileList = {}
    for file in lfs.dir(path) do

        if file ~= "." and file ~= ".." then
            --print("check:"..file)
            if nil ~= string.find(file, "%S%.proto") then
                --print(file)
                table.insert(fileList, file)
            end
        else

        end
    end

    for k, v in pairs(fileList) do
        local name = v
        name = string.gsub(name, ".proto", "")
        name = string.gsub(name, "\", "")
        loadFile(path.."/"..v, name)
    end

    register(pathFile)
    fileLog:close()
 end
 attrdir("../message/", "../pbs/registerPb.lua")
