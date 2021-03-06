//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface BlurDarkeningBackgroundView : UIView
{
    UIImageView *_topFilterView;
    UIImageView *_bottomFilterView;
    double _scale;
    _Bool _animatingLayers;
    long long _appearance;
    long long _roundedCornersStyle;
}

+ (id)_topFilterLayerBackgroundColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool animatingLayers; // @synthesize animatingLayers=_animatingLayers;
@property(nonatomic) long long roundedCornersStyle; // @synthesize roundedCornersStyle=_roundedCornersStyle;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
- (id)_roundedCornersResizableImageWithColor:(id)arg1;
- (void)_applyAppearance;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

