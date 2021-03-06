//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPassPersonalizationCellContext : NSObject
{
    _Bool _bindTextToStringRepresentation;
    double _minimumTextLabelWidth;
    long long _keyboardType;
    long long _autocapitalizationType;
    NSString *_title;
    CDUnknownBlockType _stringRepresentationBlock;
    CDUnknownBlockType _contactUpdateBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType contactUpdateBlock; // @synthesize contactUpdateBlock=_contactUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType stringRepresentationBlock; // @synthesize stringRepresentationBlock=_stringRepresentationBlock;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool bindTextToStringRepresentation; // @synthesize bindTextToStringRepresentation=_bindTextToStringRepresentation;
@property(nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) double minimumTextLabelWidth; // @synthesize minimumTextLabelWidth=_minimumTextLabelWidth;

@end

