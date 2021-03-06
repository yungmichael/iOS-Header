//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDStoreKitServiceProtocol-Protocol.h"
#import "InAppDownloadTaskProgressDelegate-Protocol.h"
#import "StoreKitStorefrontObserver-Protocol.h"

@class AMSURLSession, NSMutableDictionary, NSOperationQueue, NSString, StoreKitClient;
@protocol ASDStoreKitClientProtocol;

@interface StoreKitServiceConnection : NSObject <StoreKitStorefrontObserver, InAppDownloadTaskProgressDelegate, ASDStoreKitServiceProtocol>
{
    StoreKitClient *_client;
    id <ASDStoreKitClientProtocol> _remoteObject;
    AMSURLSession *_urlSession;
    NSOperationQueue *_downloadQueue;
    NSOperationQueue *_paymentQueue;
    NSOperationQueue *_productRequestQueue;
    NSMutableDictionary *_pendingDownloads;
}

- (void).cxx_destruct;
- (id)_processDownloadsForTransactions:(id)arg1;
- (_Bool)_isValidForReview;
- (id)_errorToASDError:(id)arg1;
- (_Bool)_allowClientOverride;
- (_Bool)_hasArcadeEntitlement;
- (void)repairArcadeApp;
- (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)registerArcadeAppWithRandomFromLib:(id)arg1 randomFromLibLength:(unsigned int)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)downloadTask:(id)arg1 updatedProgress:(double)arg2 timeRemaining:(double)arg3;
- (void)storefront:(id)arg1 changed:(id)arg2;
- (void)checkForMessages;
- (void)storefrontWithReplyBlock:(CDUnknownBlockType)arg1;
- (void)renewReceiptWithOptions:(id)arg1 client:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)deleteContentForProductID:(id)arg1;
- (void)resumeDownloadWithID:(id)arg1;
- (void)pauseDownloadWithID:(id)arg1;
- (void)cancelDownloadWithID:(id)arg1;
- (void)addDownloadWithID:(id)arg1;
- (void)restoreCompletedTransactionsForUsername:(id)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)restoreCompletedTransactionsToQueue:(id)arg1 forUsername:(id)arg2 withClient:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;
- (void)finishPaymentWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)finishPaymentWithIdentifier:(id)arg1;
- (void)processPayment:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addPaymentToQueue:(id)arg1 withInfo:(id)arg2 client:(id)arg3;
- (void)requestProductsWithIdentifiers:(id)arg1 client:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)requestProductReview;
- (void)forceSandboxForBundleIdentifier:(id)arg1 untilDate:(id)arg2;
- (void)checkServerQueueForClient:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)checkServerQueueForQueue:(id)arg1 withClient:(id)arg2;
- (void)dealloc;
- (id)initWithRemoteObject:(id)arg1 client:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

