//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NUIWidgetGridView;
@protocol NUIWidgetGridViewItem;

@protocol NUIWidgetGridViewCell
@property(readonly, nonatomic) unsigned long long index;
- (CDStruct_c3b9c2ee)donatableSpaceAllowRemeasure:(_Bool)arg1;
- (CDStruct_c3b9c2ee)donatableSpace;
- (id)initWithWidgetGridView:(NUIWidgetGridView *)arg1 item:(id <NUIWidgetGridViewItem>)arg2 index:(unsigned long long)arg3;
@end

