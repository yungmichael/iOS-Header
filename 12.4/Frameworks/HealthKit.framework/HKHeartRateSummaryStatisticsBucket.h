//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSMutableIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding>
{
    NSMutableIndexSet *_heartRatesInBeatsPerMinute;
    long long _bucketIndex;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSIndexSet *heartRatesInBeatsPerMinute; // @synthesize heartRatesInBeatsPerMinute=_heartRatesInBeatsPerMinute;
@property(readonly, nonatomic) long long bucketIndex; // @synthesize bucketIndex=_bucketIndex;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addHeartRateInBeatsPerMinute:(long long)arg1;
- (id)initWithBucketIndex:(long long)arg1;

@end

