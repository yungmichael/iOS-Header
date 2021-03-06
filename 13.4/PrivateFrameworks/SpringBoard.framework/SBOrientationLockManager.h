//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface SBOrientationLockManager : NSObject
{
    long long _userLockedOrientation;
    long long _previousLockedOrientation;
    struct __CFRunLoopObserver *_runLoopObserver;
    NSMutableSet *_lockOverrideReasons;
    NSMutableDictionary *_shimmedDeviceOrientationAssertions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_handler_runLoopObserverDispose;
- (void)_setupRunLoopObserverIfNecessaryForOrientation:(long long)arg1 andInitialLockState:(_Bool)arg2;
- (void)_updateLockStateWithOrientation:(long long)arg1 forceUpdateHID:(_Bool)arg2 changes:(CDUnknownBlockType)arg3;
- (void)_updateLockStateWithChanges:(CDUnknownBlockType)arg1;
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (_Bool)lockOverrideEnabled;
- (void)_endShimmingForReason:(id)arg1;
- (void)_beginShimmingForReason:(id)arg1;
- (void)enableLockOverrideForReason:(id)arg1 forceOrientation:(long long)arg2;
- (void)enableLockOverrideForReason:(id)arg1 suggestOrientation:(long long)arg2;
- (void)setLockOverrideEnabled:(_Bool)arg1 forReason:(id)arg2;
- (void)_removeLockOverrideReason:(id)arg1;
- (void)_addLockOverrideReason:(id)arg1 orientation:(long long)arg2 force:(_Bool)arg3;
- (long long)userLockOrientation;
- (long long)deviceOrientationAsFarAsAppsAreConcerned;
- (long long)effectiveLockedOrientation;
- (_Bool)isUserLocked;
- (_Bool)isEffectivelyLocked;
- (void)unlock;
- (void)lock:(long long)arg1;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)restoreStateFromPrefs;

@end

