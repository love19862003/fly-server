/*
* =====================================================================================
*                                                                                      
*       Filename:  protocal_all.h                                                      
*                                                                                      
*    Description:  protocal_all.h                                                      
*                                                                                      
*        Version:  1.0                                                                 
*        Created:  01/22/2014 02:10:19 PM                                              
*       Revision:  none                                                                
*       Compiler:  gcc                                                                 
*                                                                                      
*         Author:   (wufan),love19862003@163.com                                       
*   Organization:  dskj                                                                
*                                                                                      
* =====================================================================================
*/ 
#ifndef __ALL_PROTOCAL_H__
#define __ALL_PROTOCAL_H__
#ifdef _MSC_VER
#include <windows.h>
#include "google/protobuf/stubs/common.h"
#endif
#include "message/GateS2C.pb.h"
#include "message/LoginC2S.pb.h"
#include "message/LoginResultS2C.pb.h"
#include "message/PlayerDataS2C.pb.h"
#include "message/PlayerExitS2S.pb.h"
#include "message/PlayerKickS2C.pb.h"
#include "message/QueryGateStateLG2GT.pb.h"
#include "message/ServerRegisterS2S.pb.h"
#include "message/ServerStopS2C.pb.h"
#endif
