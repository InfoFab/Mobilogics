//
//  StringTool.h
//  DevToolFramework
//
//  Created by mikimoto on 2010/6/29.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SynthesizeSingleton.h"

@interface StringTool : NSObject {

}

-(BOOL)isEmpty:(NSString *)str;
-(Boolean)checkIpAddressString:(NSString *)str;

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER( StringTool );

@end
