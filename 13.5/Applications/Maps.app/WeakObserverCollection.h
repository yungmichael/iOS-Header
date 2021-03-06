//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, Protocol;

__attribute__((visibility("hidden")))
@interface WeakObserverCollection : NSObject
{
    Protocol *_protocol;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) _Bool hasObservers;
- (id)initWithProtocol:(id)arg1;

@end

