//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol _UXSourceSplitViewCursorProvider;

@interface _UXSourceSplitViewFullScreenOverlayContentView : NSView
{
    NSView *_separatorView;
    id <_UXSourceSplitViewCursorProvider> _cursorProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <_UXSourceSplitViewCursorProvider> cursorProvider; // @synthesize cursorProvider=_cursorProvider;
@property(nonatomic) __weak NSView *separatorView; // @synthesize separatorView=_separatorView;
- (id)description;
- (id)hitTest:(struct CGPoint)arg1;
- (void)resetCursorRects;

@end

