//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityKit/NSObject-Protocol.h>

@class AXKApplicationController, AXKWorkspaceManager, NSArray;

@protocol AXKWorkspaceManagerDelegate <NSObject>

@optional
- (void)workspaceManagerDidUpdateMenuExtraInformation:(AXKWorkspaceManager *)arg1;
- (void)workspaceManager:(AXKWorkspaceManager *)arg1 didUpdateFocusedApplicationController:(AXKApplicationController *)arg2;
- (void)workspaceManager:(AXKWorkspaceManager *)arg1 didUpdateFrontmostApplicationController:(AXKApplicationController *)arg2;
- (void)workspaceManager:(AXKWorkspaceManager *)arg1 didUpdateRunningApplications:(NSArray *)arg2;
@end

