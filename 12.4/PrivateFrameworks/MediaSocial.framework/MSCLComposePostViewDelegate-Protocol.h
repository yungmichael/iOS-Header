//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaSocial/UIScrollViewDelegate-Protocol.h>

@class MSCLAttachment, MSCLAttachmentPreviewView, MSCLComposePostView, MSCLTag, NSString;

@protocol MSCLComposePostViewDelegate <UIScrollViewDelegate>

@optional
- (MSCLTag *)composePostView:(MSCLComposePostView *)arg1 tagForString:(NSString *)arg2;
- (void)composePostView:(MSCLComposePostView *)arg1 didSelectAttachment:(MSCLAttachment *)arg2 atIndex:(long long)arg3;
- (void)composePostView:(MSCLComposePostView *)arg1 didRemoveAttachmentView:(MSCLAttachmentPreviewView *)arg2 atIndex:(long long)arg3;
- (void)composePostViewTextSelectionDidChange:(MSCLComposePostView *)arg1;
- (void)composePostViewTextDidChange:(MSCLComposePostView *)arg1;
@end

