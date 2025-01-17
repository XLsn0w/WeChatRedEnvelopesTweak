//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMLanguageCache : NSObject <PBCoding>
{
    _Bool m_haveSave;
    unsigned int m_currentCount;
    NSString *curSystemLanguage;
    NSMutableDictionary *cacheLanStringDict;
}

+ (id)getLanguageCache;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *cacheLanStringDict; // @synthesize cacheLanStringDict;
@property(copy, nonatomic) NSString *curSystemLanguage; // @synthesize curSystemLanguage;
- (void).cxx_destruct;
- (void)save;
- (id)getStringForStringID:(id)arg1;
- (void)resetString:(id)arg1 for:(id)arg2;
- (void)resetCurLan:(id)arg1;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

