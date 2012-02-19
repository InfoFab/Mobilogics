//
//  AsyncSocketClient.h
//  Rmpos
//
//  Created by imac mobilogics on 12/19/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AsyncSocket.h"

@protocol SocketClientDelegate;

@interface SocketClient : NSObject {
 	AsyncSocket *socket;
	
	id<SocketClientDelegate> delegate;
	
	NSString *host;
	UInt16    port;
}
@property (nonatomic, copy)NSString *host;
@property (nonatomic)UInt16 port;
@property (nonatomic, assign)id<SocketClientDelegate> delegate;

- (id)initWithHost:(NSString *)aHost andPort:(UInt16)aPort;
- (void)connect;
- (void)disconnect;
- (BOOL)isConnected;
- (void)write:(NSString *)str;
- (void)writeData:(NSData *)aData;

@end


@protocol SocketClientDelegate <NSObject>

- (void)recivedString:(NSString *)theMsg;

@end
