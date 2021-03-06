//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class NSString, SBSServiceFacilityClient;
@protocol OS_dispatch_queue;

@interface SBSAbstractFacilityService : NSObject <BSInvalidatable>
{
    SBSServiceFacilityClient *_client;
}

+ (Class)serviceFacilityClientClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, nonatomic) SBSServiceFacilityClient *client;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

