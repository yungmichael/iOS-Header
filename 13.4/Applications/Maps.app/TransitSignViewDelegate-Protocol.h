//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKExpandingLabel, NSArray, TransitSignView;

@protocol TransitSignViewDelegate <NSObject>
- (void)transitSignView:(TransitSignView *)arg1 incidentButtonTappedForIncidents:(NSArray *)arg2;
- (void)transitSignView:(TransitSignView *)arg1 expandingLabelDidExpand:(MKExpandingLabel *)arg2;
- (void)transitSignViewDidTapClusteredRoutesButton:(TransitSignView *)arg1;
@end

