//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TLKUtilities : NSObject
{
}

+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
+ (void)performAnimatableChanges:(CDUnknownBlockType)arg1;
+ (_Bool)recursivelyCheckIfSubviewTapped:(id)arg1 forTappedView:(id)arg2;
+ (id)testImageWithSize:(struct CGSize)arg1 text:(id)arg2;
+ (id)testImageWithSize:(struct CGSize)arg1;
+ (struct UIEdgeInsets)standardInsets;
+ (double)onePixelForCurrentScreenResolution;
+ (_Bool)deviceSupportsRotation;
+ (double)standardTableCellContentInset;
+ (void)dispatchMainIfNecessary:(CDUnknownBlockType)arg1;
+ (void)dispatchAsyncIfNecessary:(CDUnknownBlockType)arg1;

@end

