//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCCanvasAbilitySliderInfo : MMObject <NSCoding>
{
    NSString *_label;
    double _value;
    double _fontSize;
    NSString *_backgroundColor;
    NSString *_foregroundColor;
    NSString *_foregroundImage;
    NSString *_backgroundImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSString *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) NSString *foregroundImage; // @synthesize foregroundImage=_foregroundImage;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) double value; // @synthesize value=_value;

@end
