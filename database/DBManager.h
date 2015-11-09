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
      //�ж��̳߳��Ƿ�����
      bool isRun() {
        return TaskThread::_RUN_ == m_state;
      }
      //��������
      void start() {
        init();
        setState(TaskThread::_RUN_);
      }
      //��ͣ����
      void pause() {
        setState(TaskThread::_PAUSE_);
      }
      //�رշ���
      void stop() {
        setState(TaskThread::_STOP_);
        for(auto& s : m_threads) {
          s->join();
        }
      }

      //���ķ���ĵ�ַ ��Ҫ����redis�л�master
      bool reset(const Config& c) {
        m_config = c;
        for(auto& t : m_threads) {
          t->reset(&m_config);
        }
        return true;
      }
      //���̵߳��ûص�
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
      //�޸��߳�����״̬
      void setState(State s) {
        m_state = s;
        for(auto& t : m_threads) {
          t->setState(s);
        }
      }
      //��ʼ���߳�
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
      //���������
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
      //������񵽶�Ӧ�������
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