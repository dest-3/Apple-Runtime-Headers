//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/_HMDDeviceHandle.h>

@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle
{
    NSUUID *_deviceIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isValidDestination:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)destination;
- (_Bool)isLocal;
- (id)privateDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithDestination:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1;

@end

