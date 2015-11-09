/********************************************************************

  Filename:   TimeEvent

  Description:TimeEvent

  Version:  1.0
  Created:  14:8:2015   14:51
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __TimeEvent_H__
#define __TimeEvent_H__
#include <functional>
#include <memory>
namespace ShareSpace {
  namespace Utility {
    class Timer
    {
    public:
      typedef unsigned long long time_type;
      typedef std::function<void(int, int, time_type)> CallFun;
      explicit Timer(time_type now);
      explicit Timer();
      virtual ~Timer();
      int addEvent(time_type now, time_type interval, const CallFun& fun, int repeated = -1);
      int addEvent(time_type now, time_type delay, time_type interval, const CallFun& fun, int repeated = -1);
      bool setInterval(int id, time_type interval);
      bool cancelEvent(int id);
      void stop();
      void reset(time_type t);

      //按照间隔产生计时器事件
      void runInterval(time_type interval);
      //按照绝对时间产生计时器
      void run(time_type now);
    private:
      class TimerImpl;
      std::unique_ptr<TimerImpl> m_impl;
      Timer(const Timer&) = delete;
      Timer& operator = (const Timer&) = delete;
    };
  }
}
#endif