//
// server.cpp
// ~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include "http/HttpServer.hpp"
//#include <signal.h>
#include "log/MyLog.h"
#include <utility>
namespace ShareSpace {
namespace Http {

  HttpService::HttpService(boost::asio::io_service& io,
                           boost::asio::strand& strand)
  : m_ioService(io)
  , m_readStrand(strand)
  , m_acceptor(m_ioService)
  , m_connectionMgr()
  , m_socket(m_ioService)
  , m_requestHandler()
{
  
 
}
  bool HttpService::init(const std::string& url,
                         unsigned short port,
                         const requestCallBack& callBack){
   try
   {
     m_requestHandler.setCallBack(callBack);
     m_config.url = url;
     m_config.port = port;
     // Open the acceptor with the option to reuse the address (i.e. SO_REUSEADDR).
     boost::asio::ip::tcp::resolver resolver(m_ioService);
     boost::asio::ip::tcp::endpoint endpoint = *resolver.resolve({m_config.url, std::to_string(m_config.port)});
     m_acceptor.open(endpoint.protocol());
     m_acceptor.set_option(boost::asio::ip::tcp::acceptor::reuse_address(true));
     m_acceptor.bind(endpoint);
     m_acceptor.listen();

     doAccept();
#ifdef _DEBUG
     std::cout << "http server work in " << m_config.url << ":" << m_config.port << std::endl;
#endif
     LOGDEBUG("http server work in ", m_config.url, ":", m_config.port);
     return callBack != nullptr;
   }catch (...){
     LOGERROR("http server work in ", m_config.url, ":", m_config.port, "failed !");
     return false;
   }
}
void HttpService::setStop(){
  m_acceptor.close();
  m_connectionMgr.stop_all();
}
void HttpService::doAccept()
{
  auto accept = [this](boost::system::error_code error)->void{
    if (!m_acceptor.is_open()){
      return;
    }

    if (!error){
      auto connection = std::make_shared<Connection>(std::move(m_socket),m_readStrand ,m_connectionMgr, m_requestHandler);
      m_connectionMgr.start(connection);
      LOGDEBUG("handle http connection");
    }
    else{
      LOGERROR("handle http server error with code", error.message());
    }

    doAccept();
  };
  m_acceptor.async_accept(m_socket, accept);

}

} // namespace server
} // namespace http
