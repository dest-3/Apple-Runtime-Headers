//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMediaRemote/NMRMediaRemoteProtobufCodable-Protocol.h>

@class NSString, _NMRPlaybackQueueRequestProtobuf;

@interface NMRPlaybackQueueRequest : NSObject <NMRMediaRemoteProtobufCodable>
{
    _NMRPlaybackQueueRequestProtobuf *_protobuf;
}

- (void).cxx_destruct;
- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (void)performWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) void *playerPath;
@property(readonly, nonatomic) void *request;
- (id)initWithRequest:(void *)arg1 playerPath:(void *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

