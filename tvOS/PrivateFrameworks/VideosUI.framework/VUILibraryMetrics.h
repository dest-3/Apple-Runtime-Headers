//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUILibraryMetrics : NSObject
{
}

+ (id)pageStringForLibraryCategoryType:(long long)arg1;
+ (id)pageStringForLibraryShelfType:(long long)arg1;
+ (id)pageStringForLibraryCellType:(long long)arg1;
+ (id)getMediaEntityContentType:(id)arg1;
+ (id)getMediaItemContentType:(id)arg1;
+ (id)pageStringForEntityType:(id)arg1;
+ (void)recordPageEventWithPageId:(id)arg1 andPageType:(id)arg2;
+ (void)recordPageEventWithPageType:(id)arg1;
+ (void)recordClickOnMediaEntity:(id)arg1;
+ (void)recordPlayOfMediaItem:(id)arg1;
+ (void)recordPlayOfMediaEntity:(id)arg1 isLaunchingExtras:(_Bool)arg2;

@end

