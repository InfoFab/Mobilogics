//
//  XMLDocument.h
//  HungtecItemChecker
//
//  Created by Mikimoto on 2010-06-23.
//
//  Copyright 2010 MobiLogics Corporation. http://www.mobilogics.com All rights reserved.


#import <Foundation/Foundation.h>
#import "XMLDocElement.h"

/**
  XMLDocument is a Root Document for parser XML Data.
  
  在產生實體物件時，你需要給他 XML NSData<br>
  for Example:<br>
  <pre>
              XMLDocument *doc = [[XMLDocument alloc] initWithXMLData:data];
              ...
              or
 
              XMLDocument *doc = [[XMLDocument alloc] initWithHTMLData:data];
              ...
 
              然後可以使用
              NSArray *array = [doc search:@"//doc/items/itemName"];
              取得
              <doc>
                <items>
                  <itmeName>xxx</itemName>
                </itmes>
                <items>
                  <itmeName>xxx</itemName>
                </itmes>
                <items>
                  <itmeName>xxx</itemName>
                </itmes>
              </doc>
              所有 itemName 的 XMLDocElement array
  </pre>
 */
@interface XMLDocument : NSObject {
 @private
  /// XML or HTML data
  NSData *data;
  BOOL isXML;
}

- (id) initWithData:(NSData *)theData isXML:(BOOL)isDataXML;
- (id) initWithHTMLData:(NSData *)theData;
- (id) initWithXMLData:(NSData *)theData;
- (NSArray *) search:(NSString *)xPathOrCSS;
- (XMLDocElement *) at:(NSString *)xPathOrCSS;

@property (retain) NSData *data;

@end
