package.path = package.path..";./?.lua;../?.lua"
--print(package.path)
require("protobuf")
require("print_r")
require("dump_proto")
local _gGobalDefine = require("lua._GGobalDefine")
local _gEnum = require("lua._GEnum")
local _gTableType = require("lua._GTableType")
local _gVersion = require("lua._Version")
local _gCheck = require("lua._GCheck")
local VersionName = "version"
local _gHasError = false

local function split(s, p)
    local rt= {}
    if s ~= nil and s~="" then
      string.gsub(s, '[^'..p..']+', function(w) table.insert(rt, w) end )
	else
		table.insert(rt, s)
    end
    return rt
end


local function ProtoPath(name)
  return string.format("../proto/%s%s.proto",name, _gGobalDefine.ConfigTailName)
end
local function LuaDataPath(name)
  return string.format("../lua/.%s", name)
end
local function PBPathFile(name)
  return string.format("../proto/%s.pb",name)
end
local function RegistProto(name)
  local addr = assert(io.open(PBPathFile(name),"rb"),"Can not load pb file:"..PBPathFile(name))
  local buffer = addr:read "*a"
  addr:close()
  protobuf.register(buffer)
  --print("register pb:"..name)

--  dump_proto(buffer)
end
local function CommonProtoFile()
  -- generate common config proto
  local out_proto = assert(io.open("../proto/".._gGobalDefine.ConfigTypeGroup..".proto","w+"))
  --out_proto:write(os.date("// Generated by packtool \n// time: %c\n",os.time()))
  out_proto:write(string.format("package %s;\n\n",_gGobalDefine.nameSpace))
  out_proto:write(string.format("message %s {\n",_gGobalDefine.ConfigTypeGroup))
  out_proto:write(string.format("    repeated int32 %s = %d;\n","array",1))
  out_proto:write("}\n")
  out_proto:close()
  --print(string.format("%s built",ProtoPath(_gGobalDefine.ConfigTypeGroup)))
end

local function CreateProto(luaName, pbTrun)
  local pbConfigName = ProtoPath(luaName)
  local luaDataName = LuaDataPath(luaName)
  local out_proto = assert( io.open( pbConfigName,"w+" ) )
  --out_proto:write(os.date("// Generated by packtool \n// time: %c\n",os.time()))
  local configData = require(luaDataName)
  out_proto:write(string.format("package %s;\n\n",_gGobalDefine.nameSpace))
  out_proto:write(string.format("import \"%s.proto\";\n",_gGobalDefine.ConfigTypeGroup))


  local filedInfo = _gTableType[luaName]

  for key, var in pairs(filedInfo) do
	if var.type == 5 then
		local t = split(var.type_name, ".")
		if t[1] ~= luaName then
    		out_proto:write(string.format("import \"%s%s.proto\";\n",t[1], _gGobalDefine.ConfigTailName))
			table.insert(pbTrun[luaName], t[1])
    	end
    end
  end
  out_proto:write(string.format("message %s%s {\n",luaName, _gGobalDefine.ConfigTailName))

  local enumInfo = _gEnum[luaName];
  if enumInfo ~= nil then
  	for key, var in pairs (enumInfo) do
  		out_proto:write(string.format("	enum %s{\n", key))
  		for k, v in pairs (var) do
  			out_proto:write(string.format("	 %s = %d; //%s \n", k, v.value, v.comment))
  		end
  		out_proto:write("	};\n")
  	end
  end
  for key, var in pairs(filedInfo) do
  	if var.type == 0 then
  		out_proto:write(string.format("	optional int32 %s = %d; //%s \n", var.name, var.index, var.comment))
    elseif var.type == 1 then
    	out_proto:write(string.format("	optional string %s = %d; //%s \n", var.name, var.index, var.comment))
    elseif var.type == 2 then
    	out_proto:write(string.format("	repeated int32 %s = %d; //%s \n",  var.name, var.index, var.comment))
    elseif var.type == 3 then
    	out_proto:write(string.format("	repeated %s %s = %d; //%s \n", _gGobalDefine.ConfigTypeGroup, var.name, var.index, var.comment))
    elseif var.type == 5 then
    	local t = split(var.type_name, ".")
    	if t[1] ~= luaName then
    		out_proto:write(string.format("	optional %s%s.%s %s = %d; //%s \n", t[1],_gGobalDefine.ConfigTailName,t[2], var.name, var.index, var.comment))
    	else
    		out_proto:write(string.format("	optional %s %s = %d; //%s \n", t[2], var.name, var.index, var.comment))
    	end
    else
    	-- do nothing
    end
  end
  out_proto:write("}\n")
  out_proto:close()
  --print(string.format("%s built",pbConfigName))
