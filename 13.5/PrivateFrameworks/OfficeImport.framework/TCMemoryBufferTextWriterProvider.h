//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider
{
    NSMutableData *_memoryBuffer;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSMutableData *memoryBuffer; // @synthesize memoryBuffer=_memoryBuffer;
- (_Bool)setUp;
- (id)initWithMemoryBuffer:(id)arg1;

@end

