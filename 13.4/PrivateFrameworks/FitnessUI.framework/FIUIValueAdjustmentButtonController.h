//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIUIWorkoutLapLengthIndexTranslator, NSTimer, UIButton;

@interface FIUIValueAdjustmentButtonController : NSObject
{
    NSTimer *_plusMinusActionTimer;
    long long _plusMinusActionRepeatCount;
    _Bool _didUserUpdatevalue;
    double _value;
    double _valueStepIncremement;
    double _minumumStepValueIncrement;
    double _maxValue;
    double _minValue;
    CDUnknownBlockType _valueUpdateHandler;
    FIUIWorkoutLapLengthIndexTranslator *_lapLengthIndexTranslator;
    CDUnknownBlockType _buttonStateUpdateHandler;
    UIButton *_incrementButton;
    UIButton *_decrementButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIButton *decrementButton; // @synthesize decrementButton=_decrementButton;
@property(readonly, nonatomic) __weak UIButton *incrementButton; // @synthesize incrementButton=_incrementButton;
@property(nonatomic) _Bool didUserUpdatevalue; // @synthesize didUserUpdatevalue=_didUserUpdatevalue;
@property(copy, nonatomic) CDUnknownBlockType buttonStateUpdateHandler; // @synthesize buttonStateUpdateHandler=_buttonStateUpdateHandler;
@property(retain, nonatomic) FIUIWorkoutLapLengthIndexTranslator *lapLengthIndexTranslator; // @synthesize lapLengthIndexTranslator=_lapLengthIndexTranslator;
@property(copy, nonatomic) CDUnknownBlockType valueUpdateHandler; // @synthesize valueUpdateHandler=_valueUpdateHandler;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minumumStepValueIncrement; // @synthesize minumumStepValueIncrement=_minumumStepValueIncrement;
@property(nonatomic) double valueStepIncremement; // @synthesize valueStepIncremement=_valueStepIncremement;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)_updateButton:(id)arg1 forPressedState:(_Bool)arg2;
- (void)_updatePlusMinusButtonStates;
- (void)_notifyValueChanged;
- (void)_incrementRepeatCount;
- (void)_performPlusMinusActionWithIndexTranslationForButton:(id)arg1;
- (void)_performPlusMinusActionWithButton:(id)arg1;
- (void)_plusMinusActionTimerDidFire:(id)arg1;
- (void)_plusMinusButtonTouchCancel:(id)arg1;
- (void)_plusMinusButtonTouchUpInside:(id)arg1;
- (void)_plusMinusButtonTouchDown:(id)arg1;
- (void)setIncrementButton:(id)arg1 decrementButton:(id)arg2;

@end

