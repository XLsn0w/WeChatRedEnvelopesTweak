//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ResourceManager : NSObject
{
    NSString *root;
    NSString *_bundleDirctory;
}

+ (id)shareManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleDirctory; // @synthesize bundleDirctory=_bundleDirctory;
- (id)init;
- (struct _Image *)loadCurve1DData:(char *)arg1;
- (struct _Image *)loadCurveResource:(id)arg1;
- (struct _Image *)loadDataResource:(id)arg1;
- (struct _Image *)loadFaceBmpResource:(id)arg1;
- (struct _Image *)loadFaceJpgResource:(id)arg1;
- (struct _Image *)loadFaceRawResource:(id)arg1 width:(long long)arg2 height:(long long)arg3;
- (struct _Image *)loadFilterResource:(id)arg1;
- (struct _Image *)loadFilterResource:(id)arg1 bundlePath:(id)arg2;
- (struct _Image *)loadFilterResourceWithFullPath:(id)arg1;
- (struct _Image *)loadImageResource:(id)arg1;
- (id)loadUIImageResource:(id)arg1;
- (id)loadUIImageResource:(id)arg1 bundlePath:(id)arg2;
- (id)loadUIImageResourceWithFullPath:(id)arg1;
- (id)locateResource:(id)arg1;
- (id)root;

@end
