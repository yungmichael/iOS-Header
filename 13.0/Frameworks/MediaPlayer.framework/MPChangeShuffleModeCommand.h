//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPChangeShuffleModeCommand : MPRemoteCommand
{
    NSArray *_supportedShuffleTypes;
    long long _currentShuffleType;
}

@property(nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;
- (void).cxx_destruct;
- (id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(_Bool)arg2;
- (id)newCommandEventWithType:(long long)arg1;
- (id)_mediaRemoteCommandInfoOptions;
- (void)setSupportedShuffleTypes:(id)arg1;

@end

