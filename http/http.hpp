/********************************************************************

  Filename:   http

  Description:http

  Version:  1.0
  Created:  11:9:2015   11:41
  Revison:  none
  Compiler: gcc vc

  Author:   wufan, love19862003@163.com

  Organization:
*********************************************************************/
#ifndef __http_H__
#define __http_H__

#ifndef FINNY_HTTP_STATIC_LIB
#ifdef WIN32
#ifdef FINNY_HTTP_EXPORTS
#define FINNY_HTTP_API __declspec(dllexport)
#else
#define FINNY_HTTP_API __declspec(dllimport)

#endif
#else
#define FINNY_HTTP_API
#endif
#else
#define FINNY_HTTP_API
#endif

#endif