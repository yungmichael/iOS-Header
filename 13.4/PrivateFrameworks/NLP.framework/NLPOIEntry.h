//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NLP/NLParsecNamedEntity-Protocol.h>

@class NLPOIEntryImpl, NSString;

__attribute__((visibility("hidden")))
@interface NLPOIEntry : NSObject <NLParsecNamedEntity>
{
    NLPOIEntryImpl *m_impl;
}

@property(readonly, nonatomic) float score;
@property(readonly, nonatomic) unsigned char category;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithProtoBuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

