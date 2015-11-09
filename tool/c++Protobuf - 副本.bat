@echo off
setlocal enabledelayedexpansion
set tool=.\
set common_path=..\protocal\
set pbfile_path=..\protocal\
set pbfile_name=protocal/
set pbfile_head=..\protocal\protocal_all.h
echo %pbfile_path%ActivityMissionInfos.proto
%tool%protoc.exe --proto_path=%pbfile_path%  --cpp_out=%common_path%  %pbfile_path%ActivityMissionInfos.proto
pause
