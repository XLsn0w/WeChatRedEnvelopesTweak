//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QMapContext, QTileOverlay, QTileOverlayPayload;

@interface QTileOverlayRender : NSObject
{
    QTileOverlay *_tileOverlay;
    QTileOverlayPayload *_payload;
    QMapContext *_mapContext;
}

- (void).cxx_destruct;
- (void)endRender;
- (id)initWithTileOverlay:(id)arg1 mapContext:(id)arg2;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
- (CDStruct_cf57a58b)pathForInternal:(id)arg1;
@property(retain, nonatomic) QTileOverlayPayload *payload; // @synthesize payload=_payload;
- (void)reloadData;
@property(retain, nonatomic) QTileOverlay *tileOverlay; // @synthesize tileOverlay=_tileOverlay;
- (void)startRender;

@end
