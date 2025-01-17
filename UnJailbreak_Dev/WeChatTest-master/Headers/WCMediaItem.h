//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EditImageAttr, EditVideoAttr, NSMutableArray, NSString, WCUrl;

@interface WCMediaItem : NSObject <NSCoding>
{
    NSString *tid;
    NSString *mid;
    int type;
    int subType;
    NSString *title;
    NSString *desc;
    NSString *titlePattern;
    NSString *descPattern;
    NSString *userData;
    NSString *postName;
    NSString *source;
    NSMutableArray *previewUrls;
    WCUrl *dataUrl;
    WCUrl *lowBandUrl;
    WCUrl *attachUrl;
    WCUrl *attachThumbUrl;
    NSString *attachShareTitle;
    struct CGSize imgSize;
    int attachVideoTotalTime;
    _Bool likeFlag;
    int likeCount;
    NSMutableArray *likeUsers;
    int commentCount;
    NSMutableArray *commentUsers;
    int withCount;
    NSMutableArray *withUsers;
    int createTime;
    _Bool bSnsScene;
    _Bool bSupoortValidateMd5;
    _Bool bUseXorEncrypt;
    unsigned long long xorEncrpyKey;
    unsigned int predownloadPercent;
    unsigned int predownNetType;
    NSString *noPreDownloadRange;
    _Bool isAd;
    _Bool _skipCompress;
    int index;
    int _entrance;
    NSString *_gameSnsVideoDataUrl;
    NSString *_gameSnsVideoThumbUrl;
}

@property(nonatomic) _Bool skipCompress; // @synthesize skipCompress=_skipCompress;
@property(retain, nonatomic) NSString *gameSnsVideoThumbUrl; // @synthesize gameSnsVideoThumbUrl=_gameSnsVideoThumbUrl;
@property(retain, nonatomic) NSString *gameSnsVideoDataUrl; // @synthesize gameSnsVideoDataUrl=_gameSnsVideoDataUrl;
@property(nonatomic) int entrance; // @synthesize entrance=_entrance;
@property(retain, nonatomic) NSString *noPreDownloadRange; // @synthesize noPreDownloadRange;
@property(nonatomic) unsigned int predownNetType; // @synthesize predownNetType;
@property(nonatomic) unsigned int predownloadPercent; // @synthesize predownloadPercent;
@property(nonatomic) int index; // @synthesize index;
@property(nonatomic) _Bool isAd; // @synthesize isAd;
@property(nonatomic) unsigned long long xorEncrpyKey; // @synthesize xorEncrpyKey;
@property(nonatomic) _Bool bUseXorEncrypt; // @synthesize bUseXorEncrypt;
@property(nonatomic) _Bool bSupoortValidateMd5; // @synthesize bSupoortValidateMd5;
@property(nonatomic) _Bool bSnsScene; // @synthesize bSnsScene;
@property(nonatomic) int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSMutableArray *withUsers; // @synthesize withUsers;
@property(nonatomic) int withCount; // @synthesize withCount;
@property(retain, nonatomic) NSMutableArray *commentUsers; // @synthesize commentUsers;
@property(nonatomic) int commentCount; // @synthesize commentCount;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers;
@property(nonatomic) int likeCount; // @synthesize likeCount;
@property(nonatomic) _Bool likeFlag; // @synthesize likeFlag;
@property(nonatomic) int attachVideoTotalTime; // @synthesize attachVideoTotalTime;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
@property(retain, nonatomic) NSString *attachShareTitle; // @synthesize attachShareTitle;
@property(retain, nonatomic) WCUrl *attachThumbUrl; // @synthesize attachThumbUrl;
@property(retain, nonatomic) WCUrl *attachUrl; // @synthesize attachUrl;
@property(retain, nonatomic) WCUrl *lowBandUrl; // @synthesize lowBandUrl;
@property(retain, nonatomic) WCUrl *dataUrl; // @synthesize dataUrl;
@property(retain, nonatomic) NSMutableArray *previewUrls; // @synthesize previewUrls;
@property(retain, nonatomic) NSString *source; // @synthesize source;
@property(retain, nonatomic) NSString *postName; // @synthesize postName;
@property(retain, nonatomic) NSString *userData; // @synthesize userData;
@property(retain, nonatomic) NSString *descPattern; // @synthesize descPattern;
@property(retain, nonatomic) NSString *titlePattern; // @synthesize titlePattern;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int subType; // @synthesize subType;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
@property(retain, nonatomic) NSString *tid; // @synthesize tid;
- (void).cxx_destruct;
- (_Bool)canBeginPreload;
- (_Bool)isPreloadVideoTask;
- (_Bool)isValid;
- (_Bool)savePreviewFromMedia:(id)arg1;
- (_Bool)saveSightPreviewFromMedia:(id)arg1;
- (_Bool)saveSightDataFromMedia:(id)arg1;
- (_Bool)saveDataFromMedia:(id)arg1;
- (_Bool)savePreviewFromData:(id)arg1;
- (_Bool)saveVideoDataFromData:(id)arg1 filePath:(id)arg2 continueMode:(_Bool)arg3;
- (_Bool)saveSightDataFromData:(id)arg1;
- (_Bool)saveDataFromData:(id)arg1;
- (_Bool)savePreviewFromPath:(id)arg1;
- (_Bool)saveSightDataFromPath:(id)arg1;
- (_Bool)saveDataFromPath:(id)arg1;
- (_Bool)hasPreview;
- (_Bool)hasAttachVideo;
- (_Bool)hasSight;
- (_Bool)hasData;
- (id)imageOfSize:(int)arg1;
- (id)comparativePathForPreview;
- (id)getThumbUrl;
- (id)tmpPathForPreview;
- (id)pathForPreview;
- (id)pathForTempAttachVideoData;
- (id)pathForAttachVideoData;
- (_Bool)createTempSightPath;
- (id)tempPathForSightData;
- (id)pathForSightData;
- (id)tmpPathForData;
- (id)pathForData;
- (id)hashPathForString:(id)arg1;
- (struct CLLocationCoordinate2D)locationForData;
- (id)cityForData;
- (id)videoStreamForData;
- (id)voiceStreamForData;
- (int)mediaType;
- (id)mediaID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) EditVideoAttr *editVideoAttr;
@property(retain, nonatomic) EditImageAttr *editImageAttr;
@property(nonatomic) _Bool isEdited;

@end

