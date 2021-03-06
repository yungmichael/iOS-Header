//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreArtworkSizeInfo, NSArray, NSDictionary, NSURL;

@interface ICStoreArtworkInfo : NSObject <NSCopying>
{
    ICStoreArtworkSizeInfo *_sizeInfo;
    NSArray *_sortedResponseArray;
    NSArray *_sortedSupportedSizesArray;
    NSURL *_artworkURL;
    NSArray *_responseArray;
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(readonly, copy, nonatomic) NSArray *responseArray; // @synthesize responseArray=_responseArray;
@property(readonly, copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) NSArray *sortedSupportedSizesArray; // @synthesize sortedSupportedSizesArray=_sortedSupportedSizesArray;
@property(copy, nonatomic) NSArray *sortedResponseArray; // @synthesize sortedResponseArray=_sortedResponseArray;
- (void).cxx_destruct;
- (struct CGSize)_originalSize;
- (_Bool)_hasOriginalSize;
- (void)_sortSupportedSizesArray;
- (void)_sortResponseArray;
- (struct CGColor *)copyColorWithKind:(id)arg1;
- (id)artworkURLWithSize:(struct CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 preferP3ColorSpace:(_Bool)arg4;
- (id)artworkURLWithSize:(struct CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3;
@property(readonly, nonatomic) ICStoreArtworkSizeInfo *sizeInfo; // @synthesize sizeInfo=_sizeInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArtworkResponseValue:(id)arg1;
- (id)initWithArtworkURL:(id)arg1;
- (id)initWithArtworkResponseDictionary:(id)arg1;
- (id)initWithArtworkResponseArray:(id)arg1;

@end

