//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NSObject-Protocol.h>

@class NSString;

@protocol NFCReaderSession <NSObject>
@property(copy, nonatomic) NSString *alertMessage;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (void)invalidateSessionWithErrorMessage:(NSString *)arg1;
- (void)invalidateSession;
- (void)beginSession;
@end

