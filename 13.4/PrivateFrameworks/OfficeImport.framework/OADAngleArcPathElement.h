//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADPathElement.h>

__attribute__((visibility("hidden")))
@interface OADAngleArcPathElement : OADPathElement
{
    struct OADAdjustPoint mCenter;
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
    _Bool mConnectedToPrevious;
}

- (_Bool)connectedToPrevious;
- (struct OADAdjustCoord)angleLength;
- (struct OADAdjustCoord)startAngle;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustPoint)center;
- (id)initWithCenter:(struct OADAdjustPoint)arg1 semiaxes:(struct OADAdjustPoint)arg2 startAngle:(struct OADAdjustCoord)arg3 angleLength:(struct OADAdjustCoord)arg4 connectedToPrevious:(_Bool)arg5;

@end

