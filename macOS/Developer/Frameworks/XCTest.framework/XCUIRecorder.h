//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCSourceCodeRecording;

@interface XCUIRecorder : NSObject
{
    int _processPID;
    unsigned long long _language;
    XCSourceCodeRecording *_recording;
    CDUnknownBlockType _block;
    BOOL _isInvalid;
}

+ (id)deviceRecorderWithConnection:(id)arg1;
+ (id)macRecorder;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain) XCSourceCodeRecording *recording; // @synthesize recording=_recording;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property unsigned long long language; // @synthesize language=_language;
@property int processPID; // @synthesize processPID=_processPID;
@property(readonly, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)recordTargetProcessPID:(int)arg1 forLanguage:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)recordTargetProcessPID:(int)arg1 forLanguage:(unsigned long long)arg2 reservedNames:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (int)launchRecorderProcess;
- (void)launchRecorderProcessWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)requiresPermissionForAccessibilityAPIs;
- (id)initWithConnection:(id)arg1;
@property(readonly) BOOL loggingEnabled;

@end

