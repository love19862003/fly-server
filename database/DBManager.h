/********************************************************************

  Filename:   DataBaseManager

  Description:DataBaseManager

  Version:  1.0
  Created:  20:8:2015   16:40
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __DBManager_H__
#define __DBManager_H__
#include <list>
#include <memory>
#include <map>
#include "database/TaskPool.h"
#include "database/TaskThread.h"
namespace ShareSpace {
  namespace DB {
    class DBManager 
    {
    public:
      explicit DBManager(const Config& c) :m_config(c), m_state(TaskThread::_PAUSE_) { }
      virtual ~DBManager() { if(m_state != TaskThread::_STOP_) { stop(); }; }
      //判断线程池是否启动
      bool isRun() {
        return TaskThread::_RUN_ == m_state;
      }
      //启动服务
      void start() {
        init();
        setState(TaskThread::_RUN_);
      }
      //暂停服务
      void pause() {
        setState(TaskThread::_PAUSE_);
      }
      //关闭服务
      void stop() {
        setState(TaskThread::_STOP_);
        for(auto& s : m_threads) {
          s->join();
        }
      }

      //更改服务的地址 主要用于redis切换master
      bool reset(const Config& c) {
        m_config = c;
        for(auto& t : m_threads) {
          t->reset(&m_config);
        }
        return true;
      }
      //主线程调用回调
      void poll() {
        for(auto& pair : m_pools) {
          auto& pool = pair.second;
          if(pool) { pool->poll(); }
        }
      }
   
    protected:
      typedef TaskThread::ThreadPointer ThreadPointer;
      typedef TaskPool::PoolPointer PoolPointer;
      typedef TaskPool::TaskPointer TaskPointer;
      typedef TaskPool::PoolTag  PoolTag;
      typedef TaskThread::State State;
      //static const  PoolTag _pool_normal_ = 0;
      enum MyEnum : unsigned int
      { 
        _pool_normal_ = 0,
      };
      //修改线程运行状态
      void setState(State s) {
        m_state = s;
        for(auto& t : m_threads) {
          t->setState(s);
        }
      }
      //初始化线程
      void init() {
        // init normal pool
        auto pool = PoolPointer(new TaskPool(_pool_normal_));
        m_pools.insert(std::make_pair(pool->poolTag(), pool));
        for(int i = 0; i < m_config.m_thread; ++i) {
          auto t = createThread(pool);
          t->init();
          m_threads.push_back(std::move(t));
        }
      }
      //分配任务池
      PoolPointer getPool(PoolTag f) {
        auto it = m_pools.find(f);
        if(it != m_pools.end()) {
          return it->second;
        }
        auto pool = PoolPointer(new TaskPool(f));
        m_pools.insert(std::make_pair(f, pool));
        auto t = createThread(pool);
        t->init();
        t->setState(m_state);
        m_threads.push_back(std::move(t));
        return pool;
      }
      //添加任务到对应的任务池
      bool pushTask(TaskPointer t, const PoolTag& flag) {
        auto pool = getPool(flag);
        if(pool) { pool->addTask(std::move(t)); }
        return nullptr != pool;
      }
    protected:
      virtual ThreadPointer createThread(const PoolPointer& pool) = 0;
    protected:
      std::list<ThreadPointer> m_threads;
      std::map<PoolTag, PoolPointer> m_pools;
      mutable Config m_config;
      State m_state;
    private:
      DBManager(const DBManager&) = delete;
    };


  }
}
#endif