end

local function PatchLog( error_log, type_t)
	print(error_log)
	PatchLogFile:write("error:"..error_log)
	PatchLogFile:write("\n")
	if type_t ==  false then
		--PatchLogFile:write("notice:"..error_log)
		--PatchLogFile:write("\n")
	else
		HasError = true
	end

end
local function MakeGameProto( configs, pbTrun)
  local gameConfigFileName = ProtoPath(_gGobalDefine.AllConfigName)
  local out_proto = assert( io.open(gameConfigFileName,"w+" ) )
  out_proto:write(os.date("// Generated by pack tool \n// time: %c\n",os.time()))
  out_proto:write(string.format("\npackage %s;\n\n",_gGobalDefine.nameSpace))

  for k, v in pairs(configs) do
      CreateProto(k, pbTrun)
      out_proto:write(string.format("import \"%s%s.proto\";\n", v, _gGobalDefine.ConfigTailName))
  end
  out_proto:write(string.format("message %s%s {\n",_gGobalDefine.AllConfigName, _gGobalDefine.ConfigTailName))

  local index = 1
  out_proto:write(string.format(" optional string %s = %d;\n",VersionName, index))
  index = index + 1
  for k, v in pairs(configs) do
      out_proto:write(string.format(" repeated %s%s %s = %d;\n", v, _gGobalDefine.ConfigTailName, string.lower(v), index))
      index = index+1
  end


  out_proto:write("}\n")
  out_proto:close();
  --print(string.format("%s built",gameConfigFileName))
end

local function DataToPbFile(pb, data, name)
  local temTest = protobuf.encode(pb, data)
  local temTest_data = assert(io.open(name,"wb+"))
  temTest_data:write(temTest)
  temTest_data:close()
end
local function RegProtoList(name, pbTrun, tt, regList)
	if nil ~= pbTrun[name] then
		for k, v in pairs(pbTrun[name]) do
			if tt[v]==false then
				RegProtoList(v, pbTrun[v], tt, regList)
			end
		end
	end

	if tt[name]==false then
		RegistProto(name.._gGobalDefine.ConfigTailName)
		tt[name] = true
		table.insert(regList, name.._gGobalDefine.ConfigTailName)
	end
end

local function RegisterAllProto(pbTrun)
	local regList ={}
	RegistProto(_gGobalDefine.ConfigTypeGroup)
	--table.insert(regList, _gGobalDefine.ConfigTypeGroup)
	local tt = {}
	for k, v in pairs(pbTrun) do
		tt[k]= false
	end

	for k, v in pairs(pbTrun) do
		RegProtoList(k, pbTrun, tt, regList)
	end

	RegistProto(_gGobalDefine.AllConfigName.._gGobalDefine.ConfigTailName)
	table.insert(regList, _gGobalDefine.AllConfigName.._gGobalDefine.ConfigTailName)
	return regList
end
local function getTableKeyName( tableName)
	local filedInfo = _gTableType[tableName]
	for kk, vv in pairs(filedInfo) do
		if vv.index==1 then
			return vv.name
		end
	end
	PatchLog("not found table:"..tableName.."'s key", true);
	return nil
