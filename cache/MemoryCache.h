/********************************************************************
	
	Filename: 	MEMORYCACHE.H
	
	Description:MEMORYCACHE

	Version:	1.0
	Created:	18:3:2014   17:55
	Revison:	none
	Compiler:	gcc vc
	
	Author:		(wufan), love19862003@163.com
	
	Organization:	
*********************************************************************/
#ifndef __MemoryCache_h__
#define __MemoryCache_h__

#include <string>
#include <memory>
#include <boost/optional.hpp>
#include <boost/noncopyable.hpp>

// #ifndef FINNY_CACHE_STATIC_LIB
// #ifdef WIN32
// #ifdef FINNY_CACHE_EXPORTS
// #define FINNY_CACHE_API __declspec(dllexport)
// #else
// #define FINNY_CACHE_API __declspec(dllimport)
// 
// #endif
// #else
// #define FINNY_CACHE_API
// #endif
// #else
// #define FINNY_CACHE_API
// #endif

namespace CacheSpace{

  class /*FINNY_CACHE_API*/ Cache : public boost::noncopyable
  {
  public:
    typedef std::unique_ptr<Cache> pointer;
    typedef boost::optional<std::string> value_type;
    //typedef std::string value_type;

    enum CacheType{
      _cache_normal_, // 非线程安全
      _cache_single_, // 线程安全，所有线程共享一个写
      _cache_shared_, // 线程安全，每个线程有自己单独写
    };

    static Cache::pointer createCache(int type, const std::string& name);


    Cache(){ ; }
    virtual ~Cache(){ ; }

    bool save(const std::string& key, const std::string& value) {
      return doSave(key, value);
    }
    value_type load(const std::string& key) const {
      return doLoad(key);
    }
    bool remove(const std::string& key) {
      return doRemove(key);
    }
    CacheType cacheType() const {
      return getCacheType();
    }
    void batchPut(const std::string& key, const std::string& value) {
      doBatchPut(key, value);
    }
    void batchDelete(const std::string& key) {
      doBatchDelete(key);
    }
    bool batchExecute() {
      return doBatchExecute();
    }
   
  protected:
    virtual bool doSave(const std::string& key, const std::string& value) = 0;
    virtual value_type doLoad(const std::string& key) const = 0;
    virtual bool doRemove(const std::string& key) = 0;
    virtual CacheType getCacheType() const = 0;
    virtual void doBatchPut(const std::string& key, const std::string& value) = 0;
    virtual void doBatchDelete(const std::string& key) = 0;
    virtual bool doBatchExecute() = 0;
  private:
  };

  
}

#endif // __MemoryCache_h__
