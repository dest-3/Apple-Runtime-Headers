//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject
{
    // Error parsing type: {atomic_flag="_Value"AB}, name: _cancelFlag
    _Bool _cancelRequested;
    PHImageDecoder *_initialDecoder;
    unsigned long _figRequestID;
    struct FigPhotoDecompressionContainer *_figDecompressionContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) struct FigPhotoDecompressionContainer *figDecompressionContainer; // @synthesize figDecompressionContainer=_figDecompressionContainer;
@property(nonatomic) unsigned long figRequestID; // @synthesize figRequestID=_figRequestID;
@property(readonly, nonatomic) PHImageDecoder *initialDecoder; // @synthesize initialDecoder=_initialDecoder;
- (void)dealloc;
@property(readonly, nonatomic) _Bool cancelRequested;
- (void)cancel;
- (id)initWithImageIODecoder:(id)arg1;
- (id)initWithFigRequestID:(unsigned long)arg1 container:(struct FigPhotoDecompressionContainer *)arg2 figDecoder:(id)arg3;

@end

