//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class _UIFocusRegion;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContentAttributes : NSObject <NSCopying>
{
    _Bool _requiresIntersectionWithFocusMapSearchArea;
    _UIFocusRegion *_contentRegion;
}

+ (id)attributesForFocusRegionContentInContainer:(id)arg1 coordinateSpace:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool requiresIntersectionWithFocusMapSearchArea; // @synthesize requiresIntersectionWithFocusMapSearchArea=_requiresIntersectionWithFocusMapSearchArea;
@property(copy, nonatomic) _UIFocusRegion *contentRegion; // @synthesize contentRegion=_contentRegion;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

