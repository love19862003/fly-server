/********************************************************************

  Filename:   BindRedisToLua

  Description:BindRedisToLua

  Version:  1.0
  Created:  22:9:2015   15:03
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __FANNY_BindRedisToLua_H__
#define __FANNY_BindRedisToLua_H__
#include "database/RedisDefine.h"
#include "luatinker/lua_tinker.h"
namespace ShareSpace {
  namespace DB { 
   class LuaRedisResult
   {
   public:
     explicit LuaRedisResult(RedisResult* rs){ 
       m_list = rs->list();
       m_index = -1;
     }
     int itType() { 
       if(m_index < 0) { MYASSERT(false, "call api lua redis error");  return RedisResultData::RDT_TYPE_ERROR; }
       if(m_index >= static_cast<int>(m_list.size())) { return RedisResultData::RDT_TYPE_ERROR; }
       return m_list[m_index].type();
     }
     int integer() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error"); return -1; }
       if(m_index >= static_cast<int>(m_list.size())) { return -1; }
       return m_list[m_index].integer();
     }
     std::string str() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error");  return ""; }
       if(m_index >= static_cast<int>(m_list.size())) { return ""; }
       return m_list[m_index].str();
     }
     bool next() {
       if(m_list.empty() || m_index >= static_cast<int>(m_list.size())) { return false; }
       ++m_index;
       return m_index >= 0 && m_index < static_cast<int>(m_list.size());
     }
     bool isStr() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error"); return false; }
       if(m_list.empty() || m_index >= static_cast<int>(m_list.size())) { return false; }
       return m_list[m_index].isStr();
     }
     bool isNil() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error"); return false; }
       if(m_list.empty() || m_index >= static_cast<int>(m_list.size())) { return false; }
       return m_list[m_index].isNil();
     }
     bool isInteger() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error"); return false; }
       if(m_list.empty() || m_index >= static_cast<int>(m_list.size())) { return false; }
       return m_list[m_index].isInteger();
     }
    
     bool isStatus() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error"); return false; }
       if(m_list.empty() || m_index >= static_cast<int>(m_list.size())) { return false; }
       return m_list[m_index].isStatue();
     }
     bool isError() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error"); return false; }
       if(m_list.empty() || m_index >= static_cast<int>(m_list.size())) { return false; }
       return m_list[m_index].isError();
     }
     bool isInVaild() {
       if(m_index < 0) { MYASSERT(false, "call api lua redis error"); return false; }
       if(m_list.empty() || m_index >= static_cast<int>(m_list.size())) { return false; }
       return m_list[m_index].isInVaild();
     }

     static bool registerToLua(lua_State* L) {
       lua_tinker::class_add<LuaRedisResult>(L, "ShareSpace::DB::LuaRedisResult");
       lua_tinker::class_def<LuaRedisResult>(L, "itType", &LuaRedisResult::itType);
       lua_tinker::class_def<LuaRedisResult>(L, "str", &LuaRedisResult::str);
       lua_tinker::class_def<LuaRedisResult>(L, "integer", &LuaRedisResult::integer);
       lua_tinker::class_def<LuaRedisResult>(L, "next", &LuaRedisResult::next);
       lua_tinker::class_def<LuaRedisResult>(L, "isStr", &LuaRedisResult::isStr);
       lua_tinker::class_def<LuaRedisResult>(L, "isNil", &LuaRedisResult::isNil);
       lua_tinker::class_def<LuaRedisResult>(L, "isInteger", &LuaRedisResult::isInteger);
       lua_tinker::class_def<LuaRedisResult>(L, "isStatus", &LuaRedisResult::isStatus);
       lua_tinker::class_def<LuaRedisResult>(L, "isError", &LuaRedisResult::isError);
       lua_tinker::class_def<LuaRedisResult>(L, "isInVaild", &LuaRedisResult::isInVaild);
       return true;
     }
   protected:
   private:
     RedisResult::RedisResultList m_list;
     //typedef RedisResult::RedisResultList::const_iterator iterator;
     int m_index = -1;
   };


   class LuaRedisArgs
   {
   public:
     explicit LuaRedisArgs(std::string c) :m_cmd(c){ }
     virtual ~LuaRedisArgs() { }
     void push(std::string arg) { m_args.push_back(arg); }

     static bool registerToLua(lua_State* L) {
       lua_tinker::class_add<LuaRedisArgs>(L, "LuaRedisArgs");
       lua_tinker::class_con<LuaRedisArgs>(L, lua_tinker::constructor<LuaRedisArgs, std::string>);
       lua_tinker::class_def<LuaRedisArgs>(L, "push", &LuaRedisArgs::push);
       return true;
     }
     const std::string& command() { return m_cmd; }
     const std::vector<std::string>& args() { return m_args; }
   protected:
   private:
     const std::string m_cmd;
     std::vector<std::string> m_args;
   };
  }
}
#endif