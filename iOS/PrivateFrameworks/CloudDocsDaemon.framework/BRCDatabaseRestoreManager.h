//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface BRCDatabaseRestoreManager : NSObject
{
    NSURL *_userURL;
    NSURL *_clientDatabaseURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *clientDatabaseURL; // @synthesize clientDatabaseURL=_clientDatabaseURL;
@property(retain, nonatomic) NSURL *userURL; // @synthesize userURL=_userURL;
- (void)restoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithUserURL:(id)arg1;

@end

