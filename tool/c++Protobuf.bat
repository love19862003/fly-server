@echo off
setlocal enabledelayedexpansion
set tool=.\
set common_path=..\message\
set pbfile_path=..\message\
set pbfile_name=message/
set pbfile_head=..\message\protocal_all.h
for /f %%i in ('dir /a-d /b %pbfile_path%*.proto') do ( 
echo %pbfile_path%%%i
%tool%protoc.exe --proto_path=%pbfile_path%  --cpp_out=%common_path%  %pbfile_path%%%i 
)
echo make %pbfile_head%
echo /*> %pbfile_head%
echo ^* =====================================================================================>> %pbfile_head%
echo ^*                                                                                      >> %pbfile_head%
echo ^*       Filename:  protocal_all.h                                                      >> %pbfile_head%
echo ^*                                                                                      >> %pbfile_head%
echo ^*    Description:  protocal_all.h                                                      >> %pbfile_head%
echo ^*                                                                                      >> %pbfile_head%
echo ^*        Version:  1.0                                                                 >> %pbfile_head%
echo ^*        Created:  01/22/2014 02:10:19 PM                                              >> %pbfile_head%
echo ^*       Revision:  none                                                                >> %pbfile_head%
echo ^*       Compiler:  gcc                                                                 >> %pbfile_head%
echo ^*                                                                                      >> %pbfile_head%
echo ^*         Author:   (wufan),love19862003@163.com                                       >> %pbfile_head%
echo ^*   Organization:  dskj                                                                >> %pbfile_head%
echo ^*                                                                                      >> %pbfile_head%
echo ^* =====================================================================================>> %pbfile_head%
echo ^*/ >> %pbfile_head%
echo #ifndef __ALL_PROTOCAL_H__>> %pbfile_head%
echo #define __ALL_PROTOCAL_H__>> %pbfile_head%
echo #ifdef _MSC_VER>> %pbfile_head%
echo #include ^<windows.h^>>> %pbfile_head%
echo #include "google/protobuf/stubs/common.h">>  %pbfile_head%
echo #endif>>  %pbfile_head%
for /f %%i in ('dir /a-d /b %pbfile_path%*.pb.h') do ( 
echo #include "%pbfile_name%%%i")>>  %pbfile_head%
)
echo #endif>>  %pbfile_head%
echo complete done file %pbfile_head%
pause
