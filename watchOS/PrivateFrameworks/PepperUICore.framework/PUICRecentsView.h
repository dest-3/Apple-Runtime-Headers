//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PepperUICore/PUICCollectionViewDataSource-Protocol.h>
#import <PepperUICore/PUICCollectionViewDelegate-Protocol.h>
#import <PepperUICore/PUICCollectionViewDelegateFlowLayout-Protocol.h>

@class NSMutableArray, NSString, PUICActivityIndicatorView, PUICCollectionView, PUICContentUnavailableView, PUICEmojiCategoryHeaderView;
@protocol PUICRecentsViewDelegate;

@interface PUICRecentsView : UIView <PUICCollectionViewDelegate, PUICCollectionViewDelegateFlowLayout, PUICCollectionViewDataSource>
{
    PUICContentUnavailableView *_contentUnavailableView;
    PUICActivityIndicatorView *_activityIndicatorView;
    PUICEmojiCategoryHeaderView *_sizingHeader;
    NSMutableArray *_recentItems;
    NSString *_language;
    _Bool _recentsLoaded;
    PUICCollectionView *_collectionView;
    id <PUICRecentsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUICRecentsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUICCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)deactivate;
- (void)activate;
- (unsigned int)collectionView:(id)arg1 layout:(id)arg2 notchBehaviorForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)showContentUnavailableView;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)loadRecents;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

