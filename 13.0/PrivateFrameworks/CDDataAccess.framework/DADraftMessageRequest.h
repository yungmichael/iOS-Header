//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CDDataAccess/DAMailboxRequest.h>

@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest
{
    _Bool _send;
    DAMailMessage *_message;
}

@property(nonatomic) _Bool send; // @synthesize send=_send;
@property(retain, nonatomic) DAMailMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRequestType:(int)arg1 message:(id)arg2 send:(_Bool)arg3;

@end

