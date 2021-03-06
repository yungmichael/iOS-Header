//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableAttribute.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface INCodableEnumAttribute : INCodableAttribute <NSSecureCoding>
{
    NSDictionary *_valuesByIndex;
    NSString *_enumName;
    NSArray *_enumValues;
    long long _type;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *enumValues; // @synthesize enumValues=_enumValues;
@property(copy, nonatomic) NSString *enumName; // @synthesize enumName=_enumName;
- (void).cxx_destruct;
- (id)valueForIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

