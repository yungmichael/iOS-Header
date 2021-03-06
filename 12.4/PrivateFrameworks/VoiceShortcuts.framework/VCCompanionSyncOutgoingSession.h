//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcuts/VCCompanionSyncSession.h>

@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession
{
    NSObject<OS_dispatch_queue> *_changesIsolationQueue;
    NSMutableArray *_mutablePendingChanges;
    NSMutableArray *_mutableSentChanges;
}

@property(readonly, nonatomic) NSMutableArray *mutableSentChanges; // @synthesize mutableSentChanges=_mutableSentChanges;
@property(readonly, nonatomic) NSMutableArray *mutablePendingChanges; // @synthesize mutablePendingChanges=_mutablePendingChanges;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *changesIsolationQueue; // @synthesize changesIsolationQueue=_changesIsolationQueue;
- (void).cxx_destruct;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)markChangeAsSent:(id)arg1;
- (id)nextPendingChange;
@property(readonly, nonatomic) NSArray *syncedChanges;
@property(readonly, nonatomic) NSArray *pendingChanges;
- (long long)sessionType;
- (id)initWithSYSession:(id)arg1 changeSetToSync:(id)arg2;

@end

