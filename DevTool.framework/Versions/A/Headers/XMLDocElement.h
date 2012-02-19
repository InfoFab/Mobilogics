//
//  XMLDocElement.h
//  HungtecItemChecker
//
//  Created by Mikimoto on 2010-06-23.
//
//  Copyright 2010 MobiLogics Corporation. http://www.mobilogics.com All rights reserved.


#import <Foundation/Foundation.h>

/**
  
 */
@interface XMLDocElement : NSObject {
  NSDictionary * node;
}

- (id) initWithNode:(NSDictionary *) theNode;

// Returns this tag's innerHTML content.
- (NSString *) content;

// Returns the name of the current tag, such as "h3".
- (NSString *) tagName;

// Returns tag attributes with name as key and content as value.
//   href  = 'http://peepcode.com'
//   class = 'highlight'
- (NSDictionary *) attributes;

// Provides easy access to the content of a specific attribute, 
// such as 'href' or 'class'.
- (NSString *) objectForKey:(NSString *) theKey;

@end
