//
//  FirmwareUpdateState.h
//  BarcodeFramework
//
//  Created by mikimoto on 2010/8/29.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface FirmwareUpdateState : NSObject<ReceiveCommandHandler> {
 @protected
  NSInteger progress;
}

- (void)setUpdateFilePath:(NSString *)anUpdateFilePath;
- (NSData *)getCommandID;
- (NSData *)getCommandParameter;
- (void)handleReceiveCommand:(BOOL)b;
- (void)execute;
- (NSInteger)progress;
- (NSInteger)packagesCount;

@end
