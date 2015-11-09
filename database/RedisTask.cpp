/********************************************************************

  Filename:   RedisTask

  Description:RedisTask

  Version:  1.0
  Created:  21:8:2015   13:57
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
  *********************************************************************/
#include "database/Task.h"
#include "database/RedisDefine.h"
namespace ShareSpace {
  namespace DB {
    class RedisTask : public Task
    {
    public:
      explicit RedisTask(const std::string& cmd, const RedisCall& call) 
        : Task(cmd, Task::_REDIS_)
        , m_call(call)
        , m_result(nullptr){

      }
      explicit RedisTask(const std::string& cmd, const std::vector<std::string>& args, const RedisCall& call)
        : Task(cmd, Task::_REDIS_ARGS)
        , m_call(call)
        , m_result(nullptr) {
        m_args = args;
      }
      virtual ~RedisTask() {
        if(m_result) { m_result.reset(); }
      }
    protected:
      virtual void doAction(const boost::any& any) override {
        if(any.empty()) { return; }
        m_result.reset(boost::any_cast<RedisResult*>(any));
      }
      virtual const std::vector<std::string>* doArgs() const override { 
        return &m_args;
      }
      virtual void doNotify() override { }
      virtual void doBindThread(TaskThread* /*t*/)  override{ }
      virtual void doCall() override {
        // has some error in result
        if (m_result && m_result->isError()){
          LOGERROR("handle redis error with command:", command(), " with error:", m_result->debug());
          return;
        }
        if(m_call) { m_call(m_result); }
      }
      virtual bool hasCallBack() const override {
        return m_call != nullptr;
      }
    private:
      RedisCall m_call;
      RedisResult::ResultPoniter m_result;
      std::vector<std::string> m_args;
    };

    std::unique_ptr<Task> createRedisTask(const std::string& str, const RedisCall& fun) {
      std::unique_ptr<Task> t(new RedisTask(str, fun));
      return std::move(t);
    }
    std::unique_ptr<Task> createRedisTask(const std::string& str, const std::vector<std::string>& args, const RedisCall& fun) {
      std::unique_ptr<Task> t(new RedisTask(str, args, fun));
      return std::move(t);
    }

  }
}