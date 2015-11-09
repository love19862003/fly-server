//
// connection.hpp
// ~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_CONNECTION_HPP
#define HTTP_CONNECTION_HPP

#include <array>
#include <memory>
#include <boost/asio.hpp>
#include "http/HttpReply.hpp"
#include "http/HttpRequest.hpp"
#include "http/RequestHandler.hpp"
#include "http/RequestParser.hpp"

namespace ShareSpace {
namespace Http {

class ConnectionManager;

/// Represents a single connection from a client.
class Connection
  : public std::enable_shared_from_this<Connection>
{
public:
  Connection(const Connection&) = delete;
  Connection& operator=(const Connection&) = delete;

  /// Construct a connection with the given socket.
  explicit Connection(boost::asio::ip::tcp::socket socket,
                      boost::asio::strand& strand,
                      ConnectionManager& manager,
                      RequestHandler& handler);

  /// Start the first asynchronous operation for the connection.
  void start();

  /// Stop all asynchronous operations associated with the connection.
  void stop();

private:
  /// Perform an asynchronous read operation.
  void do_read();

  /// Perform an asynchronous write operation.
  void do_write();

  /// Socket for the connection.
  boost::asio::ip::tcp::socket m_socket;

  // strand
  boost::asio::strand& m_strand;

  /// The manager for this connection.
  ConnectionManager& m_connectionMgr;

  /// The handler used to process the incoming request.
  RequestHandler& m_requestHandler;

  /// Buffer for incoming data.
  std::array<char, httpBufferSize()> m_buffer;

  /// The incoming request.
  request m_request;

  /// The parser for the incoming request.
  RequestParser m_requestParser;

  /// The reply to be sent back to the client.
  HttpReply m_reply;
};

typedef std::shared_ptr<Connection> connection_ptr;

} // namespace server
} // namespace http

#endif // HTTP_CONNECTION_HPP
