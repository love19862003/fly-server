/********************************************************************

  Filename:   MyLog

  Description:MyLog

  Version:  1.0
  Created:  30:3:2015   13:14
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "log/MyLog.h"
#include <log4cplus/log4cplus.h>
using namespace log4cplus;
namespace ShareSpace {
  namespace MyLog {
    enum  {
      LOG_FATAL = 0,
      LOG_ERROR = 1,
      LOG_WARNING = 2,
      LOG_INFO = 3,
      LOG_DEBUG = 4,
      LOG_MAX,
    };

    const char* LogFileName[LOG_MAX] = { "FATAL", "ERROR", "WARN", "INFO", "DEBUG" };

   
    bool Log::log_init(const std::string& file) {
      log4cplus::initialize();
      PropertyConfigurator::doConfigure(LOG4CPLUS_TEXT(file.c_str()));
      return true;
    }
    
    void Log::log_release() {
      Logger::shutdown();
    }

    void Log::log_error(const std::string& s) {
      auto log = Logger::getInstance(LogFileName[LOG_ERROR]);
      LOG4CPLUS_ERROR_STR(log, s);
    }
    void Log::log_debug(const std::string& s) {
      auto log = Logger::getInstance(LogFileName[LOG_DEBUG]);
      LOG4CPLUS_DEBUG_STR(log, s);
    }
    void Log::log_warning(const std::string& s) {
      auto log = Logger::getInstance(LogFileName[LOG_WARNING]);
      LOG4CPLUS_WARN_STR(log, s);
    }
    void Log::log_info(const std::string& s) {
      auto log = Logger::getInstance(LogFileName[LOG_INFO]);
      LOG4CPLUS_INFO_STR(log, s);
    }
    void Log::log_fatal(const std::string& s) {
      auto log = Logger::getInstance(LogFileName[LOG_FATAL]);
      LOG4CPLUS_FATAL_STR(log, s);
    }
  }
}