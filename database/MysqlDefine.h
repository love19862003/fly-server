/********************************************************************

  Filename:   MysqlDefine

  Description:MysqlDefine

  Version:  1.0
  Created:  20:8:2015   16:25
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __MysqlDefine_H__
#define __MysqlDefine_H__
#include <functional>
#include <memory>
#include <cppconn/resultset_metadata.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/connection.h>

namespace ShareSpace {
  namespace DB {
    struct Config;
    class Task;
    typedef std::unique_ptr<sql::Statement> STMTPointer;
    typedef std::function<void(sql::PreparedStatement* )> PStmtCall;
    typedef std::function<bool(STMTPointer&)> StmtCall;
    std::unique_ptr<Task> createQueryTask(const std::string& str, const StmtCall& fun);
    std::unique_ptr<Task> createCommandTask(const std::string& command, const PStmtCall& fun);
    bool mysqlBlockTask(const Config& c,const std::string& sql, const StmtCall& fun);
    bool mysqlBlockPreparTask(const Config& c, const std::string& cmd, const PStmtCall& fun);
  }
}
#endif