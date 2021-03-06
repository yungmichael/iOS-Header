//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistoryLoaderDelegate-Protocol.h>

@class NSArray, WBSHistoryDeletionPlan;
@protocol WBSHistoryStore;

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveVisits:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveItems:(NSArray *)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id <WBSHistoryStore>)arg1;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id <WBSHistoryStore>)arg1;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;

@optional
- (_Bool)historyStoreShouldScheduleMaintenance:(id <WBSHistoryStore>)arg1;
@end

