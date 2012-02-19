//
//  ScanData.h
//  BarcodeCommand
//
//  Created by mikimoto on 2010/4/14.
//  Copyright 2010 Mobilogics. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ReceiveData : Command {
 @protected
	NSMutableData *data;
}

-(void)handle:(unsigned char*)hex length:(NSUInteger)i;
-(void)handle:(NSData *)aData;

@end
