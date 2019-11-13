//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCCardPkgExt.h"
#import "PBMessageObserverDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCardDataControllerDelegate.h"

@class MMUISearchBar, NSString, UIActivityIndicatorView, UIButton, UIScrollView, UISegmentedControl, UIView, WCCardDataController, WCCardPackageTableView;

@interface WCCardPackageViewController : MMUIViewController <IWCCardPkgExt, WCCardDataControllerDelegate, PBMessageObserverDelegate, UIAlertViewDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, UISearchBarDelegate, UITableViewDelegate>
{
    double _headViewHeight;
    UIButton *_messageTipView;
    UIButton *_messageTipViewForShare;
    WCCardDataController *_myCardDataController;
    WCCardPackageTableView *_myCardTableView;
    UIView *_myCardFooterView;
    UIScrollView *_myCardLoadingView;
    UIActivityIndicatorView *_mgCardActivityView;
    UIButton *_myCardHeadView;
    unsigned int _myCardMinUpdateTime;
    MMUISearchBar *_searchBar;
    UISegmentedControl *_segmentedControl;
    double _enterTimeForState;
    _Bool fromAddEntrance;
    _Bool hasAlreadyGetCardLayout;
    _Bool fromShareCardList;
    _Bool _fromMoreViewController;
    id <WCCardPackageViewControllerDelegate> delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <WCCardPackageViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool fromAddEntrance; // @synthesize fromAddEntrance;
@property(nonatomic) _Bool fromMoreViewController; // @synthesize fromMoreViewController=_fromMoreViewController;
@property(nonatomic) _Bool fromShareCardList; // @synthesize fromShareCardList;
- (id)genNewMessageTipView:(id)arg1;
- (id)getCardMsgTipWording;
- (id)getMyCardTableView;
- (id)getViewController;
- (double)getViewHeight;
- (void)gotoMsgCenterViewControllerForNewMsg:(_Bool)arg1;
@property(nonatomic) _Bool hasAlreadyGetCardLayout; // @synthesize hasAlreadyGetCardLayout;
- (_Bool)hasEnterCardListBefore;
- (_Bool)hasEnterCardListBefore;
- (_Bool)hasUnreadMessage;
- (_Bool)hasUnreadMessage;
- (id)init;
- (void)initHeaderViewWithLastMsg:(id)arg1;
- (void)initMyCardData;
- (void)initMyCardLoadingView;
- (void)initMyCardTableView;
- (void)initNavigationBar;
- (_Bool)isFromAddEntrance;
- (void)layoutTableView;
- (void)loadMoreMyCard;
- (void)onCancel;
- (void)onCardPackageViewSelectCardItem:(id)arg1;
- (void)onDeleteCardIDList:(id)arg1 ErrCode:(int)arg2;
- (void)onGetCardLayout;
- (void)onGetCardLayoutStop;
- (void)onGetFirstPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onGetNextPageWCCardList:(id)arg1 ErrCode:(int)arg2 HasMore:(_Bool)arg3 HasBatchGeting:(_Bool)arg4;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)onLoadMoreMyCardData;
- (void)onRetrieveLocation:(int)arg1;
- (void)onRightButtonOP;
- (void)onShowAllMessage;
- (void)onSyncEnd:(_Bool)arg1;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onWCCardTips;
- (void)onWCCardUpdate:(id)arg1;
- (void)scrollToShareCard;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)setHasEnterCardListBefore;
- (void)showLoadingView;
- (void)showMessageListByMore;
- (void)showMessageListByNewMsg;
- (void)showTableView;
- (void)stopActivityLoading;
- (void)stopLoadMoreAnimation;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
