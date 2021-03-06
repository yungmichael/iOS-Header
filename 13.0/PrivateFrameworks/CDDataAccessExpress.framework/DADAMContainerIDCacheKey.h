//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CDDataAccessExpress/NSCopying-Protocol.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>
{
    NSString *_accountID;
    long long _dataclass;
}

@property(readonly, nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2;

@end

