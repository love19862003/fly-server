/********************************************************************
	
	Filename: 	CACHE.CPP
	
	Description:CACHE

	Version:	1.0
	Created:	12:3:2014   9:56
	Revison:	none
	Compiler:	gcc vc
	
	Author:		(wufan), love19862003@163.com
	
	Organization:	
*********************************************************************/
#include "cache/MemoryCache.h"
#include <mutex>
#include <leveldb/db.h>
#include <leveldb/options.h>
#include <leveldb/write_batch.h>
#include "log/MyLog.h"
#ifdef _MSC_VER
#include <windows.h>
#endif
#include <map>

namespace CacheSpace{

  class cache_impl : public  Cache
  {
  public:
    explicit cache_impl(CacheType type, const std::string& name)
    :m_type(type)
    ,m_batch(new leveldb::WriteBatch){
      leveldb::Options option;
      option.create_if_missing = true;
      leveldb::DB* db;
      auto status = leveldb::DB::Open(option, name, &db);
      if (!status.ok()) {
        LOGERROR( "open cache failed with ", name, "reason ",  status.ToString().c_str());
        throw std::runtime_error("create cache failed...");
      }
      m_db.reset(db);

    }
    virtual ~cache_impl(){
      m_db.reset();
    }

  protected:
    bool doSave(const std::string& key, const std::string& value) override{
      auto status = m_db->Put(leveldb::WriteOptions(), key, value);
      if (!status.ok()) {
        LOGERROR("save cache failed key:", key, " value:", value," reason:",status.ToString().c_str());
        return false;
      }
      return true;
    }
    value_type doLoad(const std::string& key)const override{
      std::string value;
      auto status = m_db->Get(leveldb::ReadOptions(), key, &value);
      if (status.IsNotFound()) {
        return value_type();
      }
      else if (status.ok()) {
        return value_type(value);
      }
      LOGWARNING("load cache key:", key, " value:",value," reason:", status.ToString());
      return value_type();
    }
    bool doRemove(const std::string& key) override{
      auto status = m_db->Delete(leveldb::WriteOptions(), key);
      if (!status.ok()) {
        LOGWARNING("remove cache key:", key," reason:",status.ToString().c_str());
        return false;
      }
      return true;
    }
    CacheType getCacheType() const override{ return m_type; }
    void doBatchPut(const std::string& key, const std::string& value) override{
      switch (m_type)
      {
      case _cache_normal_:
        m_batch->Put(key, value);
        break;
      case _cache_single_:
      {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_batch->Put(key, value); 
      }break;
      case _cache_shared_:
        getWriteBatch()->Put(key, value);
        break;
      default:
        break;
      }
    }
    void doBatchDelete(const std::string& key) override{
      switch (m_type)
      {
      case _cache_normal_:
        m_batch->Delete(key);
        break;
      case _cache_single_:
      {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_batch->Delete(key);
      }break;
      case _cache_shared_:
        getWriteBatch()->Delete(key);
        break;
      default:
        break;
      }
    }
    bool doBatchExecute() override {
      auto ptr = m_batch;
      switch (m_type)
      {
      case _cache_normal_:
        break;
      case _cache_single_:
        m_batch = WriteBatch_pointer(new leveldb::WriteBatch);
        break;
      case _cache_shared_:
        ptr = getWriteBatch();
        break;
      default:
        break;
      }

      auto status = m_db->Write(leveldb::WriteOptions(), ptr.get());
      if (!status.ok()) {
        LOGWARNING("write batch failed ", status.ToString());
        ptr->Clear();
        return false;
      }
      ptr->Clear();
      return true;
    }
    
  protected:
    typedef std::shared_ptr<leveldb::WriteBatch>  WriteBatch_pointer;
    WriteBatch_pointer getWriteBatch(){
#ifndef _MSC_VER
      static thread_local   WriteBatch_pointer ptr(new leveldb::WriteBatch);
      return ptr;
#else
      static std::map<unsigned int, WriteBatch_pointer>  smap;
      unsigned int tid = GetCurrentThreadId();
      auto it = smap.find(tid);
      if (it != smap.end()){
        return it->second;
      }
      else{
        std::lock_guard<std::mutex> lock(m_mutex);
        WriteBatch_pointer ptr(new leveldb::WriteBatch);
        smap.insert(std::make_pair(tid, ptr));
        return ptr;
      }
#endif // _MSC_VER
    }
    CacheType m_type;
    WriteBatch_pointer m_batch;
    std::unique_ptr<leveldb::DB> m_db;
    std::mutex m_mutex;
  private:
  };

  Cache::pointer Cache::createCache(int type, const std::string& name) {
    assert( type >= Cache::_cache_normal_  && type <= Cache::_cache_shared_ );
    pointer p(new cache_impl(static_cast<Cache::CacheType>(type), name));
    return std::move(p);
  }
}