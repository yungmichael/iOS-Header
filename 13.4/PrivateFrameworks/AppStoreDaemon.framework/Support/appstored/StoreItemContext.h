//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, TimeWindow;

@interface StoreItemContext : NSObject
{
    NSString *_bundleID;
    NSString *_installedVariantID;
    NSNumber *_installedVersionID;
    TimeWindow *_optimalDownloadWindow;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TimeWindow *optimalDownloadWindow; // @synthesize optimalDownloadWindow=_optimalDownloadWindow;
@property(copy, nonatomic) NSNumber *installedVersionID; // @synthesize installedVersionID=_installedVersionID;
@property(copy, nonatomic) NSString *installedVariantID; // @synthesize installedVariantID=_installedVariantID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;

@end

