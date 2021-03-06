//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSArray, NSMutableOrderedSet;

@interface FCSharedStringIndex : NSObject <NSCopying>
{
    NSMutableOrderedSet *_stringsSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableOrderedSet *stringsSet; // @synthesize stringsSet=_stringsSet;
@property(readonly, nonatomic) NSArray *strings;
- (id)stringForReference:(int)arg1;
- (int)referenceForStringReadOnly:(id)arg1;
- (int)referenceForString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithStrings:(id)arg1;

@end

