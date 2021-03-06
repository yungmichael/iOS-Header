//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BiometricKitIdentity, NSCondition, NSTimer;
@protocol BiometricKitDelegate, OS_dispatch_queue;

@interface BiometricKit : NSObject
{
    BiometricKitIdentity *_enrolledIdentity;
    BiometricKitIdentity *_matchingIdentity;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSTimer *_fingerOffTimer;
    NSCondition *_operationCondition;
    _Bool _fingerOn;
    _Bool _fingerOnStatusState;
    _Bool _fingerOffRequest;
    _Bool _matchingMode;
    _Bool _fingerDetectMode;
    _Bool _cancelOperation;
    _Bool _inUse;
    int _enrollProgressConfigRenderMode;
    id <BiometricKitDelegate> _delegate;
}

+ (long long)getSensorPatchVersion;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)manager;
@property(nonatomic) int enrollProgressConfigRenderMode; // @synthesize enrollProgressConfigRenderMode=_enrollProgressConfigRenderMode;
@property _Bool inUse; // @synthesize inUse=_inUse;
@property(nonatomic) id <BiometricKitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDebugImages:(_Bool)arg1;
- (void)timestampEvent:(unsigned long long)arg1;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2;
- (void)logEventOrCode:(unsigned long long)arg1;
- (float)getModulationRatio;
- (long long)getCalibrationDataState;
- (long long)getSensorCalibrationStatus;
- (long long)getCalBlobVersion;
- (long long)getProvisioningState;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1;
- (id)getSystemProtectedConfiguration;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1;
- (_Bool)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (id)getLogs:(_Bool)arg1 withDetails:(id *)arg2;
- (id)pullDebugImage:(_Bool)arg1 rotated:(_Bool)arg2;
- (id)pullCaptureBuffer;
- (id)getSensorInfo;
- (id)pullCalibrationData;
- (id)getCalibrationDataInfo;
- (id)getTemplateInfo:(id)arg1;
- (id)getMatchPolicyInfo;
- (int)enableBackgroundFdet:(_Bool)arg1;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2;
- (int)removeIdentity:(id)arg1;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2;
- (int)updateIdentity:(id)arg1;
- (int)forceBioLockoutForUser:(unsigned int)arg1;
- (int)forceBioLockout;
- (int)dropUnlockToken;
- (int)resetAppleConnectCounter;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 withOptions:(id)arg2;
- (int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(_Bool *)arg3 withDetails:(id *)arg4;
- (int)getCountersignedStoreToken:(id *)arg1;
- (int)registerStoreToken:(id)arg1;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2;
- (int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)matchIdentities:(id)arg1;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3;
- (int)enroll:(int)arg1 withOptions:(id)arg2;
- (int)enroll:(int)arg1 withAuthToken:(id)arg2;
- (id)getIdentitiesDatabaseHash;
- (id)getIdentityFromUUID:(id)arg1;
- (long long)getMaxIdentityCount:(int)arg1;
- (id)identities:(id)arg1;
- (_Bool)isIdentityEnrolled;
- (id)getIdentitiesDatabaseUUID;
- (long long)getBioLockoutStateForUser:(unsigned int)arg1;
- (long long)getBioLockoutState;
- (id)getProtectedConfiguration;
- (void)cancel;
- (_Bool)isFingerOn;
- (int)detectPresenceWithOptions:(id)arg1;
- (int)detectFingerWithOptions:(id)arg1;
- (int)match:(id)arg1 withOptions:(id)arg2;
- (int)match:(id)arg1;
- (void)simulateFingerTouchMatching:(_Bool)arg1;
- (void)fingerOffTimerFired:(id)arg1;
- (void)delegateStatusMessage:(unsigned int)arg1;
- (_Bool)isTouchIDAvailableWithInfo:(long long *)arg1;
- (_Bool)isTouchIDCapable;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

