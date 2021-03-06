//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

#import <MediaPlayer/MPPProtobufferCoding-Protocol.h>

@class NSString;

@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    MPMediaPredicate *_conditionPredicate;
    MPMediaPredicate *_thenPredicate;
    MPMediaPredicate *_elsePredicate;
}

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MPMediaPredicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(readonly, copy, nonatomic) MPMediaPredicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(readonly, copy, nonatomic) MPMediaPredicate *conditionPredicate; // @synthesize conditionPredicate=_conditionPredicate;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

