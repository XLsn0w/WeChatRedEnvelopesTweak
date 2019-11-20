//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindow.h"

@class NSString, TransformView, UIImageView, UILabel, UIView;

@interface WCBarMessageWindow : MMWindow
{
    NSString *m_showTip;
    UIView *m_backgroundView;
    TransformView *m_parentView;
    UIView *m_bottomImg;
    UIView *m_backupView;
    UILabel *m_label;
    UILabel *m_nameLabel;
    UIImageView *m_imgView;
    _Bool m_bWaiting;
    id <WCBarMessageWindowDelegate> m_tipDelegate;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)dealloc;
- (_Bool)hasShowTipNow;
- (void)hideMessage;
- (void)hideTip;
- (id)init;
@property(retain, nonatomic) NSString *m_showTip; // @synthesize m_showTip;
@property(nonatomic) __weak id <WCBarMessageWindowDelegate> m_tipDelegate; // @synthesize m_tipDelegate;
- (void)onPresentDone;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)rotate3D:(_Bool)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setupAnimation;
- (void)showTip:(id)arg1;
- (void)snapBottomView:(_Bool)arg1;
- (void)statusBarDidRotate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
