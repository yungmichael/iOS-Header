//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUShineImageFactory : NSObject
{
    // Error parsing type: , name: lruCache
    // Error parsing type: , name: lock
    // Error parsing type: , name: inflightRequests
}

+ (id)shared;
- (void).cxx_destruct;
- (id)syncShineImageForRequest:(id)arg1;
- (void)shineImageForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didReceiveMemoryWarning;
- (id)init;

@end

