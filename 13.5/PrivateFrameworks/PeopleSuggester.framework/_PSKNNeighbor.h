//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _PSKNNeighbor : NSObject
{
    double _distance;
    NSArray *_nodeData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *nodeData; // @synthesize nodeData=_nodeData;
@property(nonatomic) double distance; // @synthesize distance=_distance;
- (id)initWithNodeData:(id)arg1 distance:(double)arg2;

@end

