/********************************************************************

  Filename:   HiredisInclude

  Description:HiredisInclude

  Version:  1.0
  Created:  24:8:2015   11:52
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __HiredisInclude_H__
#define __HiredisInclude_H__
#if WIN32
#define  USE_DL_PREFIX
#define  LACKS_STDLIB_H
#define  NO_QFORKIMPL
#define  WIN32_IOCP
#include <Win32_Interop/win32fixes.h>
#endif
#include <hiredis/hiredis.h>

#endif