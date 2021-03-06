//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, WorldClockPreferences;

@interface WorldClockManager : NSObject
{
    _Bool _dirty;
    NSMutableArray *_cities;
    WorldClockPreferences *_defaults;
    NSDate *lastModified;
}

+ (id)sharedManagerWithPreferences:(id)arg1;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, nonatomic) NSArray *cities; // @synthesize cities=_cities;
- (void)_notifyNano;
- (void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllCities;
- (void)removeCityAtIndex:(unsigned long long)arg1;
- (void)removeCity:(id)arg1;
- (unsigned long long)addCity:(id)arg1;
- (_Bool)canAddCity;
- (id)cityWithIdUrl:(id)arg1;
- (_Bool)checkIfCitiesModified;
- (id)fixUpCityProperties:(id)arg1;
- (void)pushCityPropertiesToPreferences;
- (void)addDefaultCitiesIfNeeded;
- (id)worldClockCityFromPersistenceDictionary:(id)arg1;
- (id)worldClockCityFromPersistenceArray:(id)arg1;
- (id)worldClockCityFromPersistenceRepresentation:(id)arg1;
- (void)saveCities;
- (void)loadCities;
- (id)initWithPreferences:(id)arg1;

@end

