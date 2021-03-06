//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ImageKit/NSCopying-Protocol.h>

@class ICScannerDevice, ICScannerFunctionalUnit, IKImageCorrectionHandler, IKScanInfo, IKScanUIController, NSMutableDictionary, NSMutableSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface IKScan : NSObject <NSCopying>
{
    NSString *_documentName;
    NSString *_documentDisplayName;
    NSString *_userSpecifiedDocumentName;
    NSURL *_documentLocation;
    NSString *_fileFormat;
    ICScannerDevice *_scannerDevice;
    ICScannerFunctionalUnit *_functionalUnit;
    unsigned long long _pixelDataType;
    unsigned long long _bitDepth;
    unsigned long long _measurementUnit;
    unsigned long long _resolution;
    unsigned long long _scaleFactor;
    BOOL _useScanRect;
    struct CGRect _scanRect;
    struct CGPoint _inchPosition;
    unsigned long long _scanRectOrientation;
    unsigned char _thresholdForBlackAndWhiteScanning;
    unsigned long long _overviewResolution;
    unsigned long long _userRequestedOverviewResolution;
    unsigned long long _documentType;
    unsigned long long _flatbedOrientation;
    BOOL _duplexScanningEnabled;
    unsigned long long _oddPageOrientation;
    unsigned long long _evenPageOrientation;
    long long _autoSelection;
    double _rotationAngle;
    IKImageCorrectionHandler *_imageCorrectionHandler;
    BOOL _createSingleDocument;
    NSURL *_postProcessingApp;
    struct CGSize _selectionSize;
    struct CGRect _scanRectNonClipped;
    double _scanPercentDone;
    IKScanUIController *_delegate;
    BOOL _scanComplete;
    BOOL _scanToTempDirectory;
    BOOL _scanIsICARawScan;
    long long _state;
    NSURL *_scannedImageURL;
    NSURL *_finalDestURL;
    NSMutableSet *_completedScans;
    unsigned long long _currentScanType;
    NSMutableDictionary *_metaData;
    IKScanInfo *_scanInfo;
    long long _numberOfSelections;
    long long _currentSelectionIndex;
    BOOL _selfTestRunning;
    BOOL _transferModeMemoryBased;
    BOOL _reviewSimpleScanResults;
    BOOL _scanFailed;
    BOOL _createSingleDocumentReChecked;
    NSString *_lastDocumentName;
    NSURL *_lastDocumentLocation;
    int _currentScanIndex;
    long long _scannerReportedError;
    BOOL _scanInProgress;
    BOOL _overviewScanInProgress;
    BOOL _needsSpecialOrientationHandling;
}

