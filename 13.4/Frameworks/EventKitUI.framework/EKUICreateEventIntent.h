//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

@class CLPlacemark, INObject, NSNumber, NSString;

@interface EKUICreateEventIntent : INIntent
{
}


// Remaining properties
@property(copy, nonatomic) NSNumber *allDay; // @dynamic allDay;
@property(copy, nonatomic) INObject *endDate; // @dynamic endDate;
@property(copy, nonatomic) CLPlacemark *geolocation; // @dynamic geolocation;
@property(copy, nonatomic) NSString *locationAddress; // @dynamic locationAddress;
@property(copy, nonatomic) NSString *locationName; // @dynamic locationName;
@property(copy, nonatomic) INObject *startDate; // @dynamic startDate;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@end

