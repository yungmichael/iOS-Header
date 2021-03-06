//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class COSManualPairingHeader, COSPasskeyEntryViewController, NSMutableArray, NSString, NSTimer;

@interface COSManualPairingViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_displayedDeviceNames;
    NSTimer *_tableUpdateTimer;
    COSManualPairingHeader *_headerView;
    COSPasskeyEntryViewController *_passkeyEntryController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) COSPasskeyEntryViewController *passkeyEntryController; // @synthesize passkeyEntryController=_passkeyEntryController;
@property(retain, nonatomic) COSManualPairingHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSTimer *tableUpdateTimer; // @synthesize tableUpdateTimer=_tableUpdateTimer;
@property(retain, nonatomic) NSMutableArray *displayedDeviceNames; // @synthesize displayedDeviceNames=_displayedDeviceNames;
- (id)didSelectRowAtIndexPath:(id)arg1;
- (id)cellNameForRow:(long long)arg1;
- (void)endDiscovery;
- (void)beginDiscovery;
- (_Bool)updateDiscoveredDevices;
- (Class)headerClass;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)controllerCancelled:(id)arg1;
- (void)_reloadDataForUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

