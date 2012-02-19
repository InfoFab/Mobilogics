//
//  SocketServer.h
//  Rmpos
//
//  Created by imac mobilogics on 12/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AsyncSocket.h"

@protocol SocketServerDelegate;

@interface SocketServer : NSObject {
  AsyncSocket *socket;
  NSMutableArray *connectedSockets;

  id<SocketServerDelegate> delegate;
  BOOL isRunning;
  UInt16 port;
}

@property (nonatomic, assign)id<SocketServerDelegate> delegate;
@property (nonatomic)UInt16 port;

- (id)initWithPort:(UInt16)aPort;
- (void)start;
- (void)stop;

@end

@protocol SocketServerDelegate <NSObject>

- (void)serverDidStarted:(AsyncSocket *)listenSocket;
- (void)serverDidStoped;
- (void)serverReceiveDate:(NSString *)msg;

@optional 

- (void)acceptClient:(NSString *)host port:(UInt16)port;
- (void)disconnectClient:(NSString *)host port:(UInt16)port;
- (void)errorOccur:(NSString *)errorMsg;

@end