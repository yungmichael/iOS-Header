//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKPasscodeUpgradeFlowController, PKPaymentSetupNavigationController, UIViewController;

@protocol PKPaymentSetupDelegate <NSObject>
- (void)paymentSetupDidFinish:(PKPaymentSetupNavigationController *)arg1;

@optional
- (void)paymentSetupDidExitPasscodeUpgradeWithShouldContinue:(_Bool)arg1 error:(NSError *)arg2;
- (void)paymentSetupRequestPasscodeUpgradeWithVisibleViewController:(UIViewController *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)paymentSetupDidExitPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg1 withShouldContinue:(_Bool)arg2 error:(NSError *)arg3;
- (void)paymentSetupRequestPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg1 withVisibleViewController:(UIViewController *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)paymentSetupDidShowEligibilityIssue;
- (void)paymentSetupDidShowError:(NSError *)arg1;
@end

