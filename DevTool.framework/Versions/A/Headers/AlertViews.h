//
//  AlertViews.h
//  HungtecItemChecker
//
//  Created by mikimoto on 2010/6/28.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SynthesizeSingleton.h"

@class AlertViewsImpl;

@interface AlertViews : NSObject {
 @private
  AlertViewsImpl *alertViewsImpl;
}

- (void)showProgressHUD:(NSString *)key target:(id)aTarget selector:(SEL)aSelector;
- (void)showAutoAlertWithMessage:(NSString *)message;

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER( AlertViews );

@end