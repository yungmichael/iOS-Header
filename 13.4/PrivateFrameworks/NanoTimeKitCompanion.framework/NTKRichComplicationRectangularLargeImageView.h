//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationImageView;

@interface NTKRichComplicationRectangularLargeImageView : NTKRichComplicationRectangularBaseView
{
    NTKRichComplicationImageView *_imageView;
    NTKColoringLabel *_headerLabel;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

@end

