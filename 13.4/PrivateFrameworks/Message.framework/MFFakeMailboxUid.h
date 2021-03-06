//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid
{
    _Bool _fakeIsSpecialMailboxUid;
    NSString *_displayName;
    NSString *_fakeFullPath;
    NSString *_fakeURLString;
    long long _fakeMailboxID;
}

- (void).cxx_destruct;
@property(nonatomic) long long fakeMailboxID; // @synthesize fakeMailboxID=_fakeMailboxID;
@property(nonatomic) _Bool fakeIsSpecialMailboxUid; // @synthesize fakeIsSpecialMailboxUid=_fakeIsSpecialMailboxUid;
@property(copy, nonatomic) NSString *fakeURLString; // @synthesize fakeURLString=_fakeURLString;
@property(copy, nonatomic) NSString *fakeFullPath; // @synthesize fakeFullPath=_fakeFullPath;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)store;
- (_Bool)isStore;
- (_Bool)isSpecialMailboxUid;
- (id)fullPath;
- (id)URL;
- (id)URLString;
- (long long)mailboxID;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(_Bool)arg4 mailboxID:(long long)arg5;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(_Bool)arg4;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3;

@end

