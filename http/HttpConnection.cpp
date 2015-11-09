//
// connection.cpp
// ~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include "HttpConnection.hpp"
#include <utility>
#include <vector>
#include "http/ConnectionPool.hpp"
#include "http/RequestHandler.hpp"

namespace ShareSpace {
namespace Http {

  Connection::Connection(boost::asio::ip::tcp::socket socket,
                         boost::asio::strand& strand,
                         ConnectionManager& manager,
                         RequestHandler& handler)
  : m_socket(std::move(socket))
  , m_strand(strand)
  , m_connectionMgr(manager)
  , m_requestHandler(handler)
{
}

void Connection::start()
{
  do_read();
}

void Connection::stop()
{
  m_socket.close();
}

void Connection::do_read()
{
  auto self(shared_from_this());
  auto fun = [this, self](boost::system::error_code ec, std::size_t bytes_transferred){
    if (!ec) {
      RequestParser::result_type result;
      char* it = nullptr;
      std::tie(result, it) = m_requestParser.parse(
        m_request, m_buffer.data(), m_buffer.data() + bytes_transferred);

      if (result == RequestParser::good){
        if (it != m_buffer.data() + bytes_transferred){
          m_request.data = std::string(it, m_buffer.data() + bytes_transferred - it);
        }
        m_requestHandler.handle_request(m_request, m_reply);
        do_write();
      }
      else if (result == RequestParser::bad){
        m_reply = HttpReply::stock_reply(HttpReply::bad_request);
        do_write();
      }else{
        do_read();
      }
    }
    else if (ec != boost::asio::error::operation_aborted){
      m_connectionMgr.stop(shared_from_this());
    }
  };
  m_socket.async_read_some(boost::asio::buffer(m_buffer), m_strand.wrap(fun));
}

void Connection::do_write()
{
  auto self(shared_from_this());
  auto fun = [this, self](boost::system::error_code ec, std::size_t){
    if (!ec){
      // Initiate graceful connection closure.
      boost::system::error_code ignored_ec;
      m_socket.shutdown(boost::asio::ip::tcp::socket::shutdown_both,
                        ignored_ec);
    }

    if (ec != boost::asio::error::operation_aborted){
      m_connectionMgr.stop(shared_from_this());
    }
  };
  boost::asio::async_write(m_socket, m_reply.to_buffers(), m_strand.wrap(fun));
}

} // namespace server
} // namespace http
