//
//  ReadNSData.h
//  BarcodeCommand
//
//  Created by mikimoto on 2010/3/19.
//  Copyright 2010 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ReadNSData : NSObject {

}

+ (unsigned char)readByte:(NSData *)data offset:(unsigned int) offset;
+ (unsigned short)readShort:(NSData *)data offset:(unsigned int) offset;
+ (unsigned long)readLong:(NSData *)data offset:(unsigned int) offset;
+ (NSString *)readString:(NSData *)data offset:(unsigned int) offset;
+ (NSString *)readHex2String:(NSData *)data length:(unsigned int) length;
+ (NSString *)readHex2String:(NSData *)data offset:(unsigned int)offset length:(unsigned int) length;
+ (NSString *)readHex2Ascii:(NSData *)data length:(unsigned int) length;
 
@end
