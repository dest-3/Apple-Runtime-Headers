//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VoiceShortcuts/NSCopying-Protocol.h>

@class NSData, NSString;

@interface VCPBVoiceShortcut : PBCodable <NSCopying>
{
    double _dateCreated;
    double _dateLastModified;
    NSString *_associatedAppBundleIdentifier;
    NSString *_identifier;
    NSData *_keyImageData;
    NSString *_phrase;
    NSData *_serializedWorkflowData;
    NSString *_shortcutDescription;
    NSString *_shortcutName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *keyImageData; // @synthesize keyImageData=_keyImageData;
@property(retain, nonatomic) NSData *serializedWorkflowData; // @synthesize serializedWorkflowData=_serializedWorkflowData;
@property(nonatomic) double dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(nonatomic) double dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(retain, nonatomic) NSString *shortcutDescription; // @synthesize shortcutDescription=_shortcutDescription;
@property(retain, nonatomic) NSString *shortcutName; // @synthesize shortcutName=_shortcutName;
@property(retain, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasKeyImageData;
@property(readonly, nonatomic) BOOL hasShortcutDescription;

@end

