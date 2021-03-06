//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

@interface SPExecutionPolicy : NSObject
{
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (BOOL)isBlockedSoftware:(id)arg1 error:(id *)arg2;
- (BOOL)getBlockedSoftwareOverride:(id)arg1 error:(id *)arg2;
- (BOOL)setBlockedSoftwareOverride:(id)arg1 isEnabled:(BOOL)arg2 error:(id *)arg3;
- (BOOL)addBlockedSoftwareOverride:(id)arg1 error:(id *)arg2;
- (BOOL)addGatekeeperUserIntent:(id)arg1 error:(id *)arg2;
- (id)blockedExecutionPolicyItems;
- (id)legacyExecutionHistory;
- (void)dealloc;
- (id)init;

@end

