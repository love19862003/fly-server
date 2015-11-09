/********************************************************************

  Filename:   NetUV

  Description:NetUV

  Version:  1.0
  Created:  31:3:2015   19:32
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __NetUV_H__
#define __NetUV_H__
#include <functional>
#ifdef WIN32
#include "net/libuv/include/uv.h"
#include "net/libuv/src/queue.h"
#else
#include "uv.h"
#endif // WIN32

#include <boost/noncopyable.hpp>

namespace ShareSpace {
  namespace NetSpace {

    class NetSession;
    class NetThread;
    typedef std::shared_ptr<NetSession> SessionPtr;
    typedef std::shared_ptr<NetThread> ThreadPtr;
    typedef std::weak_ptr<NetThread> WeakThreadPtr;

    // auto lock
    class NetGuardLock : public boost::noncopyable {
    public:
      explicit NetGuardLock(uv_mutex_t* t) :m_mutex(t) {
        uv_mutex_lock(m_mutex);
      }
      ~NetGuardLock() {
        uv_mutex_unlock(m_mutex);
      }
    protected:
    private:
      uv_mutex_t* m_mutex;
    };
  }
}
#endif