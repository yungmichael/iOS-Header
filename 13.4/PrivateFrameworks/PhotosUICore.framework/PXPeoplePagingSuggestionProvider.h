//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface PXPeoplePagingSuggestionProvider : NSObject
{
    NSArray *_currentSuggestions;
    NSMutableArray *_unvisitedSuggestions;
    NSMutableArray *_visitedSuggestions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *visitedSuggestions; // @synthesize visitedSuggestions=_visitedSuggestions;
@property(retain, nonatomic) NSMutableArray *unvisitedSuggestions; // @synthesize unvisitedSuggestions=_unvisitedSuggestions;
@property(copy, nonatomic) NSArray *currentSuggestions; // @synthesize currentSuggestions=_currentSuggestions;
- (void)removeAllSuggestions;
- (void)removeSuggestions:(id)arg1;
- (void)appendSuggestionArray:(id)arg1;
- (id)nextSuggestionsWithPageLimit:(long long)arg1;
- (id)previousSuggestions;
- (_Bool)hasPreviousSuggestions;
- (_Bool)hasNextSuggestions;
- (id)init;

@end

