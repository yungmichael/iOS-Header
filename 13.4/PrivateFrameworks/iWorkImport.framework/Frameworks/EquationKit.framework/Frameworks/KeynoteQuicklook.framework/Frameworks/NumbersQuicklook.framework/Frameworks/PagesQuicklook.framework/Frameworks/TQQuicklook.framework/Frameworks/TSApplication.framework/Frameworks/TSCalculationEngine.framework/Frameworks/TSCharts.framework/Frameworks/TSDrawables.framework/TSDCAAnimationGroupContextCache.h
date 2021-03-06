//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSDrawables/TSDCAAnimationContextCache.h>

@class NSArray;

@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache
{
    NSArray *_animations;
    NSArray *_animationContextCaches;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *animationContextCaches; // @synthesize animationContextCaches=_animationContextCaches;
@property(readonly, nonatomic) NSArray *animations; // @synthesize animations=_animations;
- (double)p_groupTimingFactorAtTime:(double)arg1;
- (id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (id)bestAnimationContextCacheForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)initWithAnimation:(id)arg1;

@end

