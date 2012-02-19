//
//  Character.h
//  BarcodeCommand
//
//  Created by mikimoto on 2010/3/31.
//  Copyright 2010 Mobilogics. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 * @brief Character Type Command must extends this
 */
@interface Character : Command {
 @private
	NSString *character;
}

- (void)setCommandParameterValue:(NSString *)value;

@end
