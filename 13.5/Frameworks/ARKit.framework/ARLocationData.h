//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARDictionaryCoding-Protocol.h>
#import <ARKit/ARMetadataWrapperCoding-Protocol.h>
#import <ARKit/ARSensorData-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class CLLocation, NSString;

@interface ARLocationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, NSSecureCoding>
{
    double _timestamp;
    CLLocation *_location;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadataWrapper:(id)arg1;
- (id)encodeToMetadataWrapper;
- (id)initWithDictionary:(id)arg1;
- (id)encodeToDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)initWithLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

