//
//  LogFactory.h
//  DevToolFramework
//
//  Created by mikimoto on 2011/1/18.
//  Copyright 2011 MobiLogics. All rights reserved.
//

@interface LogFactory : NSObject {
}

-(void)addConsoleLogger;

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(LogFactory);

@end
