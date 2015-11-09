/********************************************************************

  Filename:   TaskThread

  Description:TaskThread

  Version:  1.0
  Created:  20:8:2015   14:32
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __TaskThread_H__
#define __TaskThread_H__
#include <thread>
#include <mutex>
#include <condition_variable>
#include "database/TaskPool.h"
namespace ShareSpace {
  namespace DB {

    struct Config {
      std::string m_password;
      std::string m_user;
      std::string m_url;
      std::string m_db_name;
       int m_thread;
       int m_index;
    };

    class TaskThread
    {
    public:
      typedef TaskPool::TaskPointer TaskPointer;
      typedef TaskPool::PoolPointer PoolPointer;
      typedef std::unique_ptr<TaskThread> ThreadPointer;
      enum State{
        _PAUSE_,
        _RUN_,
        _STOP_,
      };

      static ThreadPointer createMysqlThread(PoolPointer pool, const Config* c);
      static ThreadPointer createRedisThread(PoolPointer pool, const Config* c);

      bool join() {
        if(m_thread && m_thread->joinable()) {
          m_thread->join();
          return true;
        }
        return false;
      }
      State getState()const { 
        return m_state; 
      }
      bool  init() {
        if(!m_thread) {
          m_thread = std::move(std::unique_ptr<std::thread>(new std::thread(std::bind(&TaskThread::threadRun, this))));
          return true;
        }
        return false;
      }
      void setState(State s) {
        m_state = s; 
      }

      explicit TaskThread(PoolPointer pool, const Config*  c)
      : m_pool(pool)
      , m_state(_PAUSE_)
      , m_currentTask(nullptr)
      , m_config(c)
      , m_thread(nullptr){
       
      }

      virtual ~TaskThread() { if(m_thread) { m_thread.reset(); } }
      
      bool reset(const Config* c) {
        m_config = c;
        doReset();
        return true;
      }

      void notify() {
        m_condition.notify_all();
      }

    protected:
      void wait() {
        std::unique_lock<std::mutex> lock(m_mutex);
        m_condition.wait(lock);
      }
      void threadRun() {
        doInit();
        bool stop = false;
        while(true) {
           // exit before done task
           if(stop && !m_currentTask && !m_pool->hasTask()) { break; }

           switch(m_state) {
           case ShareSpace::DB::TaskThread::_PAUSE_:
#ifdef _DEBUG
             std::this_thread::sleep_for(std::chrono::milliseconds(1));
#else
             std::this_thread::yield();
#endif // _DEBUG
             break;
           case ShareSpace::DB::TaskThread::_STOP_:
             if(!stop) { stop = true; }
           case ShareSpace::DB::TaskThread::_RUN_:
             doRun();
             break;
           default:
             break;
           }
        } 
        doExit();
      }
    protected:
      virtual void doInit() = 0;
      virtual void doRun() = 0;
      virtual void doExit() = 0;
      virtual void doReset() = 0;
    private:
      TaskThread(const TaskThread&) = delete;
    protected:
      PoolPointer m_pool;
      State m_state;
      TaskPointer m_currentTask;
      std::mutex m_mutex;
      std::condition_variable m_condition;
      const Config*  m_config;
      std::unique_ptr<std::thread>  m_thread;
    };


  }
}
#endif