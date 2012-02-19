//
//  DefaultLogFormatter.h
//  DevToolFramework
//
//  Created by mikimoto on 2011/1/18.
//  Copyright 2011 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DDLog.h"

@interface DefaultLogFormatter : NSObject<DDLogFormatter> {
 @private
  NSDateFormatter *dateFormatter;
}

@end
