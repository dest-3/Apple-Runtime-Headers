//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSIndexSet, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration>
{
    NSIndexSet *_insertIndexes;
    NSArray *_insertObjects;
    NSIndexSet *_removeIndexes;
    NSArray *_removeObjects;
    _NSOrderedCollectionDifferenceMoves *_moves;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)inverseDifference;
- (id)invertedDifference;
- (void)_enumerateChangesInDiffOrderWithBlock:(CDUnknownBlockType)arg1;
- (id)_changeWithType:(long long)arg1 index:(unsigned long long)arg2 object:(id)arg3;
- (id)differenceByTransformingChangesWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL hasChanges;
@property(readonly) NSArray *removals;
@property(readonly) NSArray *insertions;
- (void)dealloc;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4 additionalChanges:(id)arg5;
- (id)initWithInsertIndexes:(id)arg1 insertedObjects:(id)arg2 removeIndexes:(id)arg3 removedObjects:(id)arg4;
- (id)initWithChanges:(id)arg1;
- (id)init;

@end

