//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface INHelperServiceAccessSpecifier : NSObject
{
    unsigned long long _accessLevel;
    NSString *_associatedAppBundleIdentifier;
}

+ (id)accessSpecifierAppropriateForXPCConnection:(id)arg1;
+ (id)accessSpecifierAppropriateForCurrentProcess;
+ (id)accessSpecifierWithNoAccess;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1;
+ (id)accessSpecifierUnrestricted;
+ (void)initialize;
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // @synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier;
@property(readonly, nonatomic) unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2;

@end

