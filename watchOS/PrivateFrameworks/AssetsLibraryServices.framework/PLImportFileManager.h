//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject
{
    PLPhotoLibraryPathManager *_pathManager;
}

+ (_Bool)isCameraDirectoryFolderName:(id)arg1;
+ (_Bool)isImportDirectoryFolderName:(id)arg1;
- (void).cxx_destruct;
- (_Bool)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (id)urlForNewDCIMFolderWithFolderNumber:(int *)arg1;
- (id)_DCIMFolderNameWithNumber:(int)arg1;
- (id)_dcimDirectory;
- (id)initWithPathManager:(id)arg1;
- (id)init;

@end

