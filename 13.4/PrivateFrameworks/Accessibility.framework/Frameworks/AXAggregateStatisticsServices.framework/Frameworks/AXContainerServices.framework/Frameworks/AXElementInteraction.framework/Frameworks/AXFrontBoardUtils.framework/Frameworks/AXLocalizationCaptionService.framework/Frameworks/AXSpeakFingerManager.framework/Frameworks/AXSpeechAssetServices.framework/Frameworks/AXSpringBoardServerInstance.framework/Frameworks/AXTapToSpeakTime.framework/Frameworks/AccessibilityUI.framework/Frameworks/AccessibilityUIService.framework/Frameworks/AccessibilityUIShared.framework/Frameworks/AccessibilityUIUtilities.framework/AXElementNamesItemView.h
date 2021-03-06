//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface AXElementNamesItemView : UIView
{
    UILabel *_label;
    UIView *_backgroundView;
    UIImageView *_backgroundMaskView;
    long long _labelPosition;
    struct CGSize _forcedLabelContainerSize;
    struct CGSize _labelContainerSize;
    struct CGPoint _arrowTipLocation;
    struct CGRect _elementFrame;
    struct CGRect _containerBounds;
    struct CGRect _labelContainerFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint arrowTipLocation; // @synthesize arrowTipLocation=_arrowTipLocation;
@property(nonatomic) struct CGSize labelContainerSize; // @synthesize labelContainerSize=_labelContainerSize;
@property(nonatomic) struct CGSize forcedLabelContainerSize; // @synthesize forcedLabelContainerSize=_forcedLabelContainerSize;
@property(nonatomic) struct CGRect labelContainerFrame; // @synthesize labelContainerFrame=_labelContainerFrame;
@property(nonatomic) long long labelPosition; // @synthesize labelPosition=_labelPosition;
@property(readonly, nonatomic) struct CGRect containerBounds; // @synthesize containerBounds=_containerBounds;
@property(readonly, nonatomic) struct CGRect elementFrame; // @synthesize elementFrame=_elementFrame;
- (id)_newBackgroundImage;
- (void)layoutSubviews;
- (double)_outlineWidth;
- (double)_cornerRadius;
- (double)_arrowHeight;
- (_Bool)_usesExtendedArrow;
- (_Bool)_usesArrow;
- (_Bool)_arrowPointsDown;
- (void)_updateFromLabelContainerFrame;
- (void)_updateFromMainProperties;
- (struct CGRect)_validateLabelContainerFrame:(struct CGRect)arg1;
- (_Bool)_shouldAllowLongArrows;
- (void)_updateLabelContainerSize;
- (struct CGRect)_elementFrameAdjustedForBounds;
- (struct CGRect)_collisionFrameForArrow;
- (_Bool)collidesWithView:(id)arg1;
@property(readonly, nonatomic) _Bool hasExtendedArrow;
@property(readonly, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 elementFrame:(struct CGRect)arg2 containerBounds:(struct CGRect)arg3 styleProvider:(id)arg4;

@end

