//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RelevantSearchResult_ResultItem;

@protocol WebSearchLocalPageCellDelegate <NSObject>

@optional
- (void)onClickSearchLocalPageItem:(RelevantSearchResult_ResultItem *)arg1 wordIndex:(long long)arg2 searchId:(NSString *)arg3;
@end
