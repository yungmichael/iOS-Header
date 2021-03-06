//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricsKit/MTDelegatePackage-Protocol.h>

@class MTConfigAMSMetricsDelegate, MTConvenienceEnvironmentDelegate, MTEventRecorderAMSMetricsDelegate, NSString;

@interface MTUIKitStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage>
{
    CDUnknownBlockType _hostAppBlock;
    MTConfigAMSMetricsDelegate *_configDelegate;
    MTEventRecorderAMSMetricsDelegate *_eventRecorderDelegate;
    MTConvenienceEnvironmentDelegate *_environmentDelegate;
}

@property(retain, nonatomic) MTConvenienceEnvironmentDelegate *environmentDelegate; // @synthesize environmentDelegate=_environmentDelegate;
@property(retain, nonatomic) MTEventRecorderAMSMetricsDelegate *eventRecorderDelegate; // @synthesize eventRecorderDelegate=_eventRecorderDelegate;
@property(retain, nonatomic) MTConfigAMSMetricsDelegate *configDelegate; // @synthesize configDelegate=_configDelegate;
@property(copy, nonatomic) CDUnknownBlockType hostAppBlock; // @synthesize hostAppBlock=_hostAppBlock;
- (void).cxx_destruct;
- (id)initWithAMSBag:(id)arg1 containerId:(id)arg2 pageURLBlock:(CDUnknownBlockType)arg3 resourceRevNumBlock:(CDUnknownBlockType)arg4 hostAppBlock:(CDUnknownBlockType)arg5;
- (id)initWithAMSBag:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

