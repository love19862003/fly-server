/********************************************************************

  Filename:   TimerImpl

  Description:TimerImpl

  Version:  1.0
  Created:  20:8:2015   9:34
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include <chrono>
#include <vector>
#include <functional>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/indexed_by.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/member.hpp>
#include "utility/TimeEvent.h"
#include "log/MyLog.h"
namespace ShareSpace {
  namespace Utility {
    class Timer::TimerImpl {
    private:
      TimerImpl(const TimerImpl&) = delete;
      TimerImpl operator = (const TimerImpl&) = delete;
      TimerImpl operator = (TimerImpl&&) = delete;
    public:
      typedef Timer::time_type time_type;
      typedef Timer::CallFun CallFun;

      explicit TimerImpl() { }
      explicit TimerImpl(time_type now) { reset(now); }
      ~TimerImpl() { stop(); }


      int addEvent(time_type now, time_type delay, time_type interval, const CallFun& fun, int repeated) {
        Event ev(++m_nextId, now + delay + interval, interval, fun, repeated);
        m_event.insert(ev);
        return ev._id;
      }
      int addEvent(time_type delay, time_type interval, const CallFun& fun, int repeated) {
        return addEvent(m_last, delay, interval, fun, repeated);
      }
      bool setInterval(int id, time_type interval) {
        IdContainer& contianer = m_event.get<_ID_>();
        auto it = contianer.find(id);
        if(it != contianer.end()) {
          Event ev(*it);
          ev._expiration = ev._expiration + interval - ev._interval;
          ev._interval = ev._interval;
          contianer.erase(id);
          m_event.insert(ev);
          return true;
        }
        return false;
      }
      bool cancelEvent(int id) {
        IdContainer& contianer = m_event.get<_ID_>();
        return contianer.erase(id) > 0;
      }
      void runInterval(time_type interval) {
        //MYASSERT(m_run, "the timer is not run");
        return run(m_last + interval);
      }
      void run(time_type now) {
        //MYASSERT(m_run, "the timer is not run");
        m_last = now;
        expirtionContainer& container = m_event.get<_EXPIRATION_>();
        time_type nextExpirtion;
        do {
          std::vector<Event> v;
          auto end = container.upper_bound(m_last);
          std::move(container.begin(), end, std::back_inserter(v));
          container.erase(container.begin(), end);
          std::for_each(v.begin(),
                        v.end(),
                        [this] (Event& ev) {
            ev._fun(ev._id, ev._repeated, ev._interval);
            if(ev._repeated < 0 || --ev._repeated > 0) {
              ev._expiration = m_last + ev._interval;
              m_event.insert(ev);
            }
          });
          nextExpirtion = nextExpiration();
        } while(nextExpirtion < m_last);
      }
      void reset(time_type t) {
        m_last = t;
        m_run = true;
      }
      void stop() {
        m_event.clear();
        m_run = false;
      }
    private:
      time_type nextExpiration() const {
        return (m_event.empty() ? std::numeric_limits<time_type>::max() :
                m_event.get<_EXPIRATION_>().begin()->_expiration);
      }
      struct Event {
        explicit Event(int id, time_type expiration, time_type interval, const CallFun& fun, int repeated)
          :_id(id)
          , _expiration(expiration)
          , _interval(interval)
          , _fun(fun)
          , _repeated(repeated) {

        }
        explicit Event(const Event& ev)
          :_id(ev._id)
          , _expiration(ev._expiration)
          , _interval(ev._interval)
          , _fun(ev._fun)
          , _repeated(ev._repeated) {

        }
        
        int _id;
        time_type _expiration;
        time_type _interval;
        CallFun _fun;
        int _repeated;
      };
      enum Tag {
        _ID_ = 0,
        _EXPIRATION_ = 1,
      };

      typedef boost::multi_index::member < Event, int, &Event::_id > EventIdType;
      typedef boost::multi_index::ordered_unique < EventIdType > EventIdIndexType;
      typedef boost::multi_index::member < Event, time_type, &Event::_expiration > EventExpirtionType;
      typedef boost::multi_index::ordered_non_unique<EventExpirtionType> EventExpirtionIndexType;
      typedef boost::multi_index::indexed_by<EventIdIndexType, EventExpirtionIndexType> EventIndexType;
      typedef boost::multi_index_container< Event, EventIndexType> EventContainer;
      typedef EventContainer::nth_index<_ID_>::type IdContainer;
      typedef EventContainer::nth_index<_EXPIRATION_>::type expirtionContainer;
    private:
      EventContainer  m_event;
      int m_nextId = 0;
      time_type m_last = 0;
      bool m_run = false;
    };

    Timer::Timer() :m_impl(new TimerImpl()) {

    }
    Timer::Timer(time_type now) :m_impl(new TimerImpl(now)) {

    }
    Timer::~Timer() { 
      m_impl.reset(); 
    }
    int Timer::addEvent(time_type now, time_type delay, time_type interval, const CallFun& fun, int repeated /* = -1 */) {
      return  m_impl->addEvent(now, delay, interval, fun, repeated);
    }
    int Timer::addEvent(time_type now, time_type interval, const CallFun& fun, int repeated /* = -1 */) {
      return m_impl->addEvent(now, interval, fun, repeated);
    }

    bool Timer::setInterval(int id, time_type interval) {
      return m_impl->setInterval(id, interval);
    }

    bool Timer::cancelEvent(int id) {
      return m_impl->cancelEvent(id);
    }

    void Timer::runInterval(time_type interval) {
      return m_impl->runInterval(interval);
    }
    void Timer::run(time_type now) {
      return m_impl->run(now);
    }

    void Timer::stop() {
      return m_impl->stop();
    }
    void Timer::reset(time_type t) {
      return m_impl->reset(t);
    }
  }
}