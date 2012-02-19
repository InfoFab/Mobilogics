//
//  Accessory.h
//  
//
//  Created by mikimoto on 11/3/16.
//  Copyright 2011年 Mobilogics. All rights reserved.
//

#import <ExternalAccessory/ExternalAccessory.h>


@interface Accessory : NSObject {
 @protected
  NSString *deviceName;
  NSString *protocolString;
}

-(NSString *)deviceName;
-(NSString *)protocolString;
-(BOOL)isEqualTo:(Accessory *)accessory;

@end
