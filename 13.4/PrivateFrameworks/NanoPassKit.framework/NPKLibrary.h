//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPKLibrary : NSObject
{
    _Bool _needsRelevancyInformation;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needsRelevancyInformation; // @synthesize needsRelevancyInformation=_needsRelevancyInformation;
- (void)addPassData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

