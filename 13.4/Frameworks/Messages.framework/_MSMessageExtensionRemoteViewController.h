//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSExtension, NSUUID;

@interface _MSMessageExtensionRemoteViewController : _UIRemoteViewController
{
    _Bool _readyToDisplay;
    NSUUID *_requestUUID;
    NSExtension *_weakExtension;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isReadyToDisplay) _Bool readyToDisplay; // @synthesize readyToDisplay=_readyToDisplay;
@property(nonatomic) __weak NSExtension *weakExtension; // @synthesize weakExtension=_weakExtension;
@property(retain, nonatomic) NSUUID *requestUUID; // @synthesize requestUUID=_requestUUID;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (_Bool)__shouldRemoteViewControllerFenceOperations;

@end

