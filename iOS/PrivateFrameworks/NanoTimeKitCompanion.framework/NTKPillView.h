//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface NTKPillView : UIView
{
    NSArray *_pillColors;
    unsigned long long _colorLimitCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long colorLimitCount; // @synthesize colorLimitCount=_colorLimitCount;
@property(copy, nonatomic) NSArray *pillColors; // @synthesize pillColors=_pillColors;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

