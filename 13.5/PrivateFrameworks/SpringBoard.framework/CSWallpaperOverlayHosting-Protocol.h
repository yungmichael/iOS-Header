//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIView;
@protocol SBUIWallpaperOverlay;

@protocol CSWallpaperOverlayHosting <NSObject>
- (UIView<SBUIWallpaperOverlay> *)relinquishHostingOfWallpaperOverlay;
- (void)startHostingWallpaperOverlay:(UIView<SBUIWallpaperOverlay> *)arg1;
@end

