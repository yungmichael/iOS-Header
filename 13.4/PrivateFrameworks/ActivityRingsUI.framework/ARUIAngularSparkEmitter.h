//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIAngularSparkEmitter : NSObject
{
    long long _particleCount;
    float _particleLength;
    float _rotationDuration;
    float _angularVelocity;
    // Error parsing type: , name: _startPosition
    float _spawnRate;
    float _midScalePoint;
    // Error parsing type: , name: _thickness
    // Error parsing type: , name: _velocityNoise
    float _firstWindowFinalBirthTime;
    float _firstWindowFinalDeathTime;
    float _secondWindowFinalBirthTime;
    float _secondWindowFinalDeathTime;
}

- (id)updateWithStartTime:(float)arg1 particleCount:(unsigned long long)arg2 bufferOffset:(unsigned long long)arg3;
- (id)updateForTime:(float)arg1;
- (id)generateSparks;
- (id)initWithParticleCount:(unsigned long long)arg1 rotationDuration:(float)arg2 particleLength:(float)arg3;

@end

