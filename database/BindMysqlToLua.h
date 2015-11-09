/********************************************************************

  Filename:   BindMysqlToLua

  Description:BindMysqlToLua

  Version:  1.0
  Created:  17:9:2015   10:02
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __FANNY_BindMysqlToLua_H__
#define __FANNY_BindMysqlToLua_H__
#define ENABLE_DATA_BASE_LUA
#ifdef ENABLE_DATA_BASE_LUA
#include "luatinker/lua_tinker.h"
#include "database/MysqlDefine.h"
#include <boost/any.hpp>
#include <map>
namespace ShareSpace {
  namespace DB {

    // mysql 接口导入到LUA接口
    class LuaMySqlResult
    {
    public:
      explicit LuaMySqlResult(sql::ResultSet* result) :m_result(result) {

      }
      virtual ~LuaMySqlResult() { }

      std::string getBlob(const char* name) {
        auto* io = m_result->getBlob(name);
        size_t pos = io->tellg();
        io->seekg(0, std::istream::end);
        size_t end = io->tellg();
        size_t len = end - pos;
        io->seekg(pos);
        char* buffer = (char*)malloc(len);
        io->read(buffer, len);
        std::string str(buffer,len);
        free(buffer);
        return str;
      }
      std::string getColBlob(unsigned int index) {
        auto* io = m_result->getBlob(index);
        size_t pos = io->tellg();
        io->seekg(0, std::istream::end);
        size_t end = io->tellg();
        size_t len = end - pos;
        io->seekg(pos);
        char* buffer = (char*)malloc(len);
        io->read(buffer, len);
        std::string str(buffer, len);
        free(buffer);
        return str;
      }
      bool getBoolean(const char* name) {
        return m_result->getBoolean(name);
      }
      bool getColBoolean(unsigned int index) {
        return m_result->getBoolean(index);
      }
      double getDouble(const char* name) {
        return m_result->getDouble(name);
      }
      double getColDouble(unsigned int index) {
        return m_result->getDouble(index);
      }
      int getInt(const char* name) {
        return m_result->getInt(name);
      }
      int getColInt(unsigned int index) {
        return m_result->getInt(index);
      }

      unsigned int getUInt(const char* name) {
        return m_result->getUInt(name);
      }
      unsigned int getColUInt(unsigned int index) {
        return m_result->getUInt(index);
      }
      long long getInt64(const char* name) {
        return m_result->getInt64(name);
      }
      long long getColInt64(unsigned int index) {
        return m_result->getInt64(index);
      }
      unsigned long long getUInt64(const char* name) {
        return m_result->getUInt64(name);
      }
      unsigned long long getColUInt64(unsigned int index) {
        return m_result->getUInt64(index);
      }
      std::string getString(const char* name) {
        return m_result->getString(name);
      }
      std::string getColString(unsigned int index) {
        return m_result->getString(index);
      }
      size_t getRow() {
        return m_result->getRow();
      }
      bool next() {
        return m_result->next();
      }

      bool last() {
        return m_result->last();
      }
      size_t rowsCount() {
        return m_result->rowsCount();
      }
      bool wasNull() {
        return m_result->wasNull();
      }

      static bool registerToLua(lua_State* L) {
        lua_tinker::class_add<LuaMySqlResult>(L, "ShareSpace::DB::LuaMySqlResult");
        lua_tinker::class_def<LuaMySqlResult>(L, "getBlob", &LuaMySqlResult::getBlob);
        lua_tinker::class_def<LuaMySqlResult>(L, "getBoolean", &LuaMySqlResult::getBoolean);
        lua_tinker::class_def<LuaMySqlResult>(L, "getDouble", &LuaMySqlResult::getDouble);
        lua_tinker::class_def<LuaMySqlResult>(L, "getInt", &LuaMySqlResult::getInt);
        lua_tinker::class_def<LuaMySqlResult>(L, "getUInt", &LuaMySqlResult::getUInt);
        lua_tinker::class_def<LuaMySqlResult>(L, "getInt64", &LuaMySqlResult::getInt64);
        lua_tinker::class_def<LuaMySqlResult>(L, "getUInt64", &LuaMySqlResult::getUInt64);
        lua_tinker::class_def<LuaMySqlResult>(L, "getString", &LuaMySqlResult::getString);

        lua_tinker::class_def<LuaMySqlResult>(L, "getColBlob", &LuaMySqlResult::getColBlob);
        lua_tinker::class_def<LuaMySqlResult>(L, "getColBoolean", &LuaMySqlResult::getColBoolean);
        lua_tinker::class_def<LuaMySqlResult>(L, "getColDouble", &LuaMySqlResult::getColDouble);
        lua_tinker::class_def<LuaMySqlResult>(L, "getColInt", &LuaMySqlResult::getColInt);
        lua_tinker::class_def<LuaMySqlResult>(L, "getColUInt", &LuaMySqlResult::getColUInt);
        lua_tinker::class_def<LuaMySqlResult>(L, "getColInt64", &LuaMySqlResult::getColInt64);
        lua_tinker::class_def<LuaMySqlResult>(L, "getColUInt64", &LuaMySqlResult::getColUInt64);
        lua_tinker::class_def<LuaMySqlResult>(L, "getColString", &LuaMySqlResult::getColString);


        lua_tinker::class_def<LuaMySqlResult>(L, "getRow", &LuaMySqlResult::getRow);
        lua_tinker::class_def<LuaMySqlResult>(L, "next", &LuaMySqlResult::next);
        lua_tinker::class_def<LuaMySqlResult>(L, "last", &LuaMySqlResult::last);
        lua_tinker::class_def<LuaMySqlResult>(L, "rowsCount", &LuaMySqlResult::rowsCount);
        lua_tinker::class_def<LuaMySqlResult>(L, "wasNull", &LuaMySqlResult::wasNull);
        return true;
      }
    protected:
    private:
      sql::ResultSet* m_result;
    };

    class LuaMyPSCall {
    public:
      LuaMyPSCall() {

      }
      virtual ~LuaMyPSCall() { }

      struct Blob {
        Blob(const std::string& v) :m_values(v) { }
        std::stringstream toStream() {
          std::stringstream ss(m_values);
          return std::move(ss);
        }
        std::string m_values;
      };
      void setBlob(unsigned int parameterIndex, std::string v) {
        m_values.insert(std::make_pair(parameterIndex, Blob(v)));
      }
      void setBoolean(unsigned int parameterIndex, bool value) {
        m_values.insert(std::make_pair(parameterIndex, value));
      }
   
      void setDouble(unsigned int parameterIndex, double d) {
        m_values.insert(std::make_pair(parameterIndex, d));
      }
      void setInt(unsigned int parameterIndex, int i) {
        m_values.insert(std::make_pair(parameterIndex, i));
      }
      void setUInt(unsigned int parameterIndex, unsigned int i) {
        m_values.insert(std::make_pair(parameterIndex, i));
      }
      void setInt64(unsigned int parameterIndex, long long i) {
        m_values.insert(std::make_pair(parameterIndex, i));
      }
      void setUInt64(unsigned int parameterIndex, unsigned long long i) {
        m_values.insert(std::make_pair(parameterIndex, i));
      }
      void setString(unsigned int parameterIndex,std::string str) {
        m_values.insert(std::make_pair(parameterIndex, str));
      }
      bool execute(sql::PreparedStatement* psmt) {
        for (auto& pair : m_values){
          auto& index = pair.first;
          auto& value = pair.second;
          auto& type = value.type();
          if(type == typeid(bool)) {
            psmt->setBoolean(index, boost::any_cast<bool>(value));
            continue;
          }
          if(type == typeid(double)) {
            psmt->setDouble(index, boost::any_cast<double>(value));
            continue;
          }
          if(type == typeid(int)) {
            psmt->setInt(index, boost::any_cast<int>(value));
            continue;
          }
          if(type == typeid(unsigned int)) {
            psmt->setUInt(index, boost::any_cast<unsigned int>(value));
            continue;
          }
          if(type == typeid(long long)) {
            psmt->setInt64(index, boost::any_cast<long long >(value));
            continue;
          }
          if(type == typeid(unsigned long long)) {
            psmt->setUInt64(index, boost::any_cast<unsigned long long>(value));
            continue;
          }
          if(type == typeid(std::string)) {
            psmt->setString(index, boost::any_cast<std::string>(value));
            continue;
          }
          if(type == typeid(Blob)) {
            auto ss = std::move(boost::any_cast<Blob>(value).toStream());
            psmt->setBlob(index, &ss);
            continue;
          }
        }
        return psmt->execute();
      }
      static bool registerToLua(lua_State* L) {
        lua_tinker::class_add<LuaMyPSCall>(L, "LuaMyPSCall");
        lua_tinker::class_con<LuaMyPSCall>(L, lua_tinker::constructor<LuaMyPSCall>);
        lua_tinker::class_def<LuaMyPSCall>(L, "setBlob", &LuaMyPSCall::setBlob);
        lua_tinker::class_def<LuaMyPSCall>(L, "setBoolean", &LuaMyPSCall::setBoolean);
        lua_tinker::class_def<LuaMyPSCall>(L, "setDouble", &LuaMyPSCall::setDouble);
        lua_tinker::class_def<LuaMyPSCall>(L, "setInt", &LuaMyPSCall::setInt);
        lua_tinker::class_def<LuaMyPSCall>(L, "setUInt", &LuaMyPSCall::setUInt);
        lua_tinker::class_def<LuaMyPSCall>(L, "setInt64", &LuaMyPSCall::setInt64);
        lua_tinker::class_def<LuaMyPSCall>(L, "setUInt64", &LuaMyPSCall::setUInt64);
        lua_tinker::class_def<LuaMyPSCall>(L, "setString", &LuaMyPSCall::setString);
        return true;
      }
    protected:
    private:
      std::map<unsigned int, boost::any> m_values;
    };

  }
}
#endif // _DEBUG
#endif