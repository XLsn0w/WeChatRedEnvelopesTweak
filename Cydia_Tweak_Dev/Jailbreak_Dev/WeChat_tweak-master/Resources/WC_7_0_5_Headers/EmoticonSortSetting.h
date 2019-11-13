//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface EmoticonSortSetting : NSObject <PBCoding>
{
    NSMutableArray *m_sortPids;
    _Bool m_hasSetCoustomToTop;
    NSMutableArray *m_newSortPids;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)copyFeildFrom:(id)arg1;
- (id)getLocalCachePath;
- (id)getLocalCacheRootDir;
- (id)getOldSortPackageListWithDownloadedTusiji:(id)arg1;
- (id)getSortPackageList:(id)arg1 withTusiji:(_Bool)arg2;
- (id)getSortPackageListWithDownloadedTusiji:(id)arg1;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (_Bool)loadSetting;
@property(nonatomic) _Bool m_hasSetCoustomToTop; // @synthesize m_hasSetCoustomToTop;
@property(retain, nonatomic) NSMutableArray *m_newSortPids;
@property(retain, nonatomic) NSMutableArray *m_sortPids; // @synthesize m_sortPids;
- (void)resetSetting;
- (void)saveSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
