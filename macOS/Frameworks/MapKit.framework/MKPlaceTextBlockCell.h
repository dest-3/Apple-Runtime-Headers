//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class NSString, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceTextBlockCell : MKPlaceSectionRowView
{
    BOOL _constraintsAdded;
    _MKUILabel *_textBlock;
    NSString *_textBlockText;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL constraintsAdded; // @synthesize constraintsAdded=_constraintsAdded;
@property(copy, nonatomic) NSString *textBlockText; // @synthesize textBlockText=_textBlockText;
@property(retain, nonatomic) _MKUILabel *textBlock; // @synthesize textBlock=_textBlock;
@property(copy, nonatomic) CDUnknownBlockType textBlockResizedBlock;
@property(nonatomic, getter=isTextBlockExpanded) BOOL textBlockExpanded;
- (void)updateConstraints;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect)arg1;

@end

