//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INSpeakableString, NSArray, NSDate, NSString;

@interface INReservation : NSObject <NSCopying, NSSecureCoding>
{
    INSpeakableString *_itemReference;
    NSString *_reservationNumber;
    NSDate *_bookingTime;
    long long _reservationStatus;
    NSString *_reservationHolderName;
    NSArray *_actions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *reservationHolderName; // @synthesize reservationHolderName=_reservationHolderName;
@property(readonly, nonatomic) long long reservationStatus; // @synthesize reservationStatus=_reservationStatus;
@property(readonly, copy, nonatomic) NSDate *bookingTime; // @synthesize bookingTime=_bookingTime;
@property(readonly, copy, nonatomic) NSString *reservationNumber; // @synthesize reservationNumber=_reservationNumber;
@property(readonly, copy, nonatomic) INSpeakableString *itemReference; // @synthesize itemReference=_itemReference;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6;

@end

