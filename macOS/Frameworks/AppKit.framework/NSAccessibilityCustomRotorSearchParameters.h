//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAccessibilityCustomRotorItemResult, NSString;

@interface NSAccessibilityCustomRotorSearchParameters : NSObject
{
    NSAccessibilityCustomRotorItemResult *_currentItem;
    long long _searchDirection;
    NSString *_filterString;
}

@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property long long searchDirection; // @synthesize searchDirection=_searchDirection;
@property(retain) NSAccessibilityCustomRotorItemResult *currentItem; // @synthesize currentItem=_currentItem;
- (void)dealloc;

@end

