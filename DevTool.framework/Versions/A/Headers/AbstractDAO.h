//
//  AbstractDAO.h
//  Enpos
//
//  Created by Neo on 2011/6/15.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AbstractDAO : NSObject {
  NSFetchedResultsController *results;
  int count;
  
  NSString *entityName;
  NSString *sortKey;
	
	NSManagedObjectContext *tempManagedObjectContext;
}

@property (nonatomic, retain)NSManagedObjectContext *tempManagedObjectContext;

- (void)resetManagedObjectContext;

- (NSFetchedResultsController *)results;
- (int)count;
- (NSManagedObjectContext *)context;

- (void)fetchData;
- (void)fetchDataWithSort:(BOOL)aSort;
- (void)fetchDataWithSort:(BOOL)aSort withSortKey:(NSString *)aSortKey;
- (NSArray *)fetchDataNumericSort:(BOOL)autoFetch;

- (BOOL)saveContext;
- (void)rollback;
- (void)reset;

- (NSManagedObject *)createObject;
- (NSManagedObject *)createObjectWithSpecifiedContext:(NSManagedObjectContext *)theContext;

- (NSManagedObject *)getObjectWithPrimary:(NSNumber *)primaryKey;
- (NSManagedObject *)getObjectWithKey:(NSString *)aKey destination:(id)destination;
- (NSArray *)getObjectsWithKey:(NSString *)aKey destination:(id)destination;
- (NSArray *)getObjectsWithKey:(NSString *)aKey equalDestination:(id)destination ;
- (NSArray *)getObjectsWithformat:(NSPredicate *)aPredicate;

- (void)deleteObjectWithPrimaryKey:(NSNumber *)primaryKey;
- (void)deleteObject:(NSManagedObject *)aObject;
- (void)deleteObjectAtIndex:(int)aIndex;
- (void)deleteObjectAtNumericIndex:(int)aIndex;
- (void)deleteAllObjects;
- (void)deleteAllObjects:(BOOL)isSaveContext;

- (NSArray *)getAllObjects;
- (NSNumber *)getInsertPrimaryKey;

- (NSManagedObject *)getObjectByBizID:(NSString *)theID bizIDAttributeName:(NSString *)theAttributeName theContext:(NSManagedObjectContext *)theContext;
- (NSManagedObject *)getObjectByBizID:(NSString *)theID theContext:(NSManagedObjectContext *)theContext;
- (NSManagedObject *)createSpecManagedObject:(NSManagedObjectContext *)theContext;

@end