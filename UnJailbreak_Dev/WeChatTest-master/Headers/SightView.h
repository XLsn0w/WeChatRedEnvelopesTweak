//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AVPlayerStateControlDelegate-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IVideoExt-Protocol.h"
#import "MMAVPlayerItem-Protocol.h"
#import "SightIconViewDelegate-Protocol.h"
#import "SightPlayerNotifyExt-Protocol.h"
#import "SightPlayerViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "VideoProgressBarDelegate-Protocol.h"
#import "WCStateMachineDelegate-Protocol.h"

@class CMessageWrap, MMAVPlayerItemWrap, MMProgressViewEx, NSString, SightIconView, SightPlayerView, UIColor, UIImage, UIImageView, UILabel, UITapGestureRecognizer, VideoProgressBar, WCMediaItem, WCStateMachine;
@protocol SightViewDelegate;

@interface SightView : UIView <SightPlayerViewDelegate, WCStateMachineDelegate, SightIconViewDelegate, MMAVPlayerItem, UIGestureRecognizerDelegate, AVPlayerStateControlDelegate, IVOIPUILogicMgrExt, SightPlayerNotifyExt, VideoProgressBarDelegate, IVideoExt>
{
    _Bool _disabled;
    _Bool _coverMaskHidden;
    _Bool _disableResumeMusicPlayAfterPause;
    _Bool _shouldSkipStackOrResume;
    _Bool _fullScreenPlay;
    _Bool _forceMute;
    _Bool _isNeedResumeWXMusic;
    _Bool _managedByMMAVPlayerMgr;
    _Bool _wasPlayingBeforeClearPlayerView;
    _Bool _bUseVideoStreamPlayView;
    _Bool _bShouldResumeWhenSeekEnd;
    id <SightViewDelegate> _delegate;
    unsigned long long _scene;
    NSString *_thumbImagePath;
    UIImage *_thumbImage;
    NSString *_videoPath;
    NSString *_cpKey;
    long long _playStatus;
    double _progress;
    UIColor *_coverMaskBackgroundColor;
    VideoProgressBar *_progressBar;
    unsigned long long _audioCategroy;
    CMessageWrap *_m_oMessageWrap;
    WCMediaItem *_m_oWCMediaItem;
    SightIconView *_iconView;
    MMProgressViewEx *_progressView;
    UIView *_tapgGestureView;
    UITapGestureRecognizer *_tapGestureOnIconView;
    SightPlayerView *_playerView;
    UILabel *_hintLabel;
    UIView *_coverMask;
    long long _currentMaskType;
    NSString *_currentHintText;
    UIImageView *_thumbImageView;
    MMAVPlayerItemWrap *_playerWrap;
    WCStateMachine *_stateMachine;
    struct CGSize _iconViewSize;
}

