//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreServices/SSVSubscriptionEntitlementsCoordinator.h>

@interface SSVSubscriptionEntitlementsCoordinator (Daemon)
+ (void)_setCachedSubscriptionEntitlementsDictionary:(id)arg1;
+ (void)_notifyClientsOfChangedSubscriptionEntitlements;
+ (id)_cachedSubscriptionEntitlementsPath;
+ (id)_cachedSubscriptionEntitlementsDictionary;
+ (void)setCachedSubscriptionEntitlements:(id)arg1;
+ (void)markCachedSubscriptionEntitlementsAsExpired;
+ (id)cachedSubscriptionEntitlementsExpired:(_Bool *)arg1;
@end

