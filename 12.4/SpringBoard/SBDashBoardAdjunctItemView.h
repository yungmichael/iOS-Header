//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol PLPlatter, SBDashBoardAdjunctItemHosting;

@interface SBDashBoardAdjunctItemView : UIView
{
    long long _recipe;
    unsigned long long _options;
    UIView<PLPlatter> *_platterView;
    _Bool _isContentHostPlatterView;
    NSString *_groupName;
    id <SBDashBoardAdjunctItemHosting> _contentHost;
    struct CGSize _sizeToMimic;
}

@property(nonatomic) __weak id <SBDashBoardAdjunctItemHosting> contentHost; // @synthesize contentHost=_contentHost;
@property(nonatomic) struct CGSize sizeToMimic; // @synthesize sizeToMimic=_sizeToMimic;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (void)_setPlatterView:(id)arg1;
- (void)_updateSizeToMimic;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;

@end

