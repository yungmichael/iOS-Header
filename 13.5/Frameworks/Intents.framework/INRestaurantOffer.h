//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantOfferExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRestaurantOffer : NSObject <INRestaurantOfferExport, NSSecureCoding, NSCopying>
{
    NSString *_offerTitleText;
    NSString *_offerDetailText;
    NSString *_offerIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(copy, nonatomic) NSString *offerDetailText; // @synthesize offerDetailText=_offerDetailText;
@property(copy, nonatomic) NSString *offerTitleText; // @synthesize offerTitleText=_offerTitleText;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

