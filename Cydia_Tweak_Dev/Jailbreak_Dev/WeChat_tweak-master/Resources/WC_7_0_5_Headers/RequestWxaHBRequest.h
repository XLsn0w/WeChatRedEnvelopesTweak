//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface RequestWxaHBRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int hbScope; // @dynamic hbScope;
@property(nonatomic) int hbType; // @dynamic hbType;
@property(nonatomic) unsigned int perValue; // @dynamic perValue;
@property(nonatomic) unsigned long long totalAmount; // @dynamic totalAmount;
@property(nonatomic) int totalNum; // @dynamic totalNum;
@property(retain, nonatomic) NSString *wishing; // @dynamic wishing;

@end
