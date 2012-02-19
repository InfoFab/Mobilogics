//
//  PrefixCharacter.h
//  BarcodeCommand
//
//  Created by mikimoto on 2010/3/30.
//  Copyright 2010 Mobilogics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Character.h"

/**
 * @brief set scan data transmission format prefix character, 1 ascii character
 * @see ScanDataTransmissionFormatType
 */
@interface PrefixCharacter : Character {

}

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(PrefixCharacter);

@end