+ (struct CGImage *)copy1BitImageFromCGContext:(struct CGContext *)arg1 inputImage:(struct CGImage *)arg2;
@property BOOL needsSpecialOrientationHandling; // @synthesize needsSpecialOrientationHandling=_needsSpecialOrientationHandling;
@property struct CGPoint inchPosition; // @synthesize inchPosition=_inchPosition;
@property long long scannerReportedError; // @synthesize scannerReportedError=_scannerReportedError;
@property(copy) NSURL *lastDocumentLocation; // @synthesize lastDocumentLocation=_lastDocumentLocation;
@property(copy) NSString *lastDocumentName; // @synthesize lastDocumentName=_lastDocumentName;
@property(nonatomic) BOOL createSingleDocumentReChecked; // @synthesize createSingleDocumentReChecked=_createSingleDocumentReChecked;
@property BOOL reviewSimpleScanResults; // @synthesize reviewSimpleScanResults=_reviewSimpleScanResults;
@property BOOL selfTestRunning; // @synthesize selfTestRunning=_selfTestRunning;
@property(retain) IKScanInfo *scanInfo; // @synthesize scanInfo=_scanInfo;
@property struct CGRect scanRectNonClipped; // @synthesize scanRectNonClipped=_scanRectNonClipped;
@property struct CGSize selectionSize; // @synthesize selectionSize=_selectionSize;
@property(copy, nonatomic) NSURL *finalDestURL; // @synthesize finalDestURL=_finalDestURL;
@property BOOL scanIsICARawScan; // @synthesize scanIsICARawScan=_scanIsICARawScan;
@property BOOL scanToTempDirectory; // @synthesize scanToTempDirectory=_scanToTempDirectory;
@property(readonly) unsigned long long overviewResolution; // @synthesize overviewResolution=_overviewResolution;
@property(nonatomic) double scanPercentDone; // @synthesize scanPercentDone=_scanPercentDone;
@property BOOL scanComplete; // @synthesize scanComplete=_scanComplete;
@property long long state; // @synthesize state=_state;
@property(copy) NSURL *scannedImageURL; // @synthesize scannedImageURL=_scannedImageURL;
@property(retain) NSMutableSet *completedScans; // @synthesize completedScans=_completedScans;
@property(nonatomic) BOOL createSingleDocument; // @synthesize createSingleDocument=_createSingleDocument;
@property IKImageCorrectionHandler *imageCorrectionHandler; // @synthesize imageCorrectionHandler=_imageCorrectionHandler;
@property double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property long long autoSelection; // @synthesize autoSelection=_autoSelection;
@property unsigned long long evenPageOrientation; // @synthesize evenPageOrientation=_evenPageOrientation;
@property unsigned long long oddPageOrientation; // @synthesize oddPageOrientation=_oddPageOrientation;
@property BOOL duplexScanningEnabled; // @synthesize duplexScanningEnabled=_duplexScanningEnabled;
@property unsigned long long flatbedOrientation; // @synthesize flatbedOrientation=_flatbedOrientation;
@property unsigned long long documentType; // @synthesize documentType=_documentType;
@property unsigned long long scanRectOrientation; // @synthesize scanRectOrientation=_scanRectOrientation;
@property(nonatomic) struct CGRect scanRect; // @synthesize scanRect=_scanRect;
@property BOOL useScanRect; // @synthesize useScanRect=_useScanRect;
@property unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property unsigned long long resolution; // @synthesize resolution=_resolution;
@property unsigned long long measurementUnit; // @synthesize measurementUnit=_measurementUnit;
@property unsigned long long bitDepth; // @synthesize bitDepth=_bitDepth;
@property unsigned long long pixelDataType; // @synthesize pixelDataType=_pixelDataType;
@property(copy) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(copy, nonatomic) NSURL *documentLocation; // @synthesize documentLocation=_documentLocation;
@property(copy) NSString *userSpecifiedDocumentName; // @synthesize userSpecifiedDocumentName=_userSpecifiedDocumentName;
@property(copy, nonatomic) NSString *documentDisplayName; // @synthesize documentDisplayName=_documentDisplayName;
@property(copy, nonatomic) NSString *documentName; // @synthesize documentName=_documentName;
@property(nonatomic) IKScanUIController *delegate; // @synthesize delegate=_delegate;
- (void)wdUpdatePercentDone:(double)arg1;
- (void)wdCompleteScan:(id)arg1;
- (void)wdUpdateScan:(id)arg1 percentDone:(double)arg2;
- (void)wdStartScan:(id)arg1;
- (void)wdCompleteOverviewScan:(id)arg1;
- (void)wdUpdateOverviewScan:(id)arg1 percentDone:(double)arg2;
- (void)wdStartOverviewScan:(id)arg1;
- (void)resetScanTimer;
- (void)resetOverviewTimer;
- (void)scanTimedOut;
- (void)overviewTimedOut;
- (void)updateFunctionalUnit:(id)arg1;
- (BOOL)startScan:(id)arg1;
- (BOOL)scanNextSelection;
- (void)dumpVendorFeatures;
- (void)autoScansNextPage;
- (BOOL)startOverviewScan:(id)arg1;
- (void)updatePercentDone;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)device:(id)arg1 didReceiveStatusInformation:(id)arg2;
- (void)scannerDevice:(id)arg1 didCompleteScanWithError:(id)arg2;
- (void)scannerDevice:(id)arg1 didCompleteOverviewScanWithError:(id)arg2;
- (void)scannerDevice:(id)arg1 didScanToURL:(id)arg2 newStyle:(BOOL)arg3;
- (id)saveImage:(struct CGImage *)arg1 toDownloadURL:(id)arg2 documentName:(id)arg3 imageType:(id)arg4 optimize:(BOOL)arg5;
- (struct CGImage *)copySizeOptimizedImage:(struct CGImage *)arg1;
- (void)rotateAndCrop:(struct CGImage *)arg1 url:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyImageCorrection:(struct CGImage *)arg1 url:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveToFinalDestination:(struct CGImage *)arg1 url:(id)arg2;
- (void)doneWithScan:(id)arg1;
- (void)appendURL:(id)arg1 toImageURL:(id)arg2;
- (void)appendImage:(struct CGImage *)arg1 toImageURL:(id)arg2;
- (id)imagePropertiesForAppending:(struct CGImage *)arg1;
- (void)appendURL:(id)arg1 toPDFURL:(id)arg2;
- (void)writeImage:(struct CGImage *)arg1 toPDFURL:(id)arg2 metadata:(id)arg3;
- (int)rotationFromOrientation:(int)arg1 dict:(id)arg2;
- (void)appendPDFJPEGPage:(struct CGPDFPage *)arg1 toPDFDocument:(struct CGPDFDocument *)arg2;
- (void)writeImage:(struct CGImage *)arg1 toImageURL:(id)arg2;
- (void)handleCGImageDestinationFinalize:(BOOL)arg1 url:(id)arg2 format:(id)arg3;
- (unsigned long long)freeSpaceAtURL:(id)arg1;
- (void)deleteTempFileForURL:(id)arg1;
- (void)postError:(long long)arg1;
- (void)errorAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)tiffDataFromScanData:(id)arg1;
- (struct __CFData *)copyJPEGData:(struct CGImage *)arg1 resolution:(unsigned long long)arg2;
- (struct __CFData *)copyImageData:(struct CGImage *)arg1 resolution:(unsigned long long)arg2 format:(struct __CFString *)arg3;
- (void)doPostProcessing:(id)arg1;
- (struct CGImage *)copyCGImageFromURL;
- (struct CGImage *)copyCGImageFromRawScanURL;
- (struct CGImage *)copyCGImageFromRawScanData:(id)arg1;
- (struct CGImage *)copyCGImageFromImageURL;
- (void)CGImageSaveToFile:(struct CGImage *)arg1 name:(const char *)arg2;
- (void)prepareForNumberOfSelections:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)tempScanDir;
- (double)screenDPI;
- (void)dealloc;
- (id)init;

@end

