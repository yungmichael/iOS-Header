//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplicationIcon;

@interface SBAppBlacklistedAlertItem : SBAlertItem
{
    SBApplicationIcon *_icon;
}

- (void).cxx_destruct;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithIcon:(id)arg1;

@end

