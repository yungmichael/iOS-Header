//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@protocol WFBooleanStateSetting <NSObject>
- (void)setState:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getStateWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
@end

