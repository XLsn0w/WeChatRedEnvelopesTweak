//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, HwDeviceMsg, NSString;

@interface TransferMsgToDeviceReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(retain, nonatomic) HwDeviceMsg *deviceMsg; // @dynamic deviceMsg;
@property(retain, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(nonatomic) int isThroughtServer; // @dynamic isThroughtServer;

@end
