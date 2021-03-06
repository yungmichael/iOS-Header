//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@class ARFaceTrackingData, MISSING_TYPE;
@protocol OS_dispatch_semaphore;

@interface ARFaceGeometry : NSObject <NSSecureCoding, NSCopying>
{
    vector_1cb3ea33 _customVertices;
    vector_1cb3ea33 _normals;
    ARFaceTrackingData *_trackingData;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (short)closestVertexIndexToLabeledFacePosition:(id)arg1;
- (MISSING_TYPE *)normalForLabeledFacePosition:(id)arg1;
- (MISSING_TYPE *)positionForLabeledFacePosition:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long triangleCount;
@property(readonly, nonatomic) const short *triangleIndices;
@property(readonly, nonatomic) unsigned long long textureCoordinateCount;
@property(readonly, nonatomic) const MISSING_TYPE **textureCoordinates;
- (const MISSING_TYPE **)normals;
- (unsigned long long)normalCount;
@property(readonly, nonatomic) unsigned long long vertexCount;
@property(readonly, nonatomic) const MISSING_TYPE **vertices;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCustomVertices:(const MISSING_TYPE **)arg1 verticesCount:(unsigned long long)arg2;
- (id)initWithFaceTrackingData:(id)arg1;
- (id)initWithBlendShapes:(id)arg1;
- (id)initPrivate;

@end

