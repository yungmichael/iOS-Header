//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSError, NSNumber, NSProgress, NSString, PLEditSource, PLPhotoEditModel;

@protocol PXEditSourceLoader <NSObject>
@property(readonly, nonatomic) NSNumber *loadDuration;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long baseVersion;
@property(readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier;
@property(readonly, copy, nonatomic) PLPhotoEditModel *editModel;
@property(readonly, nonatomic) PLEditSource *editSource;
@property(readonly, nonatomic) NSProgress *progress;
- (void)beginLoading;
@end

