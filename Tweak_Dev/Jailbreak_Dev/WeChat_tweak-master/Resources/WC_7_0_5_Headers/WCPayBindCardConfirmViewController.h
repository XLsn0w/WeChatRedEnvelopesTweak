//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayBindCardConfirmViewDelegate.h"

@class NSString;

@interface WCPayBindCardConfirmViewController : WCPayBaseViewController <WCPayBindCardConfirmViewDelegate>
{
    id <WCPayBindCardConfirmViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayBindCardConfirmViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)navigationBarBackgroundColor;
- (void)onBack;
- (void)onWCPayBindCardConfirmViewConfirm:(_Bool)arg1;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
