//
//  CommandReceiverImpl.h
//  BarcodeFramework
//
//  Created by mikimoto on 2010/8/5.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CommandReceiverImpl : NSObject<CommandReceiver> {
 @private
  NSString *receiveString;
  NSData *receiveData;
}

@end
