//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactMgrExt.h"
#import "ITopStoryColikeExt.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "NewChatRoomMemberItemViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCreateNewGroupViewControllerDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, MMUIButton, MMUILabel, NSMutableArray, NSMutableDictionary, NSString, UILabel, UIView;

@interface WSWowBlackListClassifyMembersViewController : MMUIViewController <WCActionSheetDelegate, tableViewDelegate, NewChatRoomMemberItemViewDelegate, MultiSelectContactsViewControllerDelegate, IContactMgrExt, WCCreateNewGroupViewControllerDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, ITopStoryColikeExt>
{
    _Bool _deleteStatus;
    unsigned long long _pageType;
    unsigned long long _updateStatus;
    NSMutableDictionary *_dicGroupMemberView;
    NSMutableArray *_memberList;
    NSMutableArray *_tempAddList;
    MMTableView *_tableView;
    UILabel *_infoTip;
    UIView *_backoutBgView;
    MMUIButton *_backoutButton;
    MMUILabel *_backoutTip;
    UIView *_footerView;
    NSMutableArray *_tempAsyncModList;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)arrangeItemsWithList:(id)arg1 addList:(id)arg2 delList:(id)arg3;
@property(retain, nonatomic) UIView *backoutBgView; // @synthesize backoutBgView=_backoutBgView;
@property(retain, nonatomic) MMUIButton *backoutButton; // @synthesize backoutButton=_backoutButton;
- (void)backoutButtonClicked:(id)arg1;
- (void)backoutFriendsAdded;
@property(retain, nonatomic) MMUILabel *backoutTip; // @synthesize backoutTip=_backoutTip;
- (void)dealloc;
@property(nonatomic) _Bool deleteStatus; // @synthesize deleteStatus=_deleteStatus;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMemberView; // @synthesize dicGroupMemberView=_dicGroupMemberView;
- (id)diffMemberList;
- (id)extraItemsInArray:(id)arg1 besidesInArray:(id)arg2;
- (id)extraItemsInArray:(id)arg1 besidesInArray:(id)arg2 action:(int)arg3;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
- (long long)getColCount;
- (void)hideBackoutView;
@property(retain, nonatomic) UILabel *infoTip; // @synthesize infoTip=_infoTip;
- (void)initBackoutViewWithSuperView:(id)arg1;
- (void)initBlacklistFooterView;
- (void)initData;
- (void)initFooterView;
- (void)initOutsiderFooterView;
- (void)initView;
- (id)initWithType:(unsigned long long)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 indexPath:(id)arg3;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList=_memberList;
- (void)modBlockMembers;
- (void)modHideMembers;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddMember:(id)arg1;
- (void)onAllRequestColikeBlockEnd:(long long)arg1 sucCount:(long long)arg2 failCount:(long long)arg3;
- (void)onCancel;
- (void)onDeleteMember:(id)arg1;
- (void)onDismiss;
- (void)onDone;
- (void)onLongPressEx:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onRequestGetColikeBlockListEndResult:(_Bool)arg1 withType:(unsigned int)arg2 list:(id)arg3;
- (void)onRequestGetColikeBlockListEndResultBeforeConfigData:(_Bool)arg1 withType:(unsigned int)arg2 list:(id)arg3 oriList:(id)arg4;
- (void)openContactInfo:(id)arg1;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
- (void)reloadMember:(id)arg1;
- (void)reloadMemberListAndView;
- (void)setShowRemoveMember;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *tempAddList; // @synthesize tempAddList=_tempAddList;
@property(retain, nonatomic) NSMutableArray *tempAsyncModList; // @synthesize tempAsyncModList=_tempAsyncModList;
@property(nonatomic) unsigned long long updateStatus; // @synthesize updateStatus=_updateStatus;
- (_Bool)shouldModGroup;
- (void)showAlert:(id)arg1;
- (void)showBackoutView;
- (void)startLoadingWithTitle:(id)arg1;
- (void)stopLoadingWithTitle:(id)arg1 isOK:(_Bool)arg2 delay:(double)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)updateNavigation;
- (void)updateTitle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
