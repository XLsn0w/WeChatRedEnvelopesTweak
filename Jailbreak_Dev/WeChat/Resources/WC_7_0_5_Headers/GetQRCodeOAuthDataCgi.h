//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseCgi.h"

@class GetQRCodeOAuthDataReq;

@interface GetQRCodeOAuthDataCgi : WCBaseCgi
{
    _Bool _hasHandleEcdhRollback;
    GetQRCodeOAuthDataReq *_authReq;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetQRCodeOAuthDataReq *authReq; // @synthesize authReq=_authReq;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)createRequest;
- (void)dealloc;
- (void)didFailWithError:(id)arg1 reponse:(id)arg2;
- (void)didGetResponse:(id)arg1;
@property(nonatomic) _Bool hasHandleEcdhRollback; // @synthesize hasHandleEcdhRollback=_hasHandleEcdhRollback;
- (id)initWithAuthReq:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;

@end
