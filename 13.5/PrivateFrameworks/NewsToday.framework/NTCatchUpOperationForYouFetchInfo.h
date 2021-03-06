//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NSCopying-Protocol.h>

@class NSDictionary;

@interface NTCatchUpOperationForYouFetchInfo : NSObject <NSCopying>
{
    _Bool _attemptedCachedOnly;
    NSDictionary *_feedContextByFeedID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *feedContextByFeedID; // @synthesize feedContextByFeedID=_feedContextByFeedID;
@property(readonly, nonatomic) _Bool attemptedCachedOnly; // @synthesize attemptedCachedOnly=_attemptedCachedOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttemptedCachedOnly:(_Bool)arg1 feedContextByFeedID:(id)arg2;
- (id)init;

@end

