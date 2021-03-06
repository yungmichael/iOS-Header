//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerLayer.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface ISAVPlayerLayer : AVPlayerLayer
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    CDUnknownBlockType _readyForDisplayChangeHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType readyForDisplayChangeHandler; // @synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler;
- (void)setPlayer:(id)arg1;
- (void)setWrappedPlayer:(id)arg1;
- (void)deferredDealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;

@end

