//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction
{
    CDUnknownFunctionPointerType _functionPointer;
    void *_userData;
}

@property(nonatomic) void *userData; // @synthesize userData=_userData;
@property(nonatomic) CDUnknownFunctionPointerType functionPointer; // @synthesize functionPointer=_functionPointer;
- (_Bool)registerWithConnection:(id)arg1;

@end

