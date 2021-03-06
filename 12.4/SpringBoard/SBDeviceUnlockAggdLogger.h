//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBDashBoardExternalEventHandling-Protocol.h"

@class NSString;

@interface SBDeviceUnlockAggdLogger : NSObject <SBDashBoardExternalEventHandling>
{
    _Bool _observeDashBoardEvents;
}

@property(nonatomic, getter=_observeDashBoardEvents, setter=_setObserveDashBoardEvents:) _Bool observeDashBoardEvents; // @synthesize observeDashBoardEvents=_observeDashBoardEvents;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)logUserResetIdleTimer;
- (void)logIdleTimerScreenDimWarning;
- (void)logOrientationAndAccessoryStateForPrefix:(id)arg1;
- (void)logDeviceUnlock;
- (void)logDeviceWake;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

