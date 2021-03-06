//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSCoverSheetViewControllerObserver-Protocol.h>
#import <SpringBoard/CSExternalLockProviding-Protocol.h>

@class NSString, SBLockScreenManager;
@protocol BSInvalidatable, SBSoftLockoutControllerDelegate;

@interface SBSoftLockoutController : NSObject <CSExternalLockProviding, CSCoverSheetViewControllerObserver>
{
    SBLockScreenManager *_lockScreenManager;
    unsigned long long _desiredBiometricLockoutState;
    id <BSInvalidatable> _passcodeRequiredAssertion;
    id <SBSoftLockoutControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SBSoftLockoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_clearPasscodeRequiredAssertion;
- (void)_createPasscodeRequiredAssertion;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg1;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (_Bool)unlockFromSource:(int)arg1;
@property(readonly, nonatomic) _Bool showPasscode;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
- (void)reload;
- (void)dealloc;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1 lockScreenManager:(id)arg2;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

