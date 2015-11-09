//
// header.hpp
// ~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef HTTP_HEADER_HPP
#define HTTP_HEADER_HPP

#include <string>

namespace ShareSpace {
namespace Http {

struct header
{
  std::string name;
  std::string value;
};

struct HttpConfig 
{
  std::string  url;
  unsigned short  port;
};


#ifndef _WIN32
constexpr size_t httpBufferSize(){ return 8192; }
#else
#define   httpBufferSize() 8192
#endif

} // namespace server
} // namespace http

#endif // HTTP_HEADER_HPP
