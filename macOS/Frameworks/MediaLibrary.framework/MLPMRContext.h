//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLPMRContextImpl;

@interface MLPMRContext : NSObject
{
    MLPMRContextImpl *impl;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)registerForCleanup;
+ (void)cleanupFromTerminate;
- (void)setParameters:(id)arg1;
- (id)logPath;
- (id)applicationName;
- (struct MLPMRInstrument *)cppInstrument:(id)arg1;
- (void *)instrument:(id)arg1;
- (void)dealloc;
- (id)init;

@end

