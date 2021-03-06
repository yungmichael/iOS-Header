//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioSessionMonitor : CSEventMonitor
{
    unsigned long long _audioSessionState;
}

+ (id)sharedInstance;
@property(nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState; // @synthesize audioSessionState=_audioSessionState;
- (void)notifyAduioSessionStateChange:(unsigned long long)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

