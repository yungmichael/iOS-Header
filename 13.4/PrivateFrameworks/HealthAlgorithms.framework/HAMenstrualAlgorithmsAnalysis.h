//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAMenstrualAlgorithmsStats, NSArray;

@interface HAMenstrualAlgorithmsAnalysis : NSObject
{
    NSArray *_menstruationPredictions;
    NSArray *_fertilityPredictions;
    HAMenstrualAlgorithmsStats *_stats;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HAMenstrualAlgorithmsStats *stats; // @synthesize stats=_stats;
@property(retain, nonatomic) NSArray *fertilityPredictions; // @synthesize fertilityPredictions=_fertilityPredictions;
@property(retain, nonatomic) NSArray *menstruationPredictions; // @synthesize menstruationPredictions=_menstruationPredictions;

@end

