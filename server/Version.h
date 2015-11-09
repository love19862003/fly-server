#ifndef __FANNY_version_h__
#define __FANNY_version_h__
#include <string>
namespace{
  const std::string VERSION_MAJOY("0");
  const std::string VERSION_MINOR("0");
  const std::string VERSION_BUILD("1");
  const std::string VERSION_REVISION("26877187cf53209ac9ec5e050062c65e6447f339");
  //version number 26877187cf53209ac9ec5e050062c65e6447f339
}
inline std::string staticVersion(){
  return VERSION_MAJOY + "." + VERSION_MINOR + "." + VERSION_BUILD + "." + VERSION_REVISION;
}
inline std::string staticSubVersion(){
  return VERSION_MAJOY + "." + VERSION_MINOR + "." + VERSION_BUILD + "." + VERSION_REVISION.substr(0,7);
}
inline std::string staticRevision(){
  return VERSION_REVISION;
}
#endif
