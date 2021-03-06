//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, TVHighlightView, UIImageView, UILabel;
@protocol TVPasscodeDigitViewDelegate;

@interface TVPasscodeDigitView : UIView
{
    _Bool _showDigit;
    double _fontSize;
    unsigned long long _maxDigitValue;
    id <TVPasscodeDigitViewDelegate> _delegate;
    UIView *_clippingView;
    UILabel *_label;
    TVHighlightView *_highlight;
    UIImageView *_bulletView;
    UIImageView *_upArrowView;
    UIImageView *_downArrowView;
    NSArray *_recognizers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recognizers; // @synthesize recognizers=_recognizers;
@property(retain, nonatomic) UIImageView *downArrowView; // @synthesize downArrowView=_downArrowView;
@property(retain, nonatomic) UIImageView *upArrowView; // @synthesize upArrowView=_upArrowView;
@property(retain, nonatomic) UIImageView *bulletView; // @synthesize bulletView=_bulletView;
@property(retain, nonatomic) TVHighlightView *highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak id <TVPasscodeDigitViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showDigit; // @synthesize showDigit=_showDigit;
@property(nonatomic) unsigned long long maxDigitValue; // @synthesize maxDigitValue=_maxDigitValue;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (id)hiddenDigitImage;
- (id)arrowImage:(_Bool)arg1;
- (void)downGesture:(id)arg1;
- (void)upGesture:(id)arg1;
@property(copy, nonatomic) NSString *text;
- (void)setHighlightProgress:(double)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

