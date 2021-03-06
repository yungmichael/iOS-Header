//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface AMSCardRegistrationResult : NSObject
{
    NSData *_cardData;
    NSURL *_brokerURL;
    NSURL *_paymentServicesURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(readonly, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(readonly, nonatomic) NSData *cardData; // @synthesize cardData=_cardData;
- (id)initWithCardRegistrationResponse:(id)arg1;

@end

