//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBDataProviderConnection;
@protocol OS_dispatch_queue;

@interface BLTDataProviderConnection : NSObject
{
    BBDataProviderConnection *_dataProviderConnection;
    NSObject<OS_dispatch_queue> *_dataProviderConnectionQueue;
}

+ (id)dataProviderConnectionWithServiceName:(id)arg1 onQueue:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataProviderConnectionQueue; // @synthesize dataProviderConnectionQueue=_dataProviderConnectionQueue;
@property(retain, nonatomic) BBDataProviderConnection *dataProviderConnection; // @synthesize dataProviderConnection=_dataProviderConnection;

@end

