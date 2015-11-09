//
// request_handler.cpp
// ~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include "RequestHandler.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include "http/HttpReply.hpp"
#include "http/HttpRequest.hpp"

namespace ShareSpace {
namespace Http {

  RequestHandler::RequestHandler()
  : m_callBack(nullptr)
{
}

bool RequestHandler::setCallBack(const requestCallBack& callBack){
  m_callBack = callBack;
  return m_callBack != nullptr;
}

void RequestHandler::handle_request(const request& req, HttpReply& rep)
{
  // Decode url to path.
  std::string request_path;
  if (!url_decode(req.uri, request_path))
  {
    rep = HttpReply::stock_reply(HttpReply::bad_request);
    return;
  }

  // Request path must be absolute and not contain "..".
  if (request_path.empty() || request_path[0] != '/'
      || request_path.find("..") != std::string::npos)
  {
    rep = HttpReply::stock_reply(HttpReply::bad_request);
    return;
  }

  request_path.erase(request_path.begin());
  std::string result = m_callBack(request_path, req.data);
  if (result.empty()){
    rep = HttpReply::stock_reply(HttpReply::bad_request);
    return;
  }
  
  rep.status = HttpReply::ok;
  rep.content += result;
  rep.headers.resize(2);
  rep.headers[0].name = "Content-Length";
  rep.headers[0].value = std::to_string(rep.content.size());
  rep.headers[1].name = "Content-Type";
  rep.headers[1].value = "application/json; charset=utf-8";// mime_types::extension_to_type(extension);
}

bool RequestHandler::url_decode(const std::string& in, std::string& out)
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
        std::istringstream is(in.substr(i + 1, 2));
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

} // namespace server
} // namespace http
