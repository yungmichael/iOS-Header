//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/NSXMLParserDelegate-Protocol.h>

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver>
{
    GEOAltitudeManifestReserved *_reserved;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parseManifest:(id)arg1;
- (id)availableRegions;
- (id)tripIdsForRegion:(unsigned int)arg1;
- (id)tourIdsForRegion:(unsigned int)arg1;
- (id)nameForRegion:(unsigned int)arg1;
- (unsigned int)dataVersionForRegion:(unsigned int)arg1;
- (_Bool)hasDataVersionForRegion:(unsigned int)arg1;
- (unsigned int)versionForRegion:(unsigned int)arg1;
- (void)dealloc;
- (_Bool)isValidTourId:(unsigned long long)arg1;
- (_Bool)parseXml:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_reloadManifest;
- (void)commonInit;
- (id)initWithoutObserver;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

