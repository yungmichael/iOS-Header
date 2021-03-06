//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/SFUOutputStream-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUGZipFileOutputStream : NSObject <SFUOutputStream>
{
    struct gzFile_s *_file;
    long long _offset;
    NSString *_path;
}

+ (id)gzipExtension;
- (id)closeLocalStream;
- (void)close;
- (id)inputStream;
- (_Bool)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (_Bool)canSeek;
- (long long)offset;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (id)path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

