//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfoMessage : MRProtocolMessage
{
    MRSupportedProtocolMessages *_supportedProtocolMessages;
}

- (void).cxx_destruct;
- (unsigned int)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
- (unsigned int)_lastSupportedMessageType;
- (unsigned int)type;
- (unsigned int)encryptionType;
@property(readonly, nonatomic) MRSupportedProtocolMessages *supportedProtocolMessages;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
- (id)initWithDeviceInfo:(id)arg1;

@end

