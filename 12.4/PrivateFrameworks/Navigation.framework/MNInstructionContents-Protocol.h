//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;

@protocol MNInstructionContents
@property(nonatomic) _Bool suppressFallback;
@property(readonly, nonatomic) _Bool hasServerContent;
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) _Bool suppressNames;
@property(readonly, nonatomic) long long context;
- (NSArray *)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (NSArray *)instructionWithShorterAlternatives;
- (NSString *)instruction;
- (NSString *)stringForDistance:(double)arg1;
@end

