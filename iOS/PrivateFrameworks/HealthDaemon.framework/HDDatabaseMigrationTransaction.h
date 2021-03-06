//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSQLiteDatabase;

@interface HDDatabaseMigrationTransaction : NSObject
{
    HDSQLiteDatabase *_unprotectedDatabase;
    HDSQLiteDatabase *_protectedDatabase;
}

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) HDSQLiteDatabase *protectedDatabase; // @synthesize protectedDatabase=_protectedDatabase;
@property(readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase; // @synthesize unprotectedDatabase=_unprotectedDatabase;
@property(readonly, nonatomic) _Bool isProtectedMigration;
- (id)databaseNameForProtectionClass:(long long)arg1;
- (id)initWithUnprotectedDatabase:(id)arg1 protectedDatabase:(id)arg2;

@end

