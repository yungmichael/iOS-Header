//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface RestoreOptions : NSObject
{
    _Bool _shouldGZip;
    unsigned long long _chunkSize;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) _Bool shouldGZip; // @synthesize shouldGZip=_shouldGZip;
@property(readonly, nonatomic) unsigned long long chunkSize; // @synthesize chunkSize=_chunkSize;
- (void).cxx_destruct;
- (id)init;

@end

