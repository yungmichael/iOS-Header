//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIHealthSettingsForceUpdatable-Protocol.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject <FIUIHealthSettingsForceUpdatable>
{
    FIUIHealthSettingsDatePicker *_datePickerView;
    CDUnknownBlockType _dateOfBirthUpdateHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType dateOfBirthUpdateHandler; // @synthesize dateOfBirthUpdateHandler=_dateOfBirthUpdateHandler;
@property(retain, nonatomic) FIUIHealthSettingsDatePicker *datePickerView; // @synthesize datePickerView=_datePickerView;
- (void)forceUpdate;
- (void)setDateOfBirth:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

