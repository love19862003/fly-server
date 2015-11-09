/********************************************************************

  Filename:   StringUtility

  Description:StringUtility

  Version:  1.0
  Created:  9:4:2015   10:06
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#include "utility/StringUtility.h"
#include <boost/algorithm/string/case_conv.hpp>
/*#include <boost/xpressive/xpressive_dynamic.hpp>*/
#include <boost/algorithm/string/find.hpp>
#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/crc.hpp>
#include <locale>
#ifdef _WIN32
#include <codecvt>
#endif // _DEBUG
#include <regex>
bool isIp(const std::string& ip) {
  std::regex reg("((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])[.]){3}(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])$");
  return std::regex_match(ip.c_str(), reg);
}
bool isMail(const std::string& mail) {
  std::regex reg("^([a-z]|[A-Z]|[0-9])(\\w+)*@\\w+[.]\\w+");
  return std::regex_match(mail.c_str(), reg);
}
bool isPhone(const std::string& ph) {
  std::regex reg("^1([3-9])\\d{9}$");
  return std::regex_match(ph.c_str(), reg);
}

unsigned int ShareSpace::Utility::makeCRC32(const char* buffer, size_t len) {
  boost::crc_32_type result;
  result.process_block(buffer, buffer + len);
  return result.checksum();
}
// bool ShareSpace::Utility::isIpAddress(const std::string& ip) {
//   using namespace boost::xpressive;
//   cregex reg = cregex::compile("^(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])[.](25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])[.](25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])[.](25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])$");
//   return regex_match(ip.c_str(), reg);
// }
bool ShareSpace::Utility::isPairIpAddress(const std::string& str, const std::string& ip) {
  if(!isIp(ip)) {
    return false;
  }
  std::string reg = str;
  reg = "^" + str + "$";
  boost::algorithm::ireplace_all(reg, ".", "[.]");
  boost::algorithm::ireplace_all(reg, "*", "(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])");
  return std::regex_match(ip.c_str(), std::regex(reg));
}

std::string ShareSpace::Utility::toLower(const std::string& info) {
  auto v = info;
  boost::algorithm::to_lower(v);
  return v;
}

void ShareSpace::Utility::toLower(std::string* info) {
  boost::algorithm::to_lower(*info);
}

void utf8toWStrReal(std::wstring& dest, const std::string& src){
  dest.clear();
  wchar_t w = 0;
  int bytes = 0;
  wchar_t err = L' ';
  for (size_t i = 0; i < src.size(); i++){
    unsigned char c = (unsigned char)src[i];
    if (c <= 0x7f){//first byte
      if (bytes){
        dest.push_back(err);
        bytes = 0;
      }
      dest.push_back((wchar_t)c);
    }
    else if (c <= 0xbf){//second/third/etc byte
      if (bytes){
        w = ((w << 6) | (c & 0x3f));
        bytes--;
        if (bytes == 0)
          dest.push_back(w);
      }
      else
        dest.push_back(err);
    }
    else if (c <= 0xdf){//2byte sequence start
      bytes = 1;
      w = c & 0x1f;
    }
    else if (c <= 0xef){//3byte sequence start
      bytes = 2;
      w = c & 0x0f;
    }
    else if (c <= 0xf7){//3byte sequence start
      bytes = 3;
      w = c & 0x07;
    }
    else{
      dest.push_back(err);
      bytes = 0;
    }
  }
  if (bytes)
    dest.push_back(err);
}
void wstrToUtf8Real(std::string& dest, const std::wstring& src){
  dest.clear();
  for (size_t i = 0; i < src.size(); i++){
    wchar_t w = src[i];
    if (w <= 0x7f)
      dest.push_back((char)w);
    else if (w <= 0x7ff){
      dest.push_back(0xc0 | ((w >> 6) & 0x1f));
      dest.push_back(0x80 | (w & 0x3f));
    }
    else if (w <= 0xffff){
      dest.push_back(0xe0 | ((w >> 12) & 0x0f));
      dest.push_back(0x80 | ((w >> 6) & 0x3f));
      dest.push_back(0x80 | (w & 0x3f));
    }
    else if (w <= 0x10ffff){
      dest.push_back(0xf0 | ((w >> 18) & 0x07));
      dest.push_back(0x80 | ((w >> 12) & 0x3f));
      dest.push_back(0x80 | ((w >> 6) & 0x3f));
      dest.push_back(0x80 | (w & 0x3f));
    }
    else
      dest.push_back(' ');
  }
}
std::wstring ShareSpace::Utility::utf8ToWstr(const std::string& str)
{
#ifdef _WIN32
  typedef std::codecvt_utf8<wchar_t> convert_typeX;
  std::wstring_convert<convert_typeX, wchar_t> converterX;
  return converterX.from_bytes(str);
#else
std::wstring result;
utf8toWStrReal(result, str);
return result;
#endif
}
std::string ShareSpace::Utility::wstrToUtf8(const std::wstring& wstr)
{
#ifdef _WIN32
  typedef std::codecvt_utf8<wchar_t> convert_typeX;
  std::wstring_convert<convert_typeX, wchar_t> converterX;
  return converterX.to_bytes(wstr);
#else
  std::string result;
  wstrToUtf8Real(result, wstr);
  return result;
#endif
}
