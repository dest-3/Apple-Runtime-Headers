//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRCGestureFinger : NSObject
{
    unsigned int _identifier;
    struct CGPoint _location;
    float _pressure;
}

- (int)type;
- (float)pressure;
- (struct CGPoint)location;
- (unsigned int)identifier;
- (id)description;
- (id)initWithIdentifier:(unsigned int)arg1 location:(struct CGPoint)arg2 pressure:(float)arg3;

@end

