/*
 *  Command.h
 *  Barcode Command Framework
 *
 *  Created by mikimoto on 2010/3/20.
 *  Copyright 2010 MobiLogics Inc. All rights reserved.
 *
 */

#import <Foundation/Foundation.h>

/**
 * @brief Command Layer Object must implement this protocol
 */
@protocol CommandProtocol

- (void)prepareCommand;
- (NSData *)getCommand;
- (NSUInteger)getCommandLength;
- (NSString *)getCommandName;
- (NSString *)getCommandDisplayString;

- (NSData *)getCommandID;
- (NSData *)getCommandParameter;

- (Boolean)isEqualToHex:(unsigned char*)hex length:(NSUInteger)i;

@end

/**
 * @brief a simple Command Layer Object implement
 */
@interface Command : NSObject<CommandProtocol> {
 @protected
	NSMutableData *body;
}

- (NSData *)getNSDataFromHex:(unsigned char*)hex length:(NSUInteger)i;

@end

/**
 * @brief CommandReceiver must implement this protocol
 */
@protocol CommandReceiver

- (NSData *)getCommandID;
- (Boolean)isHandle:(Command *)aCommand;
- (void)handle:(Command *)aCommand;

/**
 * @brief the String you receive
 *
 * @retval NSString*
 */
- (NSString *)getReceiveString;

/**
 * @brief the binary data you receive
 *
 * @retval NSData*
 */
- (NSData *)getReceiveData;

@end