end
local function MakeLuaOut(regList)
	local luaOut = assert(io.open(string.format("../data/%s.lua",_gGobalDefine.OutFileName),"w+"))
	luaOut:write(string.format("--Filename:%s.lua\n",_gGobalDefine.OutFileName))
	luaOut:write("--Version:  1.0\n")
	--luaOut:write(os.date("--Created time: %c\n",os.time()))

	--luaOut:write("require(\"protobuf\")\n")
	--luaOut:write("require(\"print_r\")\n")
	--luaOut:write("require(\"dump_proto\")\n")
	luaOut:write("local configs={}\n")

	luaOut:write("local function registerPb(path)\n")
	luaOut:write("	local addr = io.open(path,\"rb\")\n")
	luaOut:write("	local buffer = addr:read \"*a\"\n")
	luaOut:write("	addr:close()\n")
	--luaOut:write("	print(\"registing \"..path)\n")
	luaOut:write("	protobuf.register(buffer)\n")
	luaOut:write("end\n")

	luaOut:write("configs.init = function(folder,data_file)\n")
	local sstr = "\%s/proto/".._gGobalDefine.ConfigTypeGroup..".pb"
	luaOut:write(string.format("	registerPb(string.format(\"\%s\",folder))\n", sstr))
	for k,v in pairs(regList) do
		--print(v)
		local str = "\%s/proto/"..v..".pb"
		luaOut:write(string.format("	registerPb(string.format(\"\%s\",folder))\n", str))
	end
	luaOut:write("	local path = string.format(\"\%s/\%s\",folder,data_file)\n")
	luaOut:write("	local in_data = assert(io.open(path,\"rb\"))\n")
	luaOut:write("	local buffer = in_data:read \"*a\"\n")

	luaOut:write(string.format("	local data=protobuf.decode(\"%s.%s%s\", buffer)\n", _gGobalDefine.nameSpace, _gGobalDefine.AllConfigName, _gGobalDefine.ConfigTailName))

	--[[luaOut:write("	for key, var in pairs(data) do\n")
	luaOut:write("		if type(var)==\"table\" then\n")
	luaOut:write("			local tmp={}\n")
	luaOut:write("			for k, v in pairs(var) do\n")
	luaOut:write("				tmp[v.id]=v\n")
	luaOut:write("			end\n")
	luaOut:write("			data[key]=tmp\n")
	luaOut:write("		end\n")
	luaOut:write("	end\n")
	]]
	for k, v in pairs(_gGobalDefine.TableList) do
		luaOut:write(string.format("	--table %s\n", v))
		luaOut:write(string.format("	configs.%s={}\n", string.lower(v)))
		luaOut:write(string.format("	for k, v in pairs(data.%s) do\n", string.lower(v)))
		luaOut:write(string.format("		configs.%s[v.%s]=v\n", string.lower(v),  getTableKeyName(v)))
		luaOut:write(string.format("	end\n"))
	end
	--luaOut:write("	configs = data\n")
	luaOut:write("	configs[\"data_version\"]=data.version\n")
	luaOut:write("	in_data:close()\n")
	luaOut:write("	return configs\n")
	luaOut:write("end\n")
	luaOut:write("return configs\n")
	luaOut:close()
end
local function logCheckError(err)
 -- cout error info
 PatchLog(err, true)
 print(err)
 _gHasError = true
end

local function checkTableValue( value, ccc, all_config_data)
	local tt = all_config_data[string.lower(ccc.table)]
	if tt == nil then
		return false
	end

	if type(value) == "number" then
		for k, v in pairs( tt) do
			if v[ccc.head] == value then
				return true
			end
		end
		return false
	elseif type(value) == "table" then
		for k, v in pairs(value) do
			if checkTableValue(v, ccc, all_config_data) == false then
				return false
			end
		end
		return true
	else
		return true
	end

end
local function checkIntValue(value, ccc)
	if type(value) == "number" then
		if value == ccc.value then
			return true
		else
			return false
		end
	elseif type(value) == "table" then
		for k, v in pairs(value) do
			if checkIntValue(v, ccc) == false then
				return false
			end
		end

		return true
	else
		return true
	end
end
local function checkEnum(value, ccc)
	local en = _gEnum[ccc.table][ccc.enum]
	if en == nil then
		return false
	end
	if type(value) == "number" then
		if ccc.value == nil then
			for enk, env in pairs(en) do
				if env.value == value then
					return true
				end
			end
			return false
		else
			if type(ccc.value)=="number" then
				if ccc.value == value then
					return true
				end
			else
				if value == en[ccc.value].value then
					return true
				end
			end
			return false
		end
	elseif type(value) == "table" then
		for k, v in pairs(value) do
			if checkEnum(v, ccc) == false then
				return false
			end
		end

		return true
	elseif type(value) == "string" then
		for enk, env in pairs(en) do
			if ccc.value == nil then
				if enk == value then
					return true
				end
			else
				if ccc.value == value then
					return true
				else
					return false
				end
			end
		end
		return false
	else
		return true
	end

