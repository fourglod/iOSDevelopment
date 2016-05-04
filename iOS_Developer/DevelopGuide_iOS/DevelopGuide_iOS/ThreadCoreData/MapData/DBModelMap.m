//
//  DBModelMap.m
//  ToyotaSalesService
//
//  Created by yangjinxin on 13-6-13.
//  Copyright (c) 2013年 xin. All rights reserved.
//

#import "DBModelMap.h"
#import "XXStore.h"


@implementation DBModelMap
@synthesize   managedObjectID;

#pragma mark -
#pragma mark webService json mapping
- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    NSLog(@"%s[%d] undefined key[%@]", __FILE__, __LINE__, key);
}

- (void)setValue:(id)value forKey:(NSString *)key
{
    if (value == nil || [value isKindOfClass:[NSNull class]])
    {
        return;
    }
    [super setValue:value forKey:key];
}


+ (id)getObjectFromJson:(NSDictionary*)json
{
    if (json == nil || [json count] == 0)
    {
        return nil;
    }
    
    id model = [[self alloc] init];
    [model setValuesForKeysWithDictionary:json];
    return model;
}

- (NSDictionary*)getJsonFromObject
{
    NSArray *allKeys = [self getAllKeys];
    if (allKeys == nil || [allKeys count] == 0)
    {
        return nil;
    }
    
    NSDictionary *jsonDic = [self dictionaryWithValuesForKeys:allKeys];
    return jsonDic;
}

+ (NSArray *)packageJsonData:(NSArray *)dataModel
{
    NSMutableArray *postArray = [NSMutableArray array];
    for (int i = 0; i < [dataModel count]; i++)
    {
        id model = [dataModel objectAtIndex:i];
        NSDictionary *jsonDic  = [model getJsonFromObject];
        [postArray addObject:jsonDic];
    }
    
    return postArray;
}

+ (NSArray *)decoderJsonData:(NSArray *)dataModel isSaveDB:(BOOL)save
{
    NSMutableArray *dataList = [NSMutableArray array];
    for (int i = 0; i < [dataModel count]; i++)
    {
        NSDictionary *dataDic = [dataModel objectAtIndex:i];
        id model = [self getObjectFromJson:dataDic];
        
        if (model == nil)
        {
            continue;
        }
        
        if(save)
        {
            [model saveToDB];
        }
        
        [dataList addObject:model];
    }
    
    return dataList;
}


#pragma mark -
#pragma mark DB mapping
- (void) convertFromDBData:(NSManagedObject *)data
{
    
}

- (void) convertToDBData:(NSManagedObject *)data
{
    
}


+ (NSArray *) getMapDatasFromDBModels:(NSArray *)models;
{
    if (models == nil || [models count] == 0) {
        return nil;
    }
    
    NSMutableArray *infoList = [NSMutableArray array];
    
    for (int i = 0; i < [models count]; i++)
    {
        NSManagedObject *managedOBj = [models objectAtIndex:i];
        if (managedOBj != nil)
        {
            id info = [[[self class] alloc] init];
            [info convertFromDBData:managedOBj];
            [infoList addObject:info];
        }
    }
    
    return infoList;
}


- (BOOL) isHasExisted
{
    return [[XXStore shareStore] existedObject:self.managedObjectID];
}


- (void) saveToDB
{
    if (entityName == nil || [entityName length] == 0)
    {
        return;
    }
    
    // 如果已存在
    BOOL res = [self isHasExisted];
    if (res)
    {
        return;
    }

    NSManagedObject *managedOBj = [[XXStore shareStore]
                  insertNewObjectForEntityForName:entityName];
    if (managedOBj == nil)
    {
        return;
    }
    [self convertToDBData:managedOBj];
    [[XXStore shareStore] saveContext];
    self.managedObjectID = managedOBj.objectID;

}


//- (NSManagedObject *) insertToDB
//{
//    NSManagedObjectContext *childContext = [[NSManagedObjectContext alloc] initWithConcurrencyType:NSPrivateQueueConcurrencyType];
//    childContext.parentContext           = [XXStore shareStore].managedObjectContext;
//    __block NSManagedObject *mangedObj = nil;
//    
//    [childContext performBlock:^{
//        assert([NSThread isMainThread] == NO);
//        mangedObj = [NSEntityDescription insertNewObjectForEntityForName:ENTITYNAME_ACTIVITYINFO
//                                                  inManagedObjectContext:childContext];
//        [self convertToDBData:mangedObj];
//        [childContext save:nil];
//        self.managedObjectID = mangedObj.objectID;
//        [childContext.parentContext performBlock:^{
//            assert([NSThread isMainThread] == YES);
//            NSError*parentError=nil;
//            [childContext.parentContext save:&parentError];
//        }];
//    }];
//    
//    
//    return mangedObj;
//}
#define ENTITYNAME_ACTIVITYINFO @""
- (NSManagedObject *) insertToDB
{
    NSManagedObjectContext *childContext = [[NSManagedObjectContext alloc] initWithConcurrencyType:NSPrivateQueueConcurrencyType];
    childContext.parentContext           = [XXStore shareStore].managedObjectContext;
    __block NSManagedObject *mangedObj = nil;
    
    [childContext performBlockAndWait:^{
        //assert([NSThread isMainThread] == NO);
        mangedObj = [NSEntityDescription insertNewObjectForEntityForName:ENTITYNAME_ACTIVITYINFO
                                                  inManagedObjectContext:childContext];
        [self convertToDBData:mangedObj];
        [childContext save:nil];
        self.managedObjectID = mangedObj.objectID;
    }];
    
    //assert([NSThread isMainThread] == NO);
    NSError*parentError=nil;
    [childContext.parentContext save:&parentError];
    return mangedObj;
}


- (void) upDateToDB
{
    
    if (self.managedObjectID == nil)
    {
        return;
    }
    
    NSManagedObject *managedOBj = [[XXStore shareStore] objectWithID:self.managedObjectID];
    
    if (managedOBj == nil)
    {
        return;
    }
    
    [self convertToDBData:managedOBj];
    [[XXStore shareStore] saveContext];
    
}

- (void) deleteFromDB
{
    if (self.managedObjectID == nil)
    {
        return;
    }
    
    [[XXStore shareStore] deleteObjectById:self.managedObjectID];
    [[XXStore shareStore] saveContext];
}



@end