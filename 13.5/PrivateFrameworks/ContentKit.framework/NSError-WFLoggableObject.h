//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

#import <ContentKit/WFLoggableObject-Protocol.h>

@class NSDictionary;

@interface NSError (WFLoggableObject) <WFLoggableObject>
+ (id)userCancelledError;
+ (id)wfUnsupportedUserInterfaceError;
@property(readonly, nonatomic) NSDictionary *propertiesForEventLogging;
- (_Bool)wf_isUserCancelledError;
@end

