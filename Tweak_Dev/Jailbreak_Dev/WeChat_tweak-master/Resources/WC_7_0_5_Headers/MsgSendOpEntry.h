//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MsgSendOpEntry : NSObject
{
    _Bool _voice_input;
    _Bool _voice;
    _Bool _emoji;
    _Bool _image;
    _Bool _video;
    _Bool _location;
    _Bool _location_real_time;
    _Bool _share_card;
    _Bool _file;
    _Bool _favorite;
    _Bool _video_voip;
    _Bool _voice_voip;
    _Bool _multi_voip;
    _Bool _hong_bao;
    _Bool _transfer_money;
    _Bool _ka_quan;
    _Bool _we_app;
    _Bool _enterprise_brand;
    _Bool _recommend_app;
    NSString *_bottomTip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bottomTip; // @synthesize bottomTip=_bottomTip;
@property(nonatomic) _Bool emoji; // @synthesize emoji=_emoji;
@property(nonatomic) _Bool enterprise_brand; // @synthesize enterprise_brand=_enterprise_brand;
@property(nonatomic) _Bool favorite; // @synthesize favorite=_favorite;
@property(nonatomic) _Bool file; // @synthesize file=_file;
@property(nonatomic) _Bool hong_bao; // @synthesize hong_bao=_hong_bao;
@property(nonatomic) _Bool image; // @synthesize image=_image;
@property(nonatomic) _Bool ka_quan; // @synthesize ka_quan=_ka_quan;
@property(nonatomic) _Bool location; // @synthesize location=_location;
@property(nonatomic) _Bool location_real_time; // @synthesize location_real_time=_location_real_time;
@property(nonatomic) _Bool multi_voip; // @synthesize multi_voip=_multi_voip;
@property(nonatomic) _Bool recommend_app; // @synthesize recommend_app=_recommend_app;
@property(nonatomic) _Bool share_card; // @synthesize share_card=_share_card;
@property(nonatomic) _Bool transfer_money; // @synthesize transfer_money=_transfer_money;
@property(nonatomic) _Bool video; // @synthesize video=_video;
@property(nonatomic) _Bool video_voip; // @synthesize video_voip=_video_voip;
@property(nonatomic) _Bool voice; // @synthesize voice=_voice;
@property(nonatomic) _Bool voice_input; // @synthesize voice_input=_voice_input;
@property(nonatomic) _Bool voice_voip; // @synthesize voice_voip=_voice_voip;
@property(nonatomic) _Bool we_app; // @synthesize we_app=_we_app;

@end
