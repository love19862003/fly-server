@echo off
setlocal enabledelayedexpansion
set TOOL=.\
set pbfile_path=..\message\
set pbs=..\pbs\
set pbsRegister=..\pbs\registerPb.lua
for /f %%i in ('dir /a-d /b %pbfile_path%*.proto') do ( 
set pbname=%%i 
set pbname=!pbname:~0,-5!b
echo %pbfile_path%%%i
%tool%protoc.exe --proto_path=%pbfile_path% --descriptor_set_out=%pbs%!pbname! %pbfile_path%%%i  
)
echo "finished create [pb] file from [proto] file"

lua pbs.lua