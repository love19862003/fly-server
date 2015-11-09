//
// request_handler.hpp
// ~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_REQUEST_HANDLER_HPP
#define HTTP_REQUEST_HANDLER_HPP

#include <string>
#include <functional>

namespace ShareSpace {
namespace Http {

struct HttpReply;
struct request;


/// The common handler for all incoming requests.
class RequestHandler
{
public:
  typedef std::function<std::string(const std::string& req, const std::string& cmd)> requestCallBack;
  RequestHandler(const RequestHandler&) = delete;
  RequestHandler& operator=(const RequestHandler&) = delete;

  /// Construct with a directory containing files to be served.
  explicit RequestHandler();

  /// Handle a request and produce a reply.
  void handle_request(const request& req, HttpReply& rep);
  bool setCallBack(const requestCallBack& callBack);
private:
  /// The directory containing the files to be served.
  requestCallBack m_callBack;

  /// Perform URL-decoding on a string. Returns false if the encoding was
  /// invalid.
  static bool url_decode(const std::string& in, std::string& out);
};

} // namespace server
} // namespace http

#endif // HTTP_REQUEST_HANDLER_HPP
