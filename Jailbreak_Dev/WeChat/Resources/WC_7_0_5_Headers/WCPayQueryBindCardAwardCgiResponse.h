//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCPayBindCardActivityChangeInfo;

@interface WCPayQueryBindCardAwardCgiResponse : NSObject
{
    NSString *_retmsg;
    long long _retcode;
    WCPayBindCardActivityChangeInfo *_activity_change_info;
}

+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBindCardActivityChangeInfo *activity_change_info; // @synthesize activity_change_info=_activity_change_info;
- (void)genFromDic:(id)arg1;
@property(nonatomic) long long retcode; // @synthesize retcode=_retcode;
@property(retain, nonatomic) NSString *retmsg; // @synthesize retmsg=_retmsg;

@end
