//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/OFUIView.h>

@class NSArray;

@interface OFLinearGradientView : OFUIView
{
}

+ (Class)layerClass;
@property(nonatomic) struct CGPoint endPoint;
@property(nonatomic) struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *colors;
@property(copy, nonatomic) NSArray *locations;
- (id)gradientLayer;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;

@end

