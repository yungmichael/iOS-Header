//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_xpc_object;

@interface BSXPCBundle : NSObject <BSDescriptionProviding>
{
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_executablePath;
    NSDictionary *_infoDictionary;
    NSObject<OS_xpc_object> *_xpcBundle;
}

+ (id)bundleWithXPCBundle:(id)arg1;
+ (id)bundleWithExecutablePath:(id)arg1;
+ (id)bundleWithPath:(id)arg1;
+ (id)bundleForPID:(int)arg1;
+ (id)mainBundle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcBundle; // @synthesize xpcBundle=_xpcBundle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(readonly, copy, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithXPCBundle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

