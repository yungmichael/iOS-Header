//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXDragManager;

@interface AXElementActionManager : NSObject
{
    _Bool _shouldIncludeMedusaActions;
    AXDragManager *_dragManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AXDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(nonatomic) _Bool shouldIncludeMedusaActions; // @synthesize shouldIncludeMedusaActions=_shouldIncludeMedusaActions;
- (_Bool)performAction:(id)arg1;
- (id)actionsForElement:(id)arg1;
- (_Bool)canShowActionsForElement:(id)arg1;
@property(readonly, nonatomic) _Bool isDragActive;
- (id)initWithDragManager:(id)arg1;
- (id)initWithDragServiceName:(id)arg1;

@end

