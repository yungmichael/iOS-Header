//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KeyboardAvoidingView, MapsThemeLabel, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface NoRecentlySearchTableViewCell : UITableViewCell
{
    KeyboardAvoidingView *_keyboardAvoidingView;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_contentLabelTopConstraint;
    MapsThemeLabel *_titleLabel;
    MapsThemeLabel *_contentLabel;
}

+ (id)identifier;
@property(retain, nonatomic) MapsThemeLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MapsThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *contentLabelTopConstraint; // @synthesize contentLabelTopConstraint=_contentLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) KeyboardAvoidingView *keyboardAvoidingView; // @synthesize keyboardAvoidingView=_keyboardAvoidingView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHeightConstraint:(double)arg1 withPriority:(float)arg2;
- (void)_contentSizeCategoryDidChange;
- (void)clearHeightConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

