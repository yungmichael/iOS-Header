//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol CollectionHeaderActionTypeDelegate;

__attribute__((visibility("hidden")))
@interface CollectionSubHeaderView : UIView
{
    UIView *_contentView;
    UIButton *_sortButton;
    UIButton *_saveButton;
    _Bool _editing;
    id <CollectionHeaderActionTypeDelegate> _delegate;
    unsigned long long _type;
    unsigned long long _sortType;
    double _shrinkFactor;
}

@property(nonatomic) double shrinkFactor; // @synthesize shrinkFactor=_shrinkFactor;
@property(nonatomic) unsigned long long sortType; // @synthesize sortType=_sortType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <CollectionHeaderActionTypeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) double originalHeight;
- (double)_height;
- (void)createEditContent;
- (void)_updateSortButton;
- (void)createSaveContent;
- (void)loadContent;
- (void)contentSizeChanged:(id)arg1;
- (void)_sortAction:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)updateFonts;
- (id)_currentFont;
- (id)initWithType:(unsigned long long)arg1;

@end

