//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNAssistantID : NSObject
{
}

+ (id)externalIdentifierFromAssistantID:(id)arg1;
+ (id)assistantIDFromExternalIdentifier:(id)arg1;
+ (id)groupIDFromAssistantID:(id)arg1;
+ (id)containerIDFromAssistantID:(id)arg1;
+ (id)contactIDFromAssistantID:(id)arg1;
+ (id)assistantIDFromGroup:(id)arg1;
+ (id)assistantIDFromContainer:(id)arg1;
+ (id)assistantIDFromContact:(id)arg1;
+ (id)assistantIDFromContactID:(id)arg1;
+ (id)databaseID;
+ (id)assistantIDOfType:(id)arg1 recordID:(int)arg2 databaseID:(id)arg3 identifier:(id)arg4;

@end

