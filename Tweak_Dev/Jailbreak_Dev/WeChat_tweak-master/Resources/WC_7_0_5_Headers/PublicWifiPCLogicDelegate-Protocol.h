//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PublicWifiPCLogicDelegate <NSObject>
- (void)didGetPcFrontPage:(NSString *)arg1 headimg:(NSString *)arg2;
- (void)didNetWorkError:(NSString *)arg1 errMsg:(NSString *)arg2;
- (void)didSetUserInfo;
@end
