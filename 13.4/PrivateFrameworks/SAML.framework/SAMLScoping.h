//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SAMLScoping : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(readonly, nonatomic) NSArray *idpList;
@property(readonly, nonatomic) NSString *getComplete;
@property(readonly, nonatomic) NSArray *requesterIds;
@property(readonly, nonatomic) NSNumber *proxyCount;
- (void)addRequesterId:(id)arg1;

@end

