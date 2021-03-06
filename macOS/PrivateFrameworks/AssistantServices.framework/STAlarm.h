//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssistantServices/STSiriModelObject.h>

#import <AssistantServices/NSCopying-Protocol.h>

@class NSString;

@interface STAlarm : STSiriModelObject <NSCopying>
{
    BOOL _enabled;
    long long _daysOfWeek;
    long long _hourOfDay;
    long long _minuteOfHour;
    NSString *_label;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) long long minuteOfHour; // @synthesize minuteOfHour=_minuteOfHour;
@property(nonatomic) long long hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property(nonatomic) long long daysOfWeek; // @synthesize daysOfWeek=_daysOfWeek;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

