//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TPLayoutState;

@interface TPArchivedLayoutState : TSPObject
{
    TPLayoutState *_layoutState;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TPLayoutState *layoutState; // @synthesize layoutState=_layoutState;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)isEqualToArchivedLayoutState:(id)arg1;
- (id)initWithContext:(id)arg1 layoutState:(id)arg2;

@end

