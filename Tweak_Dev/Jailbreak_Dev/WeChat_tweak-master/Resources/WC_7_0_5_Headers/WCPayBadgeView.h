//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UILabel;

@interface WCPayBadgeView : UIView
{
    UILabel *_m_textLabel;
    UIColor *_m_textColor;
    NSString *_m_textString;
    double _m_maxWidth;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) double m_maxWidth; // @synthesize m_maxWidth=_m_maxWidth;
@property(retain, nonatomic) UIColor *m_textColor; // @synthesize m_textColor=_m_textColor;
@property(retain, nonatomic) UILabel *m_textLabel; // @synthesize m_textLabel=_m_textLabel;
@property(retain, nonatomic) NSString *m_textString; // @synthesize m_textString=_m_textString;
- (void)updateFontColor:(id)arg1;
- (void)updateMaxWidth:(double)arg1;
- (void)updateText:(id)arg1;
- (void)updateTextLabel;
- (void)updateView;

@end
