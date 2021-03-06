//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CKFullScreenEffect, NSMutableArray;

@interface CKMomentCollectionViewCell : UICollectionViewCell
{
    CKFullScreenEffect *_effect;
    NSMutableArray *_effectViews;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *effectViews; // @synthesize effectViews=_effectViews;
@property(retain, nonatomic) CKFullScreenEffect *effect; // @synthesize effect=_effect;
- (void)stopAnimation;
- (void)animate;
- (void)setupEffectIfNeeded;
- (void)addEffectView:(id)arg1;
- (void)prepareForReuse;

@end

