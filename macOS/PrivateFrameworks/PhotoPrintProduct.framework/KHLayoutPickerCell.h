//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoPrintProduct/KHPickerCell.h>

#import <PhotoPrintProduct/KHLayoutThumbnailerDelegate-Protocol.h>

@class KHLayout, KHTreatment, NSString, UXView;

@interface KHLayoutPickerCell : KHPickerCell <KHLayoutThumbnailerDelegate>
{
    BOOL _leftFacing;
    KHLayout *_layoutObject;
    KHTreatment *_treatment;
    UXView *_selectionView;
    struct CGRect _thumbRect;
}

- (void).cxx_destruct;
@property(retain) UXView *selectionView; // @synthesize selectionView=_selectionView;
@property struct CGRect thumbRect; // @synthesize thumbRect=_thumbRect;
@property BOOL leftFacing; // @synthesize leftFacing=_leftFacing;
@property(retain) KHTreatment *treatment; // @synthesize treatment=_treatment;
@property(retain, nonatomic) KHLayout *layoutObject; // @synthesize layoutObject=_layoutObject;
- (BOOL)accessibilityPerformPress;
- (void)renderImage;
- (void)thumbnailerCompleted:(id)arg1;
- (void)layoutThumbnailerCompletedOnMain:(id)arg1;
- (void)_renderImage;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

