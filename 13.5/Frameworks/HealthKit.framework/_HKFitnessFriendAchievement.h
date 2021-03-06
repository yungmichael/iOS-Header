//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID;

@interface _HKFitnessFriendAchievement : HKSample <NSCopying>
{
    NSUUID *_friendUUID;
    NSString *_templateUniqueName;
    NSDate *_completedDate;
    NSNumber *_value;
}

+ (_Bool)supportsSecureCoding;
+ (id)achievementWithTemplateUniqueName:(id)arg1 completedDate:(id)arg2 value:(id)arg3 friendUUID:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSDate *completedDate; // @synthesize completedDate=_completedDate;
@property(retain, nonatomic) NSString *templateUniqueName; // @synthesize templateUniqueName=_templateUniqueName;
@property(retain, nonatomic) NSUUID *friendUUID; // @synthesize friendUUID=_friendUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

