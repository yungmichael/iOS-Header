//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListLayoutProvider-Protocol.h>

@class NSDictionary;

@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider>
{
    NSDictionary *_listLayouts;
}

@property(readonly, copy, nonatomic) NSDictionary *listLayouts; // @synthesize listLayouts=_listLayouts;
- (void).cxx_destruct;
- (id)layoutForIconLocation:(id)arg1;
- (id)init;
- (id)initWithListLayouts:(id)arg1;

@end

