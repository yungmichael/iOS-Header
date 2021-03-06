//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@protocol FCTagProviding, FRFollowChannelActivityDelegate;

@interface FRFollowChannelActivity : UIActivity
{
    _Bool _isSubscribed;
    id <FCTagProviding> _tag;
    id <FRFollowChannelActivityDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FRFollowChannelActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(retain, nonatomic) id <FCTagProviding> tag; // @synthesize tag=_tag;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)initWithTag:(id)arg1;

@end

