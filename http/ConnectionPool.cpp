//
// connection_manager.cpp
// ~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2013 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include "http/ConnectionPool.hpp"

namespace ShareSpace {
namespace Http {

ConnectionManager::ConnectionManager()
{
}

void ConnectionManager::start(connection_ptr c)
{
  m_connections.insert(c);
  c->start();
}

void ConnectionManager::stop(connection_ptr c)
{
  m_connections.erase(c);
  c->stop();
}

void ConnectionManager::stop_all()
{
  for (auto c: m_connections)
    c->stop();
  m_connections.clear();
}

} // namespace server
} // namespace http
