//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriCore/SiriCoreDataCompressor.h>

@interface SiriCoreZlibDataCompressor : SiriCoreDataCompressor
{
    struct z_stream_s _deflateStream;
    unsigned char _deflateBuffer[8192];
}

- (id)compressedDataForData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

