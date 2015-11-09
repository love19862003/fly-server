//
// server.hpp
// ~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_SERVER_HPP
#define HTTP_SERVER_HPP

#include <boost/asio.hpp>
#include <string>
#include "http/HttpConnection.hpp"
#include "http/ConnectionPool.hpp"
#include "http/RequestHandler.hpp"
#include "http/http.hpp"

namespace ShareSpace {
namespace Http {

/// The top-level class of the HTTP server.
 class  HttpService
{
public:
  typedef RequestHandler::requestCallBack requestCallBack;
  HttpService(const HttpService&) = delete;
  HttpService& operator=(const HttpService&) = delete;

  /// Construct the server to listen on the specified TCP address and port, and
  /// serve up files from the given directory.
  explicit HttpService(boost::asio::io_service& io, 
                       boost::asio::strand& strand);

  /// init http server
  bool init(const std::string& url,
            unsigned short port,
            const requestCallBack& callBack);
  /// close accept && stop all connection
  void setStop();

private:
  /// Perform an asynchronous accept operation.
  void doAccept();

  /// The io_service used to perform asynchronous operations.
  boost::asio::io_service& m_ioService;

  ///
  boost::asio::strand& m_readStrand;

  /// Acceptor used to listen for incoming connections.
  boost::asio::ip::tcp::acceptor m_acceptor;

  /// The connection manager which owns all live connections.
  ConnectionManager m_connectionMgr;

  /// The next socket to be accepted.
  boost::asio::ip::tcp::socket m_socket;

  /// The handler for all incoming requests.
  RequestHandler m_requestHandler;

  HttpConfig m_config;
};

} // namespace server
} // namespace http

#endif // HTTP_SERVER_HPP
