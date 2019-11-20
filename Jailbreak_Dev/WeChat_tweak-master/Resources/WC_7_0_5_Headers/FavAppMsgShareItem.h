//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface FavAppMsgShareItem : NSObject
{
    _Bool _hasItemShowType;
    _Bool _isNativePage;
    unsigned int _itemShowType;
    unsigned int _duration;
    unsigned int _width;
    unsigned int _height;
    unsigned int _funcFlag;
    NSString *_srcUsername;
    NSString *_srcDisplayName;
    NSString *_cover;
    NSDate *_pubTime;
    NSString *_vid;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
@property(nonatomic) unsigned int funcFlag; // @synthesize funcFlag=_funcFlag;
@property(nonatomic) _Bool hasItemShowType; // @synthesize hasItemShowType=_hasItemShowType;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) _Bool isNativePage; // @synthesize isNativePage=_isNativePage;
@property(nonatomic) unsigned int itemShowType; // @synthesize itemShowType=_itemShowType;
@property(retain, nonatomic) NSDate *pubTime; // @synthesize pubTime=_pubTime;
@property(copy, nonatomic) NSString *srcDisplayName; // @synthesize srcDisplayName=_srcDisplayName;
@property(copy, nonatomic) NSString *srcUsername; // @synthesize srcUsername=_srcUsername;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (id)toXML;

@end
