//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKAvailabilityUtilities : NSObject
{
}

+ (long long)_orderForType:(long long)arg1;
+ (_Bool)showTypeAsBusy:(long long)arg1;
+ (_Bool)spansIncludeBusyPeriod:(id)arg1;
+ (long long)summarizedAvailabilityTypeForSpans:(id)arg1;
+ (id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3;
+ (id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2;
+ (int)leastAvailabileFreeBusyTypeForArray:(id)arg1;
+ (int)CALFreeBusyTypeFromEKAvailType:(long long)arg1;

@end

