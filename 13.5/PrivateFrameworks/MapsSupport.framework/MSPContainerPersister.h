//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MSPContainerPersisterDelegate;

@interface MSPContainerPersister : NSObject
{
    id <MSPContainerPersisterDelegate> _delegate;
    long long _duplicatesPolicy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long duplicatesPolicy; // @synthesize duplicatesPolicy=_duplicatesPolicy;
@property(nonatomic) __weak id <MSPContainerPersisterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)eraseWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchStateSnapshotWithCompletion:(CDUnknownBlockType)arg1;

@end

