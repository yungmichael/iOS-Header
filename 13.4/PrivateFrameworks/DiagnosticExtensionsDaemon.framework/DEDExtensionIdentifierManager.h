//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving>
{
    NSMutableDictionary *_identifierTable;
}

+ (id)log;
+ (id)archivedClasses;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *identifierTable; // @synthesize identifierTable=_identifierTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isKnownIdentifier:(id)arg1;
- (id)allIdentifiers;
- (void)revokeIdentifier:(id)arg1;
- (id)knownIdentifiersForExtensionIdentifier:(id)arg1;
- (id)identifierForExtensionIdentifier:(id)arg1;
- (id)initWithExtensionIdentifiers:(id)arg1;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

