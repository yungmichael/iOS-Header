//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying>
{
    NSString *_errorCode;
    NSString *_errorMessage;
    int _resultType;
    NSString *_sourceChannelId;
    struct {
        unsigned int resultType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorMessage;
@property(nonatomic) _Bool hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;

@end

