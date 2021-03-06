//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MUImageDownsamplingUtilities : NSObject
{
}

+ (double)_maxDimensionOfSize:(struct CGSize)arg1 fittingToArea:(double)arg2;
+ (struct CGSize)_sizeFittingArea:(double)arg1 withSize:(struct CGSize)arg2;
+ (id)_preferredFileExtensionForContentType:(id)arg1;
+ (id)_preferredFileDisplayNameForSourceContent:(id)arg1;
+ (id)_uniqueTemporaryDirectory;
+ (_Bool)_flattenEXIFOrientationOfImage:(id)arg1 toDestination:(id)arg2;
+ (id)_flattenRotation:(_Bool)arg1 withDownsampling:(_Bool)arg2 sourceImage:(id)arg3;
+ (id)_flattenEXIFOrientation:(_Bool)arg1 withDownsampling:(_Bool)arg2 sourceContent:(id)arg3 withUTI:(id)arg4;
+ (void)_shouldFlattenEXIFOrientation:(_Bool *)arg1 andDownsample:(_Bool *)arg2 sourceContent:(id)arg3;
+ (struct CGImageSource *)_newImageSourceWithSourceContent:(id)arg1;
+ (id)_sourceContentType:(id)arg1;

@end

