//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SymptomEvaluator/ExtendedServiceInterface-Protocol.h>
#import <SymptomEvaluator/NSXPCListenerDelegate-Protocol.h>

@class FlowAnalyticsEngine, NOIAnalyticsEngine, NSMutableDictionary, NSString, NetworkAnalyticsEngine;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface ServiceImpl : NSObject <NSXPCListenerDelegate, ExtendedServiceInterface>
{
    FlowAnalyticsEngine *f_engine;
    NetworkAnalyticsEngine *n_engine;
    NOIAnalyticsEngine *noi_engine;
    NSObject<OS_dispatch_semaphore> *svc_sema;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *lastAllowedRequests;
    id featureReadyObserver;
}

- (void).cxx_destruct;
- (void)postAWDEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(BOOL)arg3 reply:(CDUnknownBlockType)arg4;
- (void)waitForOSLogErrorSymptomWithReply:(CDUnknownBlockType)arg1;
- (void)resetUsageFor:(id)arg1 nameKind:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setUsageOption:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)shutdown;
- (void)clientTransactionsRelease;
- (void)performPersistentStoreHealthCheckWithReply:(CDUnknownBlockType)arg1;
- (void)identifierForUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unsubscribeToNOIs:(id)arg1;
- (void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3;
- (void)resetDataFor:(id)arg1 nameKind:(id)arg2 inScopes:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getOption:(id)arg1 inScopes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setOption:(id)arg1 inScopes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getNetworkBitmapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 Reply:(CDUnknownBlockType)arg4;
- (id)initWithQueue:(id)arg1;
- (void)dealloc;
- (_Bool)assertEntitlement:(id)arg1 entitlement:(id)arg2 orWaiveOnIntent:(id)arg3;
- (_Bool)_checkRateLimitForConnection:(id)arg1;
- (void)_serviceReadyCheckPointRelease;
- (void)_serviceReadyCheckPoint;
- (_Bool)_serviceReady;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

