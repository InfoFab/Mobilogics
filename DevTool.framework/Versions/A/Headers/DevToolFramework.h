//
//  DevToolFramework.h
//  DevToolFramework
//
//  Created by mikimoto on 2010/6/29.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#ifndef __DEVTOOLFRAMEWORK__
  #define __DEVTOOLFRAMEWORK__

  #import <CoreData/CoreData.h>

  #ifndef DEVTOOLFRAMEWORK_BUILD
    #import <DevTool/SynthesizeSingleton.h>
    #import <DevTool/XMLDocument.h>
    #import <DevTool/XMLDocElement.h>
    #import <DevTool/XPathQuery.h>
    #import <DevTool/StringTool.h>

    #import <DevTool/AlertViews.h>
    #import <DevTool/GCDAsyncSocket.h>
    #import <DevTool/Socket.h>
    #import <DevTool/SocketClient.h>
    #import <DevTool/SocketServer.h>

    #import <DevTool/DDLog.h>
    #import <DevTool/LogFactory.h>
    #import <DevTool/Accessory.h>
    #import <DevTool/Command.h>
    #import <DevTool/NotificationHandler.h>
    #import <DevTool/Connection.h>
    #import <DevTool/CommandReceiverImpl.h>
    #import <DevTool/ReadNSData.h>
    #import <DevTool/AbstractDAO.h>
    #import <DevTool/DataAccessProvider.h>
  #else
    #import "SynthesizeSingleton.h"
    #import "XMLDocument.h"
    #import "XMLDocElement.h"
    #import "XPathQuery.h"
    #import "StringTool.h"

    #import "AlertViews.h"
    #import "GCDAsyncSocket.h"
    #import "Socket.h"
    #import "SocketClient.h"
    #import "SocketServer.h"

    #import "DDLog.h"
    #import "LogFactory.h"
    #import "Accessory.h"
    #import "Command.h"
    #import "NotificationHandler.h"
    #import "Connection.h"
    #import "CommandReceiverImpl.h"
    #import "ReadNSData.h"
    #import "AbstractDAO.h"
    #import "DataAccessProvider.h"
  #endif
#endif

#ifndef SQLSTOREPATH
#define SQLSTOREPATH [NSHomeDirectory() stringByAppendingString:@"/Documents/data.sqlite"]
#endif

#if DEBUGGING_VERBOSE
  static const int ddLogLevel = LOG_LEVEL_VERBOSE;
#else
  #if DEBUGGING_ERROR
    static const int ddLogLevel = LOG_LEVEL_ERROR;
  #else
    #if DEBUGGING_WARN
      static const int ddLogLevel = LOG_LEVEL_WARN;
    #else
      #if DEBUGGING_INFO
        static const int ddLogLevel = LOG_LEVEL_INFO;      
      #else
        static const int ddLogLevel = LOG_LEVEL_OFF;
      #endif
    #endif
  #endif
#endif
