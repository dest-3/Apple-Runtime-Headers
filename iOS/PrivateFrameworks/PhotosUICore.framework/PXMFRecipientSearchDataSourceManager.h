//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRecipientSearchDataSourceManager.h>

#import <PhotosUICore/MFContactsSearchConsumer-Protocol.h>

@class MFContactsSearchManager, NSArray, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, PXIDSAddressQueryController, PXMFRecipientSearchDataSource;
@protocol OS_dispatch_queue;

@interface PXMFRecipientSearchDataSourceManager : PXRecipientSearchDataSourceManager <MFContactsSearchConsumer>
{
    NSObject<OS_dispatch_queue> *_creationQueue;
    MFContactsSearchManager *_searchManager;
    NSNumber *_currentSearchTaskID;
    // Error parsing type: AI, name: _currentAtomicSearchTaskID
    NSMutableArray *_autocompleteSearchResults;
    NSDictionary *_searchResultsByDestination;
    PXIDSAddressQueryController *_addressQueryController;
    NSArray *__searchResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setSearchResults:) NSArray *_searchResults; // @synthesize _searchResults=__searchResults;
- (void)_finishedCreatingRecipientSearchResults:(id)arg1 forSearchTaskID:(id)arg2;
- (void)_creationQueue_creatingRecipientSearchResultsForResults:(id)arg1 forSearchTaskID:(id)arg2;
- (void)finishedSearchingForAutocompleteResults;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (void)queryStringDidChange;
- (void)_createDataSource;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXMFRecipientSearchDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

