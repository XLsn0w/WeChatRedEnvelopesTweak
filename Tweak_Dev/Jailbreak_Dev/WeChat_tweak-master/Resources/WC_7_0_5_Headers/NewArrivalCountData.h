//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSString;

@interface NewArrivalCountData : NSObject <NSCoding>
{
    NSString *m_nsFile;
    NSMutableDictionary *m_dicHistory;
}

+ (id)dataFromFile:(id)arg1;
- (void).cxx_destruct;
- (void)afterLoadData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getArrayItem;
- (id)getItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)removeItem:(id)arg1;
- (_Bool)save;
- (_Bool)setItem:(id)arg1;
- (_Bool)updateItem:(id)arg1 arrivalCount:(unsigned int)arg2 msgid:(unsigned int)arg3;

@end
