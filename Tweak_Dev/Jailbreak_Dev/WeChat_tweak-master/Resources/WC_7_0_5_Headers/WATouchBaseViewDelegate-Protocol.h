//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, WATouchBaseView;

@protocol WATouchBaseViewDelegate <NSObject>

@optional
- (void)onTouchBegin:(NSDictionary *)arg1 canvas:(WATouchBaseView *)arg2;
- (void)onTouchCancel:(NSArray *)arg1 canvas:(WATouchBaseView *)arg2;
- (void)onTouchEnd:(NSDictionary *)arg1 canvas:(WATouchBaseView *)arg2;
- (void)onTouchMove:(NSArray *)arg1 canvas:(WATouchBaseView *)arg2;
@end