@property(nonatomic) _Bool bShouldResumeWhenSeekEnd; // @synthesize bShouldResumeWhenSeekEnd=_bShouldResumeWhenSeekEnd;
@property(nonatomic) _Bool bUseVideoStreamPlayView; // @synthesize bUseVideoStreamPlayView=_bUseVideoStreamPlayView;
@property(nonatomic) _Bool wasPlayingBeforeClearPlayerView; // @synthesize wasPlayingBeforeClearPlayerView=_wasPlayingBeforeClearPlayerView;
@property(retain, nonatomic) WCStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) MMAVPlayerItemWrap *playerWrap; // @synthesize playerWrap=_playerWrap;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) NSString *currentHintText; // @synthesize currentHintText=_currentHintText;
@property(nonatomic) long long currentMaskType; // @synthesize currentMaskType=_currentMaskType;
@property(retain, nonatomic) UIView *coverMask; // @synthesize coverMask=_coverMask;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) SightPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) struct CGSize iconViewSize; // @synthesize iconViewSize=_iconViewSize;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureOnIconView; // @synthesize tapGestureOnIconView=_tapGestureOnIconView;
@property(retain, nonatomic) UIView *tapgGestureView; // @synthesize tapgGestureView=_tapgGestureView;
@property(retain, nonatomic) MMProgressViewEx *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SightIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool managedByMMAVPlayerMgr; // @synthesize managedByMMAVPlayerMgr=_managedByMMAVPlayerMgr;
@property(retain, nonatomic) WCMediaItem *m_oWCMediaItem; // @synthesize m_oWCMediaItem=_m_oWCMediaItem;
@property(retain, nonatomic) CMessageWrap *m_oMessageWrap; // @synthesize m_oMessageWrap=_m_oMessageWrap;
@property(nonatomic) _Bool isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(nonatomic) unsigned long long audioCategroy; // @synthesize audioCategroy=_audioCategroy;
@property(nonatomic) _Bool forceMute; // @synthesize forceMute=_forceMute;
@property(nonatomic) _Bool fullScreenPlay; // @synthesize fullScreenPlay=_fullScreenPlay;
@property(retain, nonatomic) VideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) _Bool shouldSkipStackOrResume; // @synthesize shouldSkipStackOrResume=_shouldSkipStackOrResume;
@property(nonatomic) _Bool disableResumeMusicPlayAfterPause; // @synthesize disableResumeMusicPlayAfterPause=_disableResumeMusicPlayAfterPause;
@property(retain, nonatomic) UIColor *coverMaskBackgroundColor; // @synthesize coverMaskBackgroundColor=_coverMaskBackgroundColor;
@property(nonatomic) _Bool coverMaskHidden; // @synthesize coverMaskHidden=_coverMaskHidden;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long playStatus; // @synthesize playStatus=_playStatus;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath=_thumbImagePath;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <SightViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnVideoThumbDidChange:(id)arg1;
- (void)notifySightPlayerContinuePlay;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onServiceEnterForeground:(id)arg1;
- (void)onServiceEnterBackground:(id)arg1;
- (void)onPauseOrStop;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderPauseVideo;
- (void)onSliderPlayVideo;
- (void)updateVideoTotalTime:(double)arg1;
- (void)onProgressBarHidden;
- (void)showMaskType:(long long)arg1 animated:(_Bool)arg2;
- (void)showCurrentHintText;
- (void)showCurrentMaskType;
- (void)setMaskType:(long long)arg1 hintText:(id)arg2 afterDelay:(double)arg3;
- (void)onStateMachineDidEnterState:(id)arg1 withTransition:(id)arg2;
- (_Bool)isCurrentStateNameContainedInStates:(id)arg1;
- (void)setPlayerLayerContentMode:(long long)arg1;
- (void)setThumbImageViewHidden:(_Bool)arg1;
- (void)OnUpdateThumbImage:(id)arg1;
- (void)videoDownloadErrorExpired:(_Bool)arg1;
- (void)startToPlayVideo;
- (void)hideVideoLoadingView;
- (void)showVideoLoadingView;
- (void)tryToPlayVideo;
- (void)onProgressEnd;
- (void)onSightDurationUpdate:(CDStruct_1b6d18a9)arg1;
- (void)onVideoSizeUpdate:(struct CGSize)arg1;
- (void)onResumeSightPlayerView:(id)arg1;
- (void)onStack;
- (void)onItemCleared;
- (_Bool)onPlayEnd:(_Bool)arg1;
- (void)onResume;
- (void)willStack;
- (_Bool)performClear;
- (_Bool)performFullPlayWithMute:(_Bool)arg1;
- (_Bool)performFullPlay;
- (_Bool)performFullLoad;
- (void)silentPlayImmediately;
- (void)performSilentPlay;
- (void)performPauseForce:(_Bool)arg1;
- (void)performLoadItem:(id)arg1;
- (void)seekToTime:(float)arg1;
- (void)stop;
- (void)pauseWithShowThumb:(_Bool)arg1 bForcePause:(_Bool)arg2;
- (void)pauseForce:(_Bool)arg1;
- (void)playWithMute:(_Bool)arg1 forceUsingAVPlayer:(_Bool)arg2 audioCategory:(unsigned long long)arg3;
- (void)clear;
- (void)clearPlayerView;
- (void)killPlayerWrap;
- (_Bool)isMute;
- (void)tryToStopImmediately;
- (void)tryToStop;
- (void)tryToPauseWithShowThumb:(_Bool)arg1;
- (void)tryToPause;
- (void)tryToSeekToTime:(float)arg1;
- (void)tryToSeekToStartTime;
- (unsigned long long)initPlayViewAndStartDownload;
- (void)tryToReportKVArgs:(struct C2CDownloadResult)arg1;
- (void)tryToSavePlayedTime;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (_Bool)isPlaying;
- (void)tryToPlayWithSound:(_Bool)arg1 hideCoverWithAnimation:(_Bool)arg2 forceUsingAVPlayer:(_Bool)arg3 audioCategory:(unsigned long long)arg4;
- (void)tryToPlayWithSound:(_Bool)arg1 hideCoverWithAnimation:(_Bool)arg2 forceUsingAVPlayer:(_Bool)arg3;
- (void)tryToPlayWithSound:(_Bool)arg1 hideCoverWithAnimation:(_Bool)arg2 audioCategory:(unsigned long long)arg3;
- (void)tryToPlayWithSound:(_Bool)arg1 hideCoverWithAnimation:(_Bool)arg2;
- (void)tryToPlayWithSound:(_Bool)arg1 forceUsingAVPlayer:(_Bool)arg2;
- (void)tryToPlayWithSound:(_Bool)arg1;
- (_Bool)isReadyToPlay;
- (void)tryToDisable;
- (void)tryToSetVideoPath:(id)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)setHintTextColor:(id)arg1;
- (void)setHintText:(id)arg1;
- (void)setLoadingViewHidden:(_Bool)arg1;
- (void)setHintViewHidden:(_Bool)arg1;
- (void)setIconViewHidden:(_Bool)arg1;
- (void)tryToSetProgressStep:(double)arg1;
- (void)tryToSetProgress:(double)arg1;
- (_Bool)isInFlowControl;
- (_Bool)tryToEnterFlowControl;
- (void)didFailToUploadVideo;
- (void)didUploadVideo;
- (_Bool)tryToUploadVideo;
- (void)tryToConnectForUpload;
- (void)tryToWaitForUpload;
- (_Bool)isFailedToDownloadVideo;
- (void)didFailToDownloadVideo;
- (_Bool)isDownloadingVideo;
- (_Bool)tryToDownloadVideo;
- (_Bool)isConnecting;
- (_Bool)tryToConnectForDownload;
- (_Bool)isWaitingForDownload;
- (_Bool)tryToWaitForDownload;
- (_Bool)isActive;
- (void)tryToReset;
- (void)showIntoScreen:(_Bool)arg1;
- (void)setThumbImageHidden:(_Bool)arg1;
- (void)setContentMode:(long long)arg1;
@property(nonatomic) _Bool disablePlayerStatusTimerCheck;
- (void)onSingleTapOnIconView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)hidePlayerView:(_Bool)arg1;
- (void)hideThumbImageView:(_Bool)arg1;
- (void)dealloc;
- (id)getVideoPlayerView;
- (void)initVideoPlayView;
- (void)initSightPlayView;
- (id)getSightPlayerView;
- (void)tryShowDownloadingView;
- (void)animateHideDownloadingView;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetStateMachine;
- (void)activate;
- (void)setStateMachine;
- (id)initWithFrame:(struct CGRect)arg1 managedByMMAVPlayerMgr:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithManagedByMMAVPlayerMgr:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