end
local function checkCondition(typeDefine, value, condition, all_config_data)
	-- int
	if typeDefine.type == 0 then
		for C, cc in pairs(condition) do
			local ccc = cc[1]
			if ccc.type == 1 then
				 if true == checkEnum(value, ccc) then
					return true
				 end
			elseif ccc.type == 2 then
				if true ==  checkTableValue(value, ccc, all_config_data) then
					return true
				end
			elseif ccc.type == 3 then
				if true == checkIntValue(value, ccc) then
					return true
				end
			else
				return true
			end
		end
		return false
	elseif typeDefine.type == 2 then -- array
		local result = true
		for C, cc in pairs(condition) do
			local ccc = cc[1]
			if ccc.type == 1 then
				 if true == checkEnum(value, ccc) then
					return true
				 end
			elseif ccc.type == 2 then
				if true ==  checkTableValue(value, ccc, all_config_data) then
					return true
				end
			elseif ccc.type == 3 then
				if true == checkIntValue(value, ccc) then
					return true
				end
			else
				return true
			end

		end
		return false

	elseif typeDefine.type == 3 then -- group

		for kk, vv in pairs(value) do
			local result = false
			-- check in some condition is true
			for C, cc in pairs(condition) do
				local rrrrr = true
				local rrtable={}
				for k, ccc in pairs(cc) do
					rrtable[k] = false
					if ccc.type == 1 then
						rrtable[k] = checkEnum(vv.array[k], ccc)
					elseif ccc.type == 2 then
						rrtable[k] = checkTableValue(vv.array[k], ccc, all_config_data)
					elseif ccc.type == 3 then
						rrtable[k] = checkIntValue(vv.array[k], ccc)

					else
						rrtable[k] = true
					end
				end

				for rrrkkk, rrrvvv in pairs(rrtable) do
					if false == rrrvvv then
						rrrrr = false
						break
					end
				end

				if rrrrr == true then
					result = true
				end
			end

			if result == false then
				return false
			end
		end
		return true
	else
		return true
	end

end
local function checkData(name, data, all_config_data)
	local checkList = _gCheck[name]
	print("....... check table "..name)
	if checkList ~= nil then
		for _index, record in pairs(data) do
			for key, value in pairs(record) do
				if checkList[key] ~= nil then
					local typeDefine = _gTableType[name][key]
					local condition = checkList[key].condition
					if false == checkCondition(typeDefine, value, condition, all_config_data) then
						local ttk = getTableKeyName(name)
						if ttk ~= nil then
							logCheckError("error in table:"..name.." with record:"..record[ttk].." with check:"..key)
						else
							logCheckError("error in table:"..name.." with  with check:"..key)
						end
					end
				end
			end
		end
	end
end

local function MakeAllData(configs)
  local iconv = require("luaiconv")
  local cd = iconv.new("utf-8","gbk")
  local all_config_data = {}

  for key, var in pairs(configs) do
	local data=require(LuaDataPath(key))
	all_config_data[string.lower(key)]={}
	all_config_data[string.lower(key)]= data
  end

  print("###############begin check data #######################")

  for key,var in pairs(configs) do
	checkData(key, all_config_data[string.lower(key)], all_config_data)
  end

  --print(_gVersion)
  all_config_data[string.lower(VersionName)]=_gVersion
  --print("add....".._gGobalDefine.nameSpace..".".._gGobalDefine.AllConfigName.._gGobalDefine.ConfigTailName)
  DataToPbFile(_gGobalDefine.nameSpace..".".._gGobalDefine.AllConfigName.._gGobalDefine.ConfigTailName,all_config_data,"../data/data.pack")
  --print("build data success")
  return all_config_data
