/********************************************************************

  Filename:   Task

  Description:Task

  Version:  1.0
  Created:  20:8:2015   13:55
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __Task_H__
#define __Task_H__
#include <string>
#include <memory>
#include <vector>
#include <boost/any.hpp>
namespace ShareSpace {
  namespace DB {
    class TaskThread;
    class Task
    {
    public:
      typedef  int ErrorType;
      enum TaskState{
        _state_waite_ ,
        _state_done_,
        _state_error_,
      };
      enum TaskType {
        _MYSQL_STATEMENT_,
        _MYSQL_PREPARE_STATEMENT_,
        _REDIS_,
        _REDIS_ARGS,
      };

      enum ErrorCode {
        NO_ERROR_CODE = 0,
        CMD_ERROR = -1,
      };

      typedef std::unique_ptr<Task> TaskPointer;
    public:
      explicit Task(const std::string& cmd, const TaskType& type) 
        : m_command(cmd)
        , m_state(_state_waite_)
        , m_type(type){
      }
      virtual ~Task() { ; }

      class Error : public std::runtime_error {
      public:
        Error(const std::string& error_desc) : runtime_error(error_desc) { }
      };

      const TaskType& taskType() const { return m_type; }
      const TaskState& taskState() const { return m_state; }

      void action(const boost::any& any) {
        m_state = _state_done_;
        doAction(any);
      }
      void bindThread(TaskThread* t) {
        doBindThread(t);
      }
      void call() {
        if (m_state == _state_done_){
          doCall();
        }
      }
      void error(ErrorType code) {
        m_state = _state_error_;
        m_error = code;
      }
      const ErrorType& errorCode() const {
        return m_error;
      }
      bool isError() const {
        return NO_ERROR_CODE != m_error ;
      }
      bool hasCall()const {
        return hasCallBack();
      }
      const std::string& command() const { return m_command; }
      const std::vector<std::string>* args() const { return doArgs(); }
      void notify() {
        doNotify();
      }
    protected:
      virtual void doAction(const boost::any& any) = 0;
      virtual void doCall() = 0;
      virtual bool hasCallBack() const = 0;
      virtual void doNotify() = 0;
      virtual void doBindThread(TaskThread* t) = 0;
      virtual const std::vector<std::string>* doArgs() const = 0;
    private:
      Task(Task const&) = delete;
      Task& operator = (const Task&) = delete;
    private:
      std::string m_command;
      TaskState m_state;
      TaskType m_type;
      ErrorType m_error = NO_ERROR_CODE;
    };

  }
}
#endif