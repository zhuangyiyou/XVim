//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/PlugIns/IDEiOSDebugger.ideplugin/Contents/MacOS/IDEiOSDebugger
// UUID: 7184697C-5EF2-3ADF-84D7-59E50B33ABBA
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 8167.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode-7GM.app/Contents/PlugIns
//

@protocol DBGCGPathProvider <NSObject>
@property(readonly) double lineDashPhase;
@property(readonly) NSArray *lineDashPattern;
@property(readonly) BOOL usesEvenOddFillRule;
@property(readonly) double flatness;
@property(readonly) double miterLimit;
@property(readonly) int lineJoinStyle;
@property(readonly) int lineCapStyle;
@property(readonly) double lineWidth;
@property(readonly) struct CGPath *path;
@property(readonly) BOOL hasPathBeenRetrieved;
- (void)cancel;
- (id)initWithDataValue:(id <IDEDataValue>)arg1 options:(NSDictionary *)arg2;
@end

@protocol DBGKitDebuggingAddition <IDEDebuggingAddition>

@optional
@property(nonatomic) BOOL showsResponsiveScrollingStatusOfAllViews;
@property(nonatomic) BOOL flashesDrawingOfAllViews;
@property(nonatomic) BOOL showsAlignmentRectanglesOfAllViews;
@property(nonatomic) BOOL showsFramesOfAllViews;
@end

@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
+ (BOOL)supportsInvalidationPrevention;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
@end

@protocol IDEDebuggingAddition <NSObject, DVTInvalidation>
@property(readonly) NSString *identifier;
@property(readonly, nonatomic) IDELaunchSession *launchSession;
- (id)initInLaunchSession:(IDELaunchSession *)arg1 withAppDisplayName:(NSString *)arg2 runDestination:(IDERunDestination *)arg3 fromExtension:(DVTExtension *)arg4;

@optional
+ (BOOL)shouldInstantiateInLaunchSession:(IDELaunchSession *)arg1;
- (void)processFinalLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
- (IDELaunchParametersSnapshot *)adjustedLaunchParametersForLaunchParameters:(IDELaunchParametersSnapshot *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(Protocol *)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (BOOL)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol __ARCLiteIndexedSubscripting__
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@end

@protocol __ARCLiteKeyedSubscripting__
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@end

@interface DBGCGPathProviderForUIBezierPath : NSObject <DBGCGPathProvider>
{
    int _loadedState;
    id <IDEDataValue> _dataValue;
    DBGNSDataForDataValueProvider *_nsDataForDataValueProvider;
    DVTObservingToken *_nsDataForDataValueProviderObserver;
    struct CGPath *_path;
    BOOL _usesEvenOddFillRule;
    BOOL _hasPathBeenRetrieved;
    int _lineCapStyle;
    int _lineJoinStyle;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
    NSArray *_lineDashPattern;
    double _lineDashPhase;
}

@property BOOL hasPathBeenRetrieved; // @synthesize hasPathBeenRetrieved=_hasPathBeenRetrieved;
@property double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(retain) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property BOOL usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;
@property double flatness; // @synthesize flatness=_flatness;
@property double miterLimit; // @synthesize miterLimit=_miterLimit;
@property int lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) struct CGPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (struct CGPath *)_createMutablePathByDecodingData:(id)arg1 addressSize:(unsigned long long)arg2;
- (void)_updateCGPathAndPropertiesFromNSData;
- (void)cancel;
- (id)initWithDataValue:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface DBGUIBezierPathDecoder : NSObject
{
    BOOL _usesEvenOddFillRule;
    int _lineCapStyle;
    int _lineJoinStyle;
    NSData *_cgPathData;
    double _lineWidth;
    double _miterLimit;
    double _flatness;
    NSArray *_lineDashPattern;
    double _lineDashPhase;
}

@property double lineDashPhase; // @synthesize lineDashPhase=_lineDashPhase;
@property(retain) NSArray *lineDashPattern; // @synthesize lineDashPattern=_lineDashPattern;
@property BOOL usesEvenOddFillRule; // @synthesize usesEvenOddFillRule=_usesEvenOddFillRule;
@property double flatness; // @synthesize flatness=_flatness;
@property double miterLimit; // @synthesize miterLimit=_miterLimit;
@property int lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property int lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) NSData *cgPathData; // @synthesize cgPathData=_cgPathData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;

@end

@interface DBGUIKitDebuggingAddition : NSObject <DBGKitDebuggingAddition>
{
    BOOL _showsFramesOfAllViews;
    BOOL _showsAlignmentRectanglesOfAllViews;
    IDELaunchSession *_launchSession;
    NSString *_identifier;
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (void)initialize;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(nonatomic) BOOL showsAlignmentRectanglesOfAllViews; // @synthesize showsAlignmentRectanglesOfAllViews=_showsAlignmentRectanglesOfAllViews;
@property(nonatomic) BOOL showsFramesOfAllViews; // @synthesize showsFramesOfAllViews=_showsFramesOfAllViews;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL flashesDrawingOfAllViews;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(nonatomic) BOOL showsResponsiveScrollingStatusOfAllViews;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

@interface DBGViewDebuggeriOSDescriber : DBGAbstractViewDescriber
{
}

+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
+ (id)viewDebuggingDylibPathForLaunchSession:(id)arg1;
+ (void)initialize;
- (void)primitiveInvalidate;
- (id)targetKitFamilyIdentifier;
- (id)_fontFromSummary:(id)arg1;
- (void)_asyncAskForInspectableImageFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_asyncAskForInspectableColorFromDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)inspectableValueForDataValue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_turnOnLayersAsSnapshotsOptionString;
- (void)fetchViewInfo:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (BOOL)isViewObjectInteresting:(id)arg1;
- (id)classNameForDefaultViewIcon;

@end

