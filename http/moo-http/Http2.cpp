/********************************************************************

  Filename:   GKHttp

  Description:GKHttp

  Version:  1.0
  Created:  6:9:2015   14:59
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "Http2.h"
#include "mongoose.h"
#include <iostream>
#include <condition_variable>
#include <mutex>
#include <string>
#include <sstream>
#include <list>

namespace HttpSpace{

    static void* mgThreadRun(void* server);
    bool url_decode(const std::string& in, std::string& out)
    {
      out.clear();
      out.reserve(in.size());
      for (std::size_t i = 0; i < in.size(); ++i)
      {
        if (in[i] == '%')
        {
          if (i + 3 <= in.size())
          {
            int value = 0;
            std::string t = in.substr(i + 1, 2);
            std::istringstream is(t.c_str(), t.length());
            if (is >> std::hex >> value)
            {
              out += static_cast<char>(value);
              i += 2;
            }
            else
            {
              return false;
            }
          }
          else
          {
            return false;
          }
        }
        else if (in[i] == '+')
        {
          out += ' ';
        }
        else
        {
          out += in[i];
        }
      }
      return true;
    }
    struct ServerData {
      explicit ServerData():m_server(nullptr),m_done(false),m_conn(nullptr){
        reset(nullptr);
      }
      std::condition_variable m_cond;
      struct mg_server* m_server;
      struct mg_connection * m_conn;
      std::string m_result;
      std::mutex m_mutex;
      bool m_done;

      void reset(struct mg_connection * conn){
        m_conn = conn;
        m_result.clear();
        m_done = false;
      }
      
      void doTask(const Http2::HttpCallFunType& fun) {
        std::unique_lock <std::mutex> lock(m_mutex);
        if (fun && m_conn){
          std::string cmd;
          if(m_conn->query_string && url_decode(std::string(m_conn->query_string), cmd)) {
            std::cout << cmd<< std::endl;
          }
          m_result = fun(std::string(m_conn->uri), cmd);
          m_done = true;
          m_cond.notify_all();
        }
      }
    };

    class Http2::Impl 
    {
    public:
        
        explicit Impl(const HttpConfig& c) : m_config(c){

        }
        ~Impl(){ shutDown();}

        static int ev_handler(struct mg_connection * conn, enum mg_event ev){
            if (ev == MG_AUTH){return MG_TRUE;}
          
            if (ev == MG_REQUEST){
              if (conn){
                ServerData* t = static_cast<ServerData*>(conn->server_param);
                if (t){
                  std::unique_lock<std::mutex>lock(t->m_mutex);
                  t->reset(conn);
                  t->m_cond.wait_for(lock, std::chrono::seconds(5));
                  if (t->m_done){
                    mg_send_data(conn, t->m_result.c_str(),t->m_result.length()) ;
                    t->reset(nullptr);
                    return MG_TRUE ;
                  }
                }
              }
              
              mg_send_status(conn, 403);
              return MG_FALSE;
            }else{
              return MG_FALSE;
            }
             
        }

        
        bool init(HttpCallFunType call) {
            m_fun = call;
            for (unsigned int i = 0; i <  m_config._thread; ++i){
                std::unique_ptr<ServerData> data(new ServerData);
                data->m_server = mg_create_server(data.get(), Impl::ev_handler);
                if (0 == i){
                  mg_set_option(data->m_server, "listening_port", std::to_string(m_config._port).c_str());
                }
                else{
                  mg_copy_listeners(data->m_server, m_server.front()->m_server);
                }
                mg_start_thread(mgThreadRun, data.get());
                m_server.push_back(std::move(data));
            }
            return m_fun !=  nullptr;
        }
       
        
        void poll(float ){
          for (auto& s : m_server){
            s->doTask(m_fun);
          }
        }
        void shutDown(){
         for (auto& s : m_server){
           mg_destroy_server(&s->m_server);
         }
         m_server.clear();
        }

    protected:
    private:
        const HttpConfig m_config;
        HttpCallFunType m_fun;
        std::list<std::unique_ptr<ServerData>> m_server;
    };

    static void* mgThreadRun(void* server){
      ServerData* s = (ServerData*)server ;
      for(;;){ mg_poll_server(s->m_server, 1000);}
      return nullptr;
    }

    Http2::Http2(const HttpConfig& c) : m_impl(new Impl(c)){

    }
    Http2::~Http2(){
      m_impl.reset();
    }
    bool Http2::init(HttpCallFunType call) {
        return m_impl->init(call);
    }
    
    void Http2::poll(float s){
      return m_impl->poll(s);
    }
    void Http2::shutDown(){
        return m_impl->shutDown();
    }

}