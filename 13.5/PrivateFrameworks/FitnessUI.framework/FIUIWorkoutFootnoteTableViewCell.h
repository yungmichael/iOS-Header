//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface FIUIWorkoutFootnoteTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    UIView *_dividerView;
    NSString *_titleText;
    NSString *_footnoteText;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *footnoteText; // @synthesize footnoteText=_footnoteText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

