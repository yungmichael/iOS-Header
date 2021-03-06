//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray;

@interface PUImportSessionInfo : NSObject
{
    _Bool _importComplete;
    _Bool _importStopped;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_itemsToImport;
    NSMutableArray *_importedItems;
    NSMutableArray *_errorItems;
    long long _completedItemsCount;
}

@property(nonatomic) long long completedItemsCount; // @synthesize completedItemsCount=_completedItemsCount;
@property(retain, nonatomic) NSMutableArray *errorItems; // @synthesize errorItems=_errorItems;
@property(retain, nonatomic) NSMutableArray *importedItems; // @synthesize importedItems=_importedItems;
@property(nonatomic) _Bool importStopped; // @synthesize importStopped=_importStopped;
@property(nonatomic) _Bool importComplete; // @synthesize importComplete=_importComplete;
@property(retain, nonatomic) NSArray *itemsToImport; // @synthesize itemsToImport=_itemsToImport;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;

@end

