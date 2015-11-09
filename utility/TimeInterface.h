/********************************************************************

  Filename:   TimeInterface

  Description:TimeInterface

  Version:  1.0
  Created:  19:8:2015   11:40
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __TimeInterface_H__
#define __TimeInterface_H__
#include <string>
namespace ShareSpace {
  namespace Utility {
    //struct TimeInterface {

     inline int oneMinuteSeconds() { return 60; }
     inline int oneHourMinutes() { return 60; }
     inline int oneHourSeconds() { return oneHourMinutes() * oneMinuteSeconds(); }
     inline int oneDaySeconds() { return 24 * oneHourSeconds(); }
     inline int totalSecond(int day) { return day * oneDaySeconds(); }
     unsigned long long nowOfmilliseconds();
     inline time_t dayOfTheBegin(const std::string& zone);
     inline time_t now();
     bool isTheSameDay(time_t l, time_t r, const std::string& zone);
     int dayOfWeek(const std::string& zone);
     int currentTickOfDay(const std::string& zone);
     int tickToNextTimeDay(int secondsofday, const std::string& zone);
     int currentYear(const std::string& zone);
     int currentMonth(const std::string& zone);
     int dayOfYear(const std::string& zone);
     int dayOfMonth(const std::string& zone);
     time_t fromStr(const std::string& str);
     time_t fromIsoStr(const std::string& str);// "20121101T202020"
     time_t fromStrWithLocal(const std::string& str, const std::string& zone);
     std::string toStr(time_t t, const std::string& zone);
     std::string toIsoStr(time_t t, const std::string& zone);
     bool isTimeDateBetween(const std::string& begin, const std::string& end, const time_t& time, const std::string& timeZone);
     bool isTheSameMonth(time_t lhs, time_t rhs, const std::string& zone);
      
    //};
  }
}
#endif