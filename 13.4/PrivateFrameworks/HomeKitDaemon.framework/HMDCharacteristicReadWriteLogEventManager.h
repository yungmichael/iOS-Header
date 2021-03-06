//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMDCharacteristicReadWriteLogEventManager : NSObject
{
    HMFUnfairLock *_lock;
    NSMutableDictionary *_consecutiveFailureCountByHMDAccessoryUUID;
    NSMutableDictionary *_timeOfFirstFailureByHMDAccessoryUUID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID; // @synthesize timeOfFirstFailureByHMDAccessoryUUID=_timeOfFirstFailureByHMDAccessoryUUID;
@property(readonly, nonatomic) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID; // @synthesize consecutiveFailureCountByHMDAccessoryUUID=_consecutiveFailureCountByHMDAccessoryUUID;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
- (double)timeIntervalSinceFirstFailureForAccessory:(id)arg1;
- (unsigned long long)consecutiveFailureCountForAccessory:(id)arg1;
- (void)handleSubmittedErrorCode:(long long)arg1 forAccessory:(id)arg2;
- (id)init;

@end