end
local function MakeCppOut(configs)
	-- make mananger head
	local hpp = assert( io.open( string.format("../cpps/%s.h",_gGobalDefine.OutFileName),"w+" ) )
	hpp:write("/********************************************************************\n")
	hpp:write(string.format("Filename:%s.h\n",_gGobalDefine.OutFileName))
	hpp:write("\n")
	hpp:write(string.format("Description:%s\n",_gGobalDefine.OutFileName))
	hpp:write("\n")
	hpp:write("Version:  1.0\n")
	hpp:write(os.date("Created time: %c\n",os.time()))
	hpp:write("Revison:  none\n")
	hpp:write("Compiler: gcc vc\n")
	hpp:write("\n")
	hpp:write("Author:   wufan, love19862003@163.com\n")
	hpp:write("\n")
	hpp:write("Organization:\n")
	hpp:write("*********************************************************************/\n")
	hpp:write(string.format("#ifndef __%s_H__\n", string.upper(_gGobalDefine.OutFileName)))
	hpp:write(string.format("#define __%s_H__\n", string.upper(_gGobalDefine.OutFileName)))
	hpp:write(string.format("#include \"%s%s.pb.h\"\n", _gGobalDefine.AllConfigName, _gGobalDefine.ConfigTailName))
	hpp:write("#include <memory>\n")
	local space = split(_gGobalDefine.nameSpace, ".")
	for key, var in pairs(space) do
		--print(var)
		hpp:write(string.format("namespace %s{\n",var ))
	end
	hpp:write("\n")
	hpp:write(string.format("	class %s{\n",_gGobalDefine.OutFileName) )
	hpp:write("		private:\n")
	hpp:write("			class Impl;\n")
	hpp:write("			std::shared_ptr<Impl> m_impl;\n")
	hpp:write("		public:\n")
	hpp:write(string.format("			const std::string& %s() const;\n", VersionName ))
	hpp:write(string.format("			%s();\n",_gGobalDefine.OutFileName) )
	hpp:write(string.format("			virtual ~%s();\n",_gGobalDefine.OutFileName) )
	hpp:write("			bool init(const std::string& path, const std::string&);\n")

	for k, v in pairs(configs) do
		local className = ""..k.._gGobalDefine.ConfigTailName
		local dataName = string.lower(k)
		hpp:write(string.format("			//table %s interface\n", className))
		hpp:write(string.format("			const %s&  %s(const int %s) const ;\n",className, dataName, getTableKeyName(k)))
		hpp:write(string.format("			bool  has_%s(const int %s) const ;\n",dataName,getTableKeyName(k)))
		hpp:write(string.format("			const ::google::protobuf::RepeatedPtrField<%s>& %s() const;\n",className, dataName))
		hpp:write(string.format("			//::google::protobuf::RepeatedPtrField<%s>* mutable_%s();\n\n",className, dataName))
	end
	hpp:write("	};\n")
	for key, var in pairs(space) do
		hpp:write("}")
	end
	hpp:write("\n")
	hpp:write("#endif\n")
	hpp:close()


	local cpp = assert( io.open( string.format("../cpps/%s.cpp",_gGobalDefine.OutFileName),"w+" ) )
	cpp:write("/********************************************************************\n")
	cpp:write(string.format("Filename:%s.cpp\n",_gGobalDefine.OutFileName))
	cpp:write("\n")
	cpp:write(string.format("Description:%s\n",_gGobalDefine.OutFileName))
	cpp:write("\n")
	cpp:write("Version:  1.0\n")
	cpp:write(os.date("Created : %c\n",os.time()))
	cpp:write("Revison:  none\n")
	cpp:write("Compiler: gcc vc\n")
	cpp:write("\n")
	cpp:write("Author:   wufan, love19862003@163.com\n")
	cpp:write("\n")
	cpp:write("Organization:\n")
	cpp:write("*********************************************************************/\n")
	cpp:write(string.format("#include \"%s.h\"\n", _gGobalDefine.OutFileName))
	cpp:write("#include <fstream>  \n")
	cpp:write("#include <iostream>  \n")
	for key, var in pairs(space) do
		cpp:write(string.format("namespace %s{\n",var ))
	end
	cpp:write("\n")
	-- add child class 087
	cpp:write(string.format("	class %s::Impl{\n",_gGobalDefine.OutFileName))
	cpp:write("		public:\n")
	cpp:write("			Impl(){;}\n")
	cpp:write("			~Impl(){;}\n")

	-- version
	cpp:write(string.format("			const std::string& %s() const { return m_configs.%s();}\n", VersionName, VersionName))

	-- init function
	cpp:write("			bool init(const std::string& path){\n")
	cpp:write("				using namespace std;\n")
	cpp:write("				fstream dataput(path.c_str(), ios::in | ios::binary );\n")
	cpp:write("				if(!m_configs.ParseFromIstream(&dataput)){\n")
	cpp:write("					cerr << \"Failed to parse from file\" << path << endl;\n")
	cpp:write("					return false;\n")
	cpp:write("				}\n")
	cpp:write("				setupMapping();\n")
	cpp:write("				return true;\n")
	cpp:write("			}\n")

	-- member function
	for k, v in pairs(configs) do
		local dataName = string.lower(k)
		local className = ""..k.._gGobalDefine.ConfigTailName
		cpp:write(string.format("			//table %s interface\n", className))
		cpp:write(string.format("			const %s&  %s(const int %s) const {\n",className, dataName, getTableKeyName(k)))
		cpp:write(string.format("				return *(m_%sMap.at(%s));\n", dataName, getTableKeyName(k)))
		cpp:write(string.format("			}\n"))
		cpp:write(string.format("			bool  has_%s(const int %s) const {\n",dataName,getTableKeyName(k)))
		cpp:write(string.format("				return m_%sMap.count(%s) > 0;\n", dataName, getTableKeyName(k)))
		cpp:write(string.format("			}\n"))
		cpp:write(string.format("			const ::google::protobuf::RepeatedPtrField<%s>& %s() const{\n",className, dataName))
		cpp:write(string.format("				return m_configs.%s();\n", dataName))
		cpp:write(string.format("			}\n"))
		cpp:write(string.format("			//::google::protobuf::RepeatedPtrField<%s>* mutable_%s(){\n\n",className, dataName))
		cpp:write(string.format("				//return m_configs.mutable_%s();\n", dataName))
		cpp:write(string.format("			//}\n"))
	end


	cpp:write("		private:\n")

	-- setupMapping
	cpp:write("			void setupMapping(){\n")
	for k, v in pairs(configs) do
		local dataName = string.lower(k)
		local className = ""..k.._gGobalDefine.ConfigTailName
		cpp:write(string.format("				//setup table %s to  Map\n", dataName))
		cpp:write(string.format("				if(true){\n"));
		cpp:write(string.format("					m_%sMap.clear();\n", dataName))
		cpp:write(string.format("					const ::google::protobuf::RepeatedPtrField<%s>& _%s = %s();\n", className, dataName, dataName))
		cpp:write(string.format("					for(::google::protobuf::RepeatedPtrField<%s>::const_iterator it = _%s.begin(); it != _%s.end(); ++it){\n", className, dataName, dataName))
		cpp:write(string.format("						m_%sMap.insert(std::make_pair(it->%s(), &(*it)));\n", dataName, getTableKeyName(k)))
		cpp:write(string.format("					}\n"))
		cpp:write(string.format("				}\n"))
	end

	cpp:write(string.format("			}\n"))


	-- data member
	cpp:write("		private:\n")
	cpp:write(string.format("			%s%s m_configs;\n",_gGobalDefine.AllConfigName, _gGobalDefine.ConfigTailName))

	-- init map for data
	for k, v in pairs(configs) do
		local className = ""..k.._gGobalDefine.ConfigTailName
		local dataName = string.lower(k)
		cpp:write(string.format("			std::map<int, const %s*> m_%sMap;\n", className, dataName))
	end


	cpp:write("	};\n")

	cpp:write("	// add interface\n")
	cpp:write(string.format("	%s::%s():m_impl(new Impl){\n",_gGobalDefine.OutFileName, _gGobalDefine.OutFileName) )
	cpp:write(string.format("	}\n"))
	cpp:write(string.format("	%s::~%s(){\n",_gGobalDefine.OutFileName, _gGobalDefine.OutFileName) )
	cpp:write(string.format("		m_impl.reset();\n"))
	cpp:write(string.format("	}\n"))

	-- version

	cpp:write(string.format("	const std::string& %s::%s() const { return m_impl->%s();}\n", _gGobalDefine.OutFileName, VersionName, VersionName))
	-- init
	cpp:write(string.format("	bool %s::init(const std::string& path, const std::string& ) { return m_impl->init(path);}\n", _gGobalDefine.OutFileName))

	-- table
	for k, v in pairs(configs) do
		local dataName = string.lower(k)
		local className = ""..k.._gGobalDefine.ConfigTailName
		cpp:write("\n")
		cpp:write(string.format("	//table %s\n", className))
		cpp:write(string.format("	const %s&  %s::%s(const int %s) const {\n",className, _gGobalDefine.OutFileName, dataName, getTableKeyName(k)))
		cpp:write(string.format("		return m_impl->%s(%s);\n",  dataName,getTableKeyName(k)))
		cpp:write(string.format("	}\n"))
		cpp:write(string.format("	bool  %s::has_%s(const int %s) const {\n",_gGobalDefine.OutFileName, dataName,getTableKeyName(k)))
		cpp:write(string.format("		return m_impl->has_%s(%s);\n",  dataName,getTableKeyName(k)))
		cpp:write(string.format("	}\n"))
		cpp:write(string.format("	const ::google::protobuf::RepeatedPtrField<%s>& %s::%s() const{\n",className, _gGobalDefine.OutFileName, dataName))
		cpp:write(string.format("		return m_impl->%s();\n", dataName))
		cpp:write(string.format("	}\n"))
		cpp:write(string.format("	//::google::protobuf::RepeatedPtrField<%s>* %s::mutable_%s(){\n",className, _gGobalDefine.OutFileName, dataName))
		cpp:write(string.format("		//return m_impl->mutable_%s();\n", dataName))
		cpp:write(string.format("	//}\n"))
	end

	-- add h interface
	for key, var in pairs(space) do
		cpp:write("}")
	end
	cpp:write("\n")
	cpp:close()
