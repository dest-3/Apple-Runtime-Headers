//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVControlItem.h>

__attribute__((visibility("hidden")))
@interface AVUpdatingControlItem : AVControlItem
{
    CDUnknownBlockType _imageUpdatingBlock;
    CDUnknownBlockType _enabledBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic, getter=_isEnabledBlock, setter=_setEnabledBlock:) CDUnknownBlockType enabledBlock; // @synthesize enabledBlock=_enabledBlock;
@property(copy, nonatomic, getter=_imageUpdatingBlock, setter=_setImageUpdatingBlock:) CDUnknownBlockType imageUpdatingBlock; // @synthesize imageUpdatingBlock=_imageUpdatingBlock;
- (_Bool)isEnabled;
- (id)_privateImage;

@end

