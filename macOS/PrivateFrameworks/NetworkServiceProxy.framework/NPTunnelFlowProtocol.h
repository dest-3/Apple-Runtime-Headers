//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnelFlow.h>

@class NSObject;
@protocol OS_dispatch_data;

@interface NPTunnelFlowProtocol : NPTunnelFlow
{
    BOOL _disconnectedByTunnel;
    NSObject<OS_dispatch_data> *_inputBuffer;
    BOOL _discardFirstData;
    BOOL _connectedOnTunnelReadyForData;
    BOOL _connectedOnInitialData;
    BOOL _waitingForOutput;
    struct nw_protocol *_inputProtocol;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL waitingForOutput; // @synthesize waitingForOutput=_waitingForOutput;
@property(readonly, nonatomic) struct nw_protocol *inputProtocol; // @synthesize inputProtocol=_inputProtocol;
- (void)handleAppData:(id)arg1;
- (void)handleOutputFrame:(id)arg1 send:(BOOL)arg2;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg1 limitMinimumBytes:(unsigned int)arg2 limitMaximumBytes:(unsigned int)arg3 limitMaximumFrames:(unsigned int)arg4;
- (BOOL)addBufferToFrameArray:(struct nw_frame_array_s *)arg1 bufferSize:(unsigned long long)arg2;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg1 limitMinimumBytes:(unsigned int)arg2 limitMaximumBytes:(unsigned int)arg3 limitMaximumFrames:(unsigned int)arg4;
- (void)readDataFromClient;
- (void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (void)handleTunnelReadyForData;
- (void)notifyClientConnected;
- (BOOL)isClientFlowClosed;
- (void)closeClientFlowWithError:(int)arg1;
- (void)disconnect;
- (BOOL)connect;
- (void)dropInputProtocol;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 inputProtocol:(struct nw_protocol *)arg3 extraProperties:(id)arg4;

@end

