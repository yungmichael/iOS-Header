//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDelegateToken, NSError, NSString;

@interface ICDelegationConsumerServiceSessionRequestResult : NSObject
{
    ICDelegateToken *_delegateToken;
    NSError *_resultError;
    NSString *_storefrontIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(readonly, copy, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(readonly, copy, nonatomic) ICDelegateToken *delegateToken; // @synthesize delegateToken=_delegateToken;
- (id)initWithDelegateToken:(id)arg1 storefrontIdentifier:(id)arg2 resultError:(id)arg3;

@end

