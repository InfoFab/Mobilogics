//
//  DatabaseProvider.h
//  Enpos
//
//  Created by Neo on 2011/6/15.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataAccessProvider : NSObject {
  NSManagedObjectContext *context;    
}

- (NSManagedObjectContext *)context;
- (void)initCoreData;

- (void)clearStores;
- (void)resetManagedObjectContext ;
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER( DataAccessProvider );


@end
