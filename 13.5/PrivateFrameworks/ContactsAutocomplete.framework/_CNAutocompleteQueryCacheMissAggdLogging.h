//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteQueryCacheMissLogging-Protocol.h>

@class CNAutocompleteAggdProbe, NSString;

@interface _CNAutocompleteQueryCacheMissAggdLogging : NSObject <CNAutocompleteQueryCacheMissLogging>
{
    CNAutocompleteAggdProbe *_probe;
}

- (void).cxx_destruct;
@property(readonly) CNAutocompleteAggdProbe *probe; // @synthesize probe=_probe;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (id)initWithProbe:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

