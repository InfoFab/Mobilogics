//
//  Setting.h
//  HungtecItemChecker
//
//  Created by mikimoto on 2010/6/29.
//  Copyright 2010 Mobilogics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SynthesizeSingleton.h"


@interface Setting : NSObject {
 @private
}

- (NSString *)userID;
- (void)setUserID:(NSString *)anUserID;

- (NSString *)passwd;
- (void)setPasswd:(NSString *)aPasswd;

- (NSString *)url;
- (void)setUrl:(NSString *)anUrl;

- (void)prepare;

- (void)saveSetting;

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER( Setting );

@end