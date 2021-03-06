//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>
{
    NSMutableArray *_defaultTags;
    NSMutableArray *_disabledPortraitTags;
    NSMutableArray *_optionalTags;
}

+ (Class)disabledPortraitTagsType;
+ (Class)optionalTagsType;
+ (Class)defaultTagsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *disabledPortraitTags; // @synthesize disabledPortraitTags=_disabledPortraitTags;
@property(retain, nonatomic) NSMutableArray *optionalTags; // @synthesize optionalTags=_optionalTags;
@property(retain, nonatomic) NSMutableArray *defaultTags; // @synthesize defaultTags=_defaultTags;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disabledPortraitTagsCount;
- (void)addDisabledPortraitTags:(id)arg1;
- (void)clearDisabledPortraitTags;
- (id)optionalTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optionalTagsCount;
- (void)addOptionalTags:(id)arg1;
- (void)clearOptionalTags;
- (id)defaultTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultTagsCount;
- (void)addDefaultTags:(id)arg1;
- (void)clearDefaultTags;

@end

