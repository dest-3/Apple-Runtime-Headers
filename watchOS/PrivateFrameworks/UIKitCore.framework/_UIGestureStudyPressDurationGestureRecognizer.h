//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIGestureStudyPressDurationGestureRecognizer : UIGestureRecognizer
{
    float _allowableMovement;
    float _maxObservedTouchForce;
    double _startTimestamp;
    struct CGPoint _originalLocation;
}

@property(nonatomic) float maxObservedTouchForce; // @synthesize maxObservedTouchForce=_maxObservedTouchForce;
@property(nonatomic) struct CGPoint originalLocation; // @synthesize originalLocation=_originalLocation;
@property(nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(nonatomic) float allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(readonly, nonatomic) float movement;
@property(readonly, nonatomic) double duration;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)reset;
@property(readonly, nonatomic) _Bool hasForce;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)movementExceededLimit:(float)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

