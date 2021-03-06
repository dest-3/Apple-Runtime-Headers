//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionRowPresentationProperties, LPImage, LPImagePresentationProperties, NSArray, NSNumber;

@interface LPCaptionBarPresentationProperties : NSObject
{
    LPCaptionRowPresentationProperties *_aboveTop;
    LPCaptionRowPresentationProperties *_top;
    LPCaptionRowPresentationProperties *_bottom;
    LPCaptionRowPresentationProperties *_belowBottom;
    LPImage *_leadingIcon;
    NSArray *_additionalLeadingIcons;
    LPImagePresentationProperties *_leadingIconProperties;
    LPImage *_trailingIcon;
    NSArray *_additionalTrailingIcons;
    LPImagePresentationProperties *_trailingIconProperties;
    long long _leadingAccessoryType;
    long long _trailingAccessoryType;
    NSNumber *_minimumHeight;
    struct CGSize _leadingIconSize;
    struct CGSize _trailingIconSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property(nonatomic) long long trailingAccessoryType; // @synthesize trailingAccessoryType=_trailingAccessoryType;
@property(nonatomic) long long leadingAccessoryType; // @synthesize leadingAccessoryType=_leadingAccessoryType;
@property(retain, nonatomic) LPImagePresentationProperties *trailingIconProperties; // @synthesize trailingIconProperties=_trailingIconProperties;
@property(retain, nonatomic) NSArray *additionalTrailingIcons; // @synthesize additionalTrailingIcons=_additionalTrailingIcons;
@property(nonatomic) struct CGSize trailingIconSize; // @synthesize trailingIconSize=_trailingIconSize;
@property(retain, nonatomic) LPImage *trailingIcon; // @synthesize trailingIcon=_trailingIcon;
@property(retain, nonatomic) LPImagePresentationProperties *leadingIconProperties; // @synthesize leadingIconProperties=_leadingIconProperties;
@property(retain, nonatomic) NSArray *additionalLeadingIcons; // @synthesize additionalLeadingIcons=_additionalLeadingIcons;
@property(nonatomic) struct CGSize leadingIconSize; // @synthesize leadingIconSize=_leadingIconSize;
@property(retain, nonatomic) LPImage *leadingIcon; // @synthesize leadingIcon=_leadingIcon;
- (long long)rightAccessoryType;
- (long long)leftAccessoryType;
- (id)rightIcon;
- (id)leftIcon;
- (void)applyToAllCaptions:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL hasAnyContent;
@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *belowBottom;
@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *bottom;
@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *top;
@property(readonly, retain, nonatomic) LPCaptionRowPresentationProperties *aboveTop;
- (id)init;

@end

