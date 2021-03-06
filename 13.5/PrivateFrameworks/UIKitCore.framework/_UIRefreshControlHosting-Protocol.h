//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIRefreshControl, UIScrollView;

@protocol _UIRefreshControlHosting <NSObject>
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
- (void)refreshControl:(UIRefreshControl *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3;
- (void)incrementInsetHeight:(double)arg1;
- (void)decrementInsetHeight:(double)arg1;
@end