end

local function Make()
  PatchLogFile = assert( io.open( "../log.error","w+" ) )
  local tt = os.time()
  local configs = {}
  local pbTrun = {}
	for _, var in pairs(_gGobalDefine.TableList) do
		configs[var] = var
		pbTrun[var] = {};
	end
  -- create proto file
  -- regiter trun
  print("begin make all proto file ....")
  CommonProtoFile()
  MakeGameProto(configs, pbTrun)
  print("make all proto done")

  -- call os to make pb and cpp .h
  local cdObj = assert(io.popen("cd"))
  local currentPath = cdObj:read("*all"):sub(1,-2)
  cdObj:close()
  print("#######################begin export  pb file#######################")
  os.execute(currentPath.."\\..\\CreatePbsForLua.bat")
  print("#######################begin export  cpp file#######################")
  os.execute(currentPath.."\\..\\CreateC++.bat")
  print("export to pb && cpps done")
  print("begin make pack data ...")
  local regList = RegisterAllProto(pbTrun)
  local data = MakeAllData(configs)
  print("#############################################################")
  print("make pack data done")
  print("begin make out file with lua  && cpp manager.")
  MakeLuaOut(regList)
  MakeCppOut(configs)
  print(os.date())
  if _gHasError == false then
	PatchLog(string.format("make data version: %s success, used time:%d second",data[VersionName], os.time() - tt ), false)
	PatchLogFile:close()
  else
	assert(false)
  end
  print("done")
end
Make()
local function dumpData(n, t, c)
	local ss = n..":"
		for i=1, c do
			ss = "\t"..ss
		end
		c = c + 1

	if type(t)== "table" then
		print(ss.."\n")
		for k, v in pairs(t) do
			dumpData(k, v, c)
		end
	else
		if t ~= nil then
			 ss = ss..t.."\n"
		else
			 ss = ss.."nil\n"
		end
		print(ss)
	end

end
local function test()
	local config = require(string.format("../data/%s", _gGobalDefine.OutFileName))
	local data = config.init("../","data/data.pack")
	for k, v in pairs(data) do
		--dumpData(k, v, 1)
		return
	end
end
test()

