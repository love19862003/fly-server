/********************************************************************

  Filename:   RedisDefine

  Description:RedisDefine

  Version:  1.0
  Created:  21:8:2015   13:15
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __RedisDefine_H__
#define __RedisDefine_H__
#include <functional>
#include <memory>
#include <vector>
#include "log/MyLog.h"
namespace ShareSpace {
  namespace DB {
    class Task;
    struct Config;
    class RedisResultData {
    public:
      
      enum Type {
        RDT_TYPE_ERROR = 0,
        RDT_STRING = 1,
        RDT_INTEGER = 2,
        RDT_NIL = 3,
        RDT_STATUS = 4,
        RDT_ERROR = 5,
      };
      explicit RedisResultData(Type t) : m_type(t) { }
      explicit RedisResultData(int v) : m_type(RDT_INTEGER), m_value(v) { }
      explicit RedisResultData(Type t, const char* c, unsigned int len) : m_type(t), m_value(std::string(c, len)) {
        MYASSERT(t == RDT_STRING || t == RDT_ERROR || type() == RDT_STATUS, "redis result failed");
        if (t == RDT_ERROR){ LOGERROR(std::string(c, len)); }
      }
      virtual ~RedisResultData() {
        
      }
      inline const Type& type() const { return m_type; }
      inline bool isError() const { return RDT_ERROR == m_type; }
      inline bool isNil() const { return RDT_NIL == m_type; }
      inline bool isStr()const { return RDT_STRING == m_type; }
      inline bool isStatue() const { return RDT_STATUS == m_type; }
      inline bool isInteger() const { return RDT_INTEGER == m_type; }
      inline bool isInVaild() const { return RDT_TYPE_ERROR == m_type; }

      std::string str() const { 
        if(typeid(std::string) == m_value.type()) { return boost::any_cast<std::string>(m_value); }
        MYASSERT(false, "redis result failed");
        return "";
      }
      int integer() const {
        //MYASSERT(type() == RDT_INTEGER, "redis result failed");
        if(typeid(int) == m_value.type()) { return  boost::any_cast<int>(m_value); }
        MYASSERT(false, "redis result failed");
        return -1;
      }

      std::string debug() const{
        std::string str = "redis Type:" + debugType() + "\n";
        str += "value:" + debugValue() + "\n";
        return str;
      }

      RedisResultData(const RedisResultData& v) {
        m_type = v.m_type;
        m_value = v.m_value;
      }
      RedisResultData(RedisResultData&& v) {
        m_type = v.m_type;
        m_value = std::move(v.m_value);
      }
      RedisResultData& operator = (const RedisResultData& v) {
        m_type = v.m_type;
        m_value = v.m_value;
        return *this;
      }
    protected:
     std::string debugType() const {
        static const char* debugtype[RDT_ERROR + 1] = {"no define type error", "string","integer", "nil", "redis status", "redis error", };
        return debugtype[m_type];
      }
      const std::string debugValue() const {
        switch(m_type) {
        case RDT_INTEGER:
          return std::to_string(integer());
        case RDT_NIL:
          return "nil";
        case RDT_STRING:
        case RDT_STATUS:
        case RDT_ERROR:
          return str();
        default:
          return "error";
        }
      }
      
    protected:
      Type m_type;
      boost::any m_value;
    };
    class RedisResult {
    public:
      typedef std::unique_ptr<RedisResult> ResultPoniter;
      typedef std::vector<RedisResultData>  RedisResultList;
      explicit RedisResult(const RedisResultList& r) :m_result(r){ }
      explicit RedisResult(const RedisResultData& data) { m_result.push_back(data); }
      explicit RedisResult(RedisResultData&& data) { m_result.push_back(std::move(data)); }
      explicit RedisResult() { }
      virtual ~RedisResult() { }
      const std::string debug() const {
        std::string str;
        for (auto& v :m_result){
          str += v.debug();
        }
        return str;
      }
      const RedisResultList& list() const { return m_result; }
      const RedisResultList& list() { return m_result; }
      RedisResult& operator += (const RedisResult& r) {
        std::move(r.m_result.begin(), r.m_result.end(), std::back_inserter(m_result));
        return *this;
      }
      bool isError() const {
        if(!m_result.empty()) { return m_result[0].isError(); }
        return false;
      }
    protected:
      RedisResultList m_result;
    };

    typedef std::function<void(const RedisResult::ResultPoniter&)> RedisCall;
    std::unique_ptr<Task> createRedisTask(const std::string& str, const RedisCall& fun);
    std::unique_ptr<Task> createRedisTask(const std::string& str, const std::vector<std::string>& args, const RedisCall& fun);
    bool redisBlockTask(const Config& c, const std::string& sql, const RedisCall& fun);
    bool redisBlockTask(const Config& c, const std::string& sql, const std::vector<std::string>& args, const RedisCall& fun);
  }
}

#endif
