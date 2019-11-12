//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCAdSphereCardInfo : NSObject <NSCoding>
{
    unsigned int _displayType;
    unsigned int _markMaxAlpha;
    unsigned int _titlePosition;
    NSString *_title;
    NSString *_descriptionText;
    unsigned long long _gestureDelayTime;
    NSString *_sphereThumbUrl;
    NSString *_sphereImageUrl;
    double _sphereImageWidth;
    double _sphereImageHeight;
    NSString *_bgColor;
    double _bgColorAlpha;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double bgColorAlpha; // @synthesize bgColorAlpha=_bgColorAlpha;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) unsigned int displayType; // @synthesize displayType=_displayType;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) unsigned long long gestureDelayTime; // @synthesize gestureDelayTime=_gestureDelayTime;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int markMaxAlpha; // @synthesize markMaxAlpha=_markMaxAlpha;
@property(nonatomic) double sphereImageHeight; // @synthesize sphereImageHeight=_sphereImageHeight;
@property(retain, nonatomic) NSString *sphereImageUrl; // @synthesize sphereImageUrl=_sphereImageUrl;
@property(nonatomic) double sphereImageWidth; // @synthesize sphereImageWidth=_sphereImageWidth;
@property(retain, nonatomic) NSString *sphereThumbUrl; // @synthesize sphereThumbUrl=_sphereThumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned int titlePosition; // @synthesize titlePosition=_titlePosition;

@end
