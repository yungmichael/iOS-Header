//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/FIAPPlugin-Protocol.h>

@class NSString, SGDataDetectorDissector, SGURLDissector;

@interface SGURLPlugin : NSObject <FIAPPlugin>
{
    SGURLDissector *_urlDissector;
    SGDataDetectorDissector *_ddDissector;
}

- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)extractURLsFromTextPropertiesOfItem:(id)arg1 handle:(id)arg2;
- (id)extractURLsFromAttributesOfItem:(id)arg1 handle:(id)arg2;
- (_Bool)_shouldProcessSearchableItem:(id)arg1;
- (id)processSearchableItem:(id)arg1;
- (id)setup;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

