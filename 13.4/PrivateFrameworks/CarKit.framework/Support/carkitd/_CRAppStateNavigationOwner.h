//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface _CRAppStateNavigationOwner : NSObject
{
    NSXPCConnection *_connection;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToOwner:(id)arg1;
- (id)description;

@end

