//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MSVZipArchive : NSObject
{
    struct BOMSys *_bomsys;
    NSString *_archivePath;
    NSMutableArray *_filesToArchive;
}

- (void).cxx_destruct;
- (_Bool)decompressToPath:(id)arg1 withError:(id *)arg2;
- (_Bool)writeToFileAtPath:(id)arg1 withError:(id *)arg2;
- (void)addFileAtPath:(id)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1;
- (id)init;

@end

