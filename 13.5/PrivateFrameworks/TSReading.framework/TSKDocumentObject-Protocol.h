//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSKAddedToDocumentContext, TSKDocumentRoot;

@protocol TSKDocumentObject
- (void)wasRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)willBeRemovedFromDocumentRoot:(TSKDocumentRoot *)arg1;
- (void)wasAddedToDocumentRoot:(TSKDocumentRoot *)arg1 context:(TSKAddedToDocumentContext *)arg2;
- (void)willBeAddedToDocumentRoot:(TSKDocumentRoot *)arg1 context:(TSKAddedToDocumentContext *)arg2;
@end

