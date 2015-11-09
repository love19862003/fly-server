/********************************************************************

  Filename:   TemplateServer

  Description:TemplateServer

  Version:  1.0
  Created:  28:8:2015   9:53
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __TemplateServer_H__
#define __TemplateServer_H__
#include <string>
#include <memory>
#define TemplateServerCreate(__CLASS_NAME__) namespace Server {\
  struct ServerOption; \
  class __CLASS_NAME__ { \
  public:\
         explicit  __CLASS_NAME__(ServerOption& option, const std::string& file);\
         virtual ~__CLASS_NAME__();\
         bool start(); \
         void run(unsigned int ); \
         void stop();\
         bool command(const std::string& cmd);\
   private: \
      __CLASS_NAME__(const __CLASS_NAME__&) = delete;\
      __CLASS_NAME__& operator = (const __CLASS_NAME__&) = delete;\
    class Impl;\
    std::unique_ptr<Impl> m_Impl;\
  };\
}

#define TemplateServerCreateInterface(__CLASS_NAME__) namespace Server{\
   __CLASS_NAME__::__CLASS_NAME__(ServerOption& option, const std::string& file):m_Impl(new Impl(option, file)){\
    }\
   __CLASS_NAME__::~__CLASS_NAME__(){\
    m_Impl.reset();\
    }\
   bool __CLASS_NAME__::start(){\
    return m_Impl->start();\
   }\
   void  __CLASS_NAME__::run(unsigned int diff){\
    return m_Impl->run(diff);\
   }\
   void  __CLASS_NAME__::stop(){\
    return m_Impl->stop();\
   }\
   bool __CLASS_NAME__::command(const std::string& cmd){\
     return m_Impl->command(cmd);\
   }\
}
#endif