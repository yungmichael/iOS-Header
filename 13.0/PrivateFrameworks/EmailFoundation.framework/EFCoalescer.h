//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EFCoalescer : NSObject
{
    CDUnknownBlockType _coalescerAction;
    struct os_unfair_lock_s _lock;
    id _coalescedValue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescer;
}

- (void).cxx_destruct;
- (void)_handleCoalesceEvent;
- (void)coalesceValue:(id)arg1;
- (void)dealloc;
- (id)initWithCoalescingAction:(CDUnknownBlockType)arg1;

@end

