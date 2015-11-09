/********************************************************************

  Filename:   TimeInterface

  Description:TimeInterface

  Version:  1.0
  Created:  19:8:2015   11:41
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "utility/TimeInterface.h"
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/date_time/gregorian/gregorian_types.hpp>
#include <boost/date_time/local_time/local_time.hpp>
#include <ctime>
#include <chrono>
#include <map>
namespace ShareSpace {
  namespace Utility {
    

    const boost::local_time::time_zone_ptr& getTimeZone(const std::string& timeZone) {
      static std::map<std::string, boost::local_time::time_zone_ptr> timeZones;
      auto& zone = timeZones[timeZone];
      if(!zone) { 
        zone.reset(new boost::local_time::posix_time_zone(timeZone));
        /*std::cout << zone->to_posix_string() << " " << zone->base_utc_offset() << std::endl;*/
      }
      return zone;
    }
    static boost::posix_time::ptime toLocalDateTime(time_t t,
                                                    const boost::local_time::time_zone_ptr& timeZone) {
      return boost::local_time::local_date_time(boost::posix_time::from_time_t(t), timeZone).local_time();
    }
    static time_t to(const boost::posix_time::ptime& p) {
      if(p.is_not_a_date_time()) return 0;
      if(p.is_pos_infinity()) return (time_t)-1;
      boost::posix_time::ptime start(boost::gregorian::date(1970, 1, 1));
      boost::posix_time::time_duration du = p - start;
      return du.total_seconds();
    }
    static time_t to(const std::chrono::system_clock::time_point& tp) {
      return std::chrono::system_clock::to_time_t(tp);
    }

    // YYYYMMDD
    static time_t make_time_t(const std::string& str) {
      return to(boost::posix_time::ptime( boost::gregorian::date(boost::gregorian::from_undelimited_string(str))));
    }


    time_t dayOfTheBegin(const std::string& zone) {
      boost::posix_time::ptime pt(boost::gregorian::day_clock::universal_day());
      return  to(pt - getTimeZone(zone)->base_utc_offset());
    }
    unsigned long long nowOfmilliseconds() {
      boost::posix_time::ptime p(boost::posix_time::microsec_clock::universal_time());
      boost::posix_time::ptime start(boost::gregorian::date(1970, 1, 1));
      boost::posix_time::time_duration du = p - start;
      return du.total_milliseconds();
    }
    time_t now() {
      return to(boost::posix_time::ptime(boost::posix_time::second_clock::universal_time()));
    }
    bool isTheSameDay(time_t l, time_t r, const std::string& zone) {
      auto& zp = getTimeZone(zone);
      auto lhsDate = toLocalDateTime(l, zp).date();
      auto rhsDate = toLocalDateTime(r, zp).date();
      return (lhsDate.day_of_year() == rhsDate.day_of_year()) &&
        (lhsDate.year() == rhsDate.year());
    }
    int dayOfWeek(const std::string& zone) {
      return toLocalDateTime(now(), getTimeZone(zone)).date().day_of_week();
    }
   
    int currentTickOfDay(const std::string& zone) {
      return  now() - dayOfTheBegin(zone);
    }
    int tickToNextTimeDay(int secondsofday, const std::string& zone) {
      assert(secondsofday >= 0);
      assert(secondsofday < oneDaySeconds());
      int64_t ntick = secondsofday - currentTickOfDay(zone);
      if(ntick > 0) return ntick;
      return ntick + oneDaySeconds();
    }
  
    int currentYear(const std::string& zone) {
      return toLocalDateTime(now(), getTimeZone(zone)).date().year();
    }

    int currentMonth(const std::string& zone) {
      return toLocalDateTime(now(), getTimeZone(zone)).date().month();
    }

    int dayOfYear(const std::string& zone) { 
      return toLocalDateTime(now(), getTimeZone(zone)).date().day_of_year();
    }
    int dayOfMonth(const std::string& zone) {
      return toLocalDateTime(now(), getTimeZone(zone)).date().day();
    }

    // YYYYMMDD
    time_t fromStr(const std::string& str) {
      return make_time_t(str);
    }

    //time_str example:("20121101T202020")
    time_t fromIsoStr(const std::string& str) {
      return to(boost::posix_time::from_iso_string(str));
    }

    time_t fromStrWithLocal(const std::string& str, const std::string& zone) {
      auto ptime = boost::posix_time::time_from_string(str);
      auto zp = getTimeZone(zone);
      return  to(ptime - zp->base_utc_offset());
    }

    std::string toStr(time_t t, const std::string& zone) {
      return boost::posix_time::to_iso_extended_string(toLocalDateTime(t, getTimeZone(zone)));
    }
    std::string toIsoStr(time_t t, const std::string& zone) {
      return boost::posix_time::to_iso_string(toLocalDateTime(t, getTimeZone(zone)));
    }
    // YYYYMMDD
    bool isTimeDateBetween(const std::string& begin, const std::string& end,  const time_t& time, const std::string& timeZone) {
      auto zp = getTimeZone(timeZone);
      auto now = to(toLocalDateTime(time, zp));
      return  make_time_t(begin) <= now && now <= make_time_t(end);
    }
    bool isTheSameMonth(time_t lhs, time_t rhs, const std::string& zone) {
      auto& zp = getTimeZone(zone);
      auto lhsDate = toLocalDateTime(lhs, zp).date();
      auto rhsDate = toLocalDateTime(rhs, zp).date();
      return (lhsDate.month() == rhsDate.month() &&  lhsDate.year() == rhsDate.year());
    }

  }
}