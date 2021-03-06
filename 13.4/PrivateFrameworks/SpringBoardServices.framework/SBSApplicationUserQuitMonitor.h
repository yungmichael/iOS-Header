//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSApplicationUserQuitMonitorServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue, SBSApplicationUserQuitMonitorDelegate;

@interface SBSApplicationUserQuitMonitor : NSObject <SBSApplicationUserQuitMonitorServerToClientInterface>
{
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    id <SBSApplicationUserQuitMonitorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_connectionQueue_invalidate;
- (void)_connectionQueue_setupAndActivate;
- (oneway void)userClosedLastSceneOfApplicationWithBundleID:(id)arg1;
- (void)invalidate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

