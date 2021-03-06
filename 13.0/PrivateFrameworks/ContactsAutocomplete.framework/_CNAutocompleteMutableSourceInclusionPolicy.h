//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSourceInclusionPolicy-Protocol.h>

@class NSString;

@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>
{
    _Bool _includeContacts;
    _Bool _includeRecents;
    _Bool _includeSuggestions;
    _Bool _includeLocalExtensions;
    _Bool _includeDirectoryServers;
    _Bool _includeCalendarServers;
    _Bool _includeSupplementalResults;
    _Bool _includePredictions;
}

@property _Bool includePredictions; // @synthesize includePredictions=_includePredictions;
@property _Bool includeSupplementalResults; // @synthesize includeSupplementalResults=_includeSupplementalResults;
@property _Bool includeCalendarServers; // @synthesize includeCalendarServers=_includeCalendarServers;
@property _Bool includeDirectoryServers; // @synthesize includeDirectoryServers=_includeDirectoryServers;
@property _Bool includeLocalExtensions; // @synthesize includeLocalExtensions=_includeLocalExtensions;
@property _Bool includeSuggestions; // @synthesize includeSuggestions=_includeSuggestions;
@property _Bool includeRecents; // @synthesize includeRecents=_includeRecents;
@property _Bool includeContacts; // @synthesize includeContacts=_includeContacts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

