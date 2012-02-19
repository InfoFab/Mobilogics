//
//  Socket.h
//  CommandCenter
//
//  Created by mikimoto on 2011/2/16.
//  Copyright 2011 Mobilogics. All rights reserved.
//

@class GCDAsyncSocketDelegate;
@class GCDAsyncSocket;

@interface Socket : NSObject<GCDAsyncSocketDelegate> {
 @private
  NSString *host;
  UInt16 port;
  Boolean isConnect;
  //Boolean isWorking;
  GCDAsyncSocket *asyncSocket;
}

-(NSString *)host;
-(void)setHost:(NSString *)anHost;

-(UInt16)port;
-(void)setPort:(UInt16)aPort;

-(Boolean)isConnected;

-(void)prepare;
-(void)connect;
-(void)disconnect;
-(void)write:(NSString *)str;
-(void)writeData:(NSData *)aData;

@end
