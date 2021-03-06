//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

#import "ApplicationRepairDelegate-Protocol.h"

@class ASDRepairOptions, NSString;
@protocol ApplicationRepair;

@interface RepairApplicationTask : Task <ApplicationRepairDelegate>
{
    id <ApplicationRepair> _applicationRepair;
    ASDRepairOptions *_options;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)repair:(id)arg1 needsToReleaseBlockingCallerWithReason:(id)arg2;
- (void)repair:(id)arg1 wantsToRelaunchApplication:(id)arg2;
- (void)main;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

