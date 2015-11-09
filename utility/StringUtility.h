/********************************************************************

  Filename:   StringUtility

  Description:StringUtility

  Version:  1.0
  Created:  8:4:2015   11:16
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __StringUtility_H__
#define __StringUtility_H__
#include <string>
namespace ShareSpace {
namespace Utility {
  std::string toLower(const std::string&);
  void toLower(std::string*);
  std::wstring utf8ToWstr(const std::string& str);
  std::string wstrToUtf8(const std::wstring& wstr);
  bool isIpAddress(const std::string& ip);
  bool isPairIpAddress(const std::string& str, const std::string& ip);
  unsigned int makeCRC32(const char*, size_t);
}
}


#endif  /*FND_STRINGUTILITY_H*/
