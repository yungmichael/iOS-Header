//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXDisplayAsset, PXImportStatusObserver;

@protocol PXImportStatusManager <NSObject>
- (void)removeImportStatusObserver:(id <PXImportStatusObserver>)arg1;
- (void)addImportStatusObserver:(id <PXImportStatusObserver>)arg1;
- (long long)importStateForAsset:(id <PXDisplayAsset>)arg1;
@end

