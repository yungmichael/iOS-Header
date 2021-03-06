//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

@class NSLocale, NSMutableDictionary, NSString;

@interface AXMTaggedText : NSMutableAttributedString
{
    NSMutableAttributedString *_attrString;
    NSMutableDictionary *_globalAttributes;
    CDUnknownBlockType _evaluationBlock;
}

+ (id)textWithString:(id)arg1 locale:(id)arg2 evaluationBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)mutableString;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)debugDescription;
- (id)description;
- (id)_substringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)_stringRange;
- (void)_evaluateIfNeeded;
- (_Bool)_isEvaluated;
- (void)_setNeedEvaluation;
@property(readonly, nonatomic) NSString *speakableText;
- (_Bool)isRangeSpeakable:(struct _NSRange)arg1;
@property(readonly, nonatomic) NSLocale *locale;
@property(nonatomic, getter=isSpeakable) _Bool speakable;
- (void)addTag:(id)arg1 withToken:(id)arg2 range:(struct _NSRange)arg3;
- (void)addReplacementTag:(id)arg1 withToken:(id)arg2 range:(struct _NSRange)arg3;
- (_Bool)hasGlobalTag:(id)arg1;
- (void)removeGlobalTag:(id)arg1;
- (void)addGlobalTag:(id)arg1;
- (id)_initWithAttributedString:(id)arg1;

@end

