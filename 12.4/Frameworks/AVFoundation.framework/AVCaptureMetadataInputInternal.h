//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureInputPort, NSString;

@interface AVCaptureMetadataInputInternal : NSObject
{
    AVCaptureInputPort *metadataPort;
    NSString *sourceID;
    struct opaqueCMFormatDescription *desc;
    struct OpaqueCMClock *clock;
    struct OpaqueCMBlockBuffer *emptyBoxedMetadata;
}

@end

