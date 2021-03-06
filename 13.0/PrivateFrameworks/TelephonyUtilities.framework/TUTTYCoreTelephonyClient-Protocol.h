//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCoreTelephonyClient-Protocol.h>

@class NSUUID;

@protocol TUTTYCoreTelephonyClient <TUCoreTelephonyClient>
- (_Bool)isTTYSoftwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isTTYSoftwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isTTYSoftwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isTTYHardwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isTTYHardwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isTTYHardwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isTTYSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isTTYEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (_Bool)isRTTSupportedForSubscriptionUUID:(NSUUID *)arg1;
@end

