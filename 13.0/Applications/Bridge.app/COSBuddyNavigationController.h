//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSRootController.h>

@protocol COSBuddyNavigationControllerDelegate;

@interface COSBuddyNavigationController : PSRootController
{
    id <COSBuddyNavigationControllerDelegate> _buddyNavDelegate;
}

@property(nonatomic) id <COSBuddyNavigationControllerDelegate> buddyNavDelegate; // @synthesize buddyNavDelegate=_buddyNavDelegate;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

