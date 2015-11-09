/********************************************************************

  Filename:   pbc-lua

  Description:pbc-lua

  Version:  1.0
  Created:  16:4:2015   17:34
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __pbclua_H__
#define __pbclua_H__
#ifdef WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif
#ifndef WIN32
#if __cplusplus
extern "C" {
#endif
#endif
#include "lauxlib.h"
int DLL_EXPORT luaopen_protobuf_c(lua_State *L);
#ifndef WIN32
#if __cplusplus
}
#endif
#endif

#endif