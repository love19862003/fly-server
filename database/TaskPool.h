/********************************************************************

  Filename:   TaskPool

  Description:TaskPool

  Version:  1.0
  Created:  20:8:2015   14:17
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __TaskPool_H__
#define __TaskPool_H__
#include <list>
#include <mutex>
#include "database/Task.h"
namespace ShareSpace {
  namespace DB {
    class TaskPool {
    public:
      typedef unsigned int PoolTag;
      typedef Task::TaskPointer TaskPointer;
      typedef std::shared_ptr<TaskPool> PoolPointer;
      explicit TaskPool(const PoolTag& flag) :m_poolFlag(flag) {

      }
      bool addTask(TaskPointer t) {
        std::lock_guard<std::mutex> lock(m_getMutex);
        m_waitList.push_back(std::move(t));
        return true;
      }
      bool doneTask(TaskPointer t) {
        if(t && !t->hasCall() && !t->isError()) { return true; }
        std::lock_guard<std::mutex> lock(m_doneMutex);
        m_doneList.push_back(std::move(t));
        return true;
      }
      void poll() {
        std::list<TaskPointer> done;
        {
          std::lock_guard<std::mutex> lock(m_doneMutex);
          for (auto& v : m_doneList){ done.push_back(std::move(v));}
          m_doneList.clear();
        }
        for(auto& t : done) { 
          if (!t->isError()){ t->call();}
          t->notify();
        }
      }
      bool hasTask() {
        std::lock_guard<std::mutex> locker(m_getMutex);
        return !m_waitList.empty();
      }
      TaskPointer getTask() {
        std::lock_guard<std::mutex> locker(m_getMutex);
        if(m_waitList.empty()) {
          return  nullptr;
        } else {
          TaskPointer task = std::move(m_waitList.front());
          m_waitList.pop_front();
          return task;
        }
      }
      const PoolTag& poolTag() const { return m_poolFlag; }
    private:
      TaskPool(const TaskPool&) = delete;
      TaskPool operator = (const TaskPool&) = delete;
      std::mutex m_getMutex;
      std::mutex m_doneMutex;
      PoolTag m_poolFlag;
      std::list<TaskPointer> m_waitList;
      std::list<TaskPointer> m_doneList;
    };
  }
}

#endif