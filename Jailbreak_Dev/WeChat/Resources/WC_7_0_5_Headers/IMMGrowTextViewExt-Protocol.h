//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UITextView;

@protocol IMMGrowTextViewExt <NSObject>

@optional
- (void)onTextView:(UITextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)onTextViewDidChange:(UITextView *)arg1;
@end
