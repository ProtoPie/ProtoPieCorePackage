#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PPCSAbstractMediaLayer, PPCSAbstractTextLayer, PPCSBridgeRequest, PPCSBridgeRequestCompanion, PPCSBridgeResponse, PPCSBridgeResponseError, PPCSBridgeResponseResponseStatus, PPCSBridgeResponseSuccess, PPCSCommon, PPCSDeviceDesc, PPCSDeviceDescCompanion, PPCSDeviceFrameHelper, PPCSDevicePreset, PPCSFormulaUtils, PPCSKotlinArray<T>, PPCSKotlinEnum<E>, PPCSKotlinEnumCompanion, PPCSKotlinException, PPCSKotlinFloatArray, PPCSKotlinFloatIterator, PPCSKotlinNothing, PPCSKotlinThrowable, PPCSKotlinx_serialization_coreSerialKind, PPCSKotlinx_serialization_coreSerializersModule, PPCSKotlinx_serialization_jsonJsonElement, PPCSKotlinx_serialization_jsonJsonElementCompanion, PPCSLogLevel, PPCSLogger, PPCSMediaState, PPCSMediaStateCompanion, PPCSPPAndroidVibrateType, PPCSPPAxis3D, PPCSPPBlurEffectStyle, PPCSPPBorderPosition, PPCSPPBridgeCompanion, PPCSPPCameraLayerCommand, PPCSPPCameraPosition, PPCSPPChangeObserversHolder, PPCSPPChangeTarget, PPCSPPClock, PPCSPPColor, PPCSPPColorCompanion, PPCSPPColorProperty, PPCSPPContainerLayer, PPCSPPCorners<T>, PPCSPPDataType, PPCSPPDeviceFrameType, PPCSPPDeviceInfo, PPCSPPDeviceInfoCompanion, PPCSPPEventChannel<T>, PPCSPPExpr, PPCSPPExprEvalError, PPCSPPExprEvalErrorCompanion, PPCSPPExprParseError, PPCSPPExprParseErrorCompanion, PPCSPPFillScaleMode, PPCSPPFixedSceneChangeEventCompanion, PPCSPPFloatCorners, PPCSPPFloatProperty, PPCSPPFont, PPCSPPHitArea, PPCSPPHorizontalAlign, PPCSPPIdentifiableChangeObservable, PPCSPPInputFocusEventCompanion, PPCSPPIosEffectEventCompanion, PPCSPPIosVibrateType, PPCSPPKeyCode, PPCSPPKeyCodeCompanion, PPCSPPKotlinGC, PPCSPPLayer, PPCSPPLayerAlias, PPCSPPLayerCompanion, PPCSPPLayerLayoutBBox, PPCSPPLayerProperty, PPCSPPLayerType, PPCSPPLayerViewSplitterCompanion, PPCSPPLayerViewSplitterGroup, PPCSPPLineCap, PPCSPPLineJoin, PPCSPPMediaCommand, PPCSPPMediaCommandCompanion, PPCSPPMediaCommandEventCompanion, PPCSPPMessage, PPCSPPMessageBus, PPCSPPMessageCompanion, PPCSPPMsg, PPCSPPMsgChannel, PPCSPPMsgChannelCompanion, PPCSPPMsgCompanion, PPCSPPNumberConstantExpr, PPCSPPPathSegmentData, PPCSPPPathSegmentType, PPCSPPPieContext, PPCSPPPieModel, PPCSPPPieModelCompanion, PPCSPPPiePlayerEvent, PPCSPPPiePlayerEventTextInputFocusedIn, PPCSPPPiePlayerEventTextInputFocusedOut, PPCSPPPieRecord, PPCSPPPlatformType, PPCSPPPlayControlGestureOptions, PPCSPPPlayEvent, PPCSPPPlayEventCompanion, PPCSPPPoint, PPCSPPPointCompanion, PPCSPPProperty<T>, PPCSPPRenderEvent, PPCSPPRenderEventCompanion, PPCSPPReorderEventCompanion, PPCSPPRepeatDef, PPCSPPScene, PPCSPPSceneChangeArgs, PPCSPPSceneChangeEvent, PPCSPPSceneChangeEventCompanion, PPCSPPSensor, PPCSPPShapeLayer, PPCSPPSize, PPCSPPSpeechGender, PPCSPPStringProperty, PPCSPPTextAttributes, PPCSPPTextAttributesCompanion, PPCSPPTextInputLayer, PPCSPPTextInputLayerKeyboardLook, PPCSPPTextInputLayerKeyboardType, PPCSPPTextInputLayerReturnKeyType, PPCSPPTextLayerSizeMode, PPCSPPTouchEvent, PPCSPPTouchEventAction, PPCSPPValueHistory<T>, PPCSPPValueHistoryCompanion, PPCSPPVar<T>, PPCSPPVarCompanion, PPCSPPVectorShape, PPCSPPVectorShapeType, PPCSPPVerticalAlign, PPCSPlatform, PPCSProfileOptions, PPCSReplayData, PPCSReplayDataCompanion, PPCSReplayDataSerializer, PPCSReplayDataVersionCompanion, PPCSReplayOptions, PPCSReplayer, PPCSScreenInfo, PPCSSoundSensorControlRequest, PPCSSoundSensorType, PPCSSoundSensorValueRequest, PPCSVibrationRequest;

@protocol PPCSFormulaObserver, PPCSKotlinAnnotation, PPCSKotlinComparable, PPCSKotlinIterator, PPCSKotlinKAnnotatedElement, PPCSKotlinKClass, PPCSKotlinKClassifier, PPCSKotlinKDeclarationContainer, PPCSKotlinx_serialization_coreCompositeDecoder, PPCSKotlinx_serialization_coreCompositeEncoder, PPCSKotlinx_serialization_coreDecoder, PPCSKotlinx_serialization_coreDeserializationStrategy, PPCSKotlinx_serialization_coreEncoder, PPCSKotlinx_serialization_coreKSerializer, PPCSKotlinx_serialization_coreSerialDescriptor, PPCSKotlinx_serialization_coreSerializationStrategy, PPCSKotlinx_serialization_coreSerializersModuleCollector, PPCSPPBridge, PPCSPPChangeObserver, PPCSPPClockObserver, PPCSPPEngineObserver, PPCSPPEventChannelHandler, PPCSPPExprLayer, PPCSPPJson, PPCSPPLayerObserver, PPCSPPMessageBusTaskRunner, PPCSPPObservableValueProvider, PPCSPPPieDecorator, PPCSPPPropertyObserver, PPCSPPSensorListener, PPCSPPSensorManager, PPCSPPSpeechInterface, PPCSPPSpeechInterfaceListener, PPCSPPTextInputLayerFocusRequestListener, PPCSPPTextInputLayerFocusStateListener, PPCSPPValueProvider, PPCSPPVoiceInterface, PPCSPPVoiceInterfaceListener, PPCSPlayerDelegate, PPCSReplayerDelegate;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PPCSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PPCSBase (PPCSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PPCSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PPCSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPPCSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PPCSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PPCSByte : PPCSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PPCSUByte : PPCSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PPCSShort : PPCSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PPCSUShort : PPCSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PPCSInt : PPCSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PPCSUInt : PPCSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PPCSLong : PPCSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PPCSULong : PPCSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PPCSFloat : PPCSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PPCSDouble : PPCSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PPCSBoolean : PPCSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Common")))
@interface PPCSCommon : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)common __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSCommon *shared __attribute__((swift_name("shared")));
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (NSString *)getDeviceInfo __attribute__((swift_name("getDeviceInfo()")));
- (NSString *)getEngineVersion __attribute__((swift_name("getEngineVersion()")));
- (NSString *)getProfileData __attribute__((swift_name("getProfileData()")));
- (NSString * _Nullable)getQrScannerLicenseApplicationId:(NSString *)applicationId __attribute__((swift_name("getQrScannerLicense(applicationId:)")));
- (void)markTrigger __attribute__((swift_name("markTrigger()")));
- (void)setProfileOptionsOptions:(PPCSProfileOptions *)options __attribute__((swift_name("setProfileOptions(options:)")));
- (void)traceMessage:(NSString *)message __attribute__((swift_name("trace(message:)")));
@property (readonly) BOOL ENABLE_DEBUG __attribute__((swift_name("ENABLE_DEBUG")));
@property (readonly) BOOL ENABLE_PROFILE __attribute__((swift_name("ENABLE_PROFILE")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PPCSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PPCSKotlinEnum<E> : PPCSBase <PPCSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface PPCSLogLevel : PPCSKotlinEnum<PPCSLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSLogLevel *none __attribute__((swift_name("none")));
@property (class, readonly) PPCSLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) PPCSLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) PPCSLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PPCSLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) PPCSLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) PPCSLogLevel *assert __attribute__((swift_name("assert")));
+ (PPCSKotlinArray<PPCSLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSLogLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface PPCSPlatform : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)logPriority:(PPCSLogLevel *)priority tag:(NSString * _Nullable)tag throwable:(PPCSKotlinThrowable * _Nullable)throwable message:(NSString * _Nullable)message __attribute__((swift_name("log(priority:tag:throwable:message:)")));
- (void)logSystemInfo __attribute__((swift_name("logSystemInfo()")));
- (id<PPCSPPJson>)parseJsonStr:(NSString *)str __attribute__((swift_name("parseJson(str:)")));
- (void)setDateFormatterStringFormatter:(NSString *)formatter __attribute__((swift_name("setDateFormatterString(formatter:)")));
- (void)setTagLevel:(PPCSLogLevel *)level tag:(NSString *)tag __attribute__((swift_name("setTag(level:tag:)")));
- (NSString *)toJsonStringStr:(NSString *)str __attribute__((swift_name("toJsonString(str:)")));
@property (readonly) NSString *cpuType __attribute__((swift_name("cpuType")));
@property BOOL crashAssert __attribute__((swift_name("crashAssert")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSString *osName __attribute__((swift_name("osName")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) PPCSScreenInfo * _Nullable screen __attribute__((swift_name("screen")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenInfo")))
@interface PPCSScreenInfo : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PPCSKotlinThrowable : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PPCSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PPCSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PPCSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PPCSKotlinException : PPCSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PPCSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PPCSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPModelException")))
@interface PPCSPPModelException : PPCSKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PPCSKotlinThrowable *)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message cause:(PPCSKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPAndroidVibrateType")))
@interface PPCSPPAndroidVibrateType : PPCSKotlinEnum<PPCSPPAndroidVibrateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPAndroidVibrateType *normal __attribute__((swift_name("normal")));
@property (class, readonly) PPCSPPAndroidVibrateType *keyboardPress __attribute__((swift_name("keyboardPress")));
@property (class, readonly) PPCSPPAndroidVibrateType *keyboardTap __attribute__((swift_name("keyboardTap")));
@property (class, readonly) PPCSPPAndroidVibrateType *longPress __attribute__((swift_name("longPress")));
@property (class, readonly) PPCSPPAndroidVibrateType *virtualKey __attribute__((swift_name("virtualKey")));
@property (class, readonly) PPCSPPAndroidVibrateType *none __attribute__((swift_name("none")));
+ (PPCSKotlinArray<PPCSPPAndroidVibrateType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPAndroidVibrateType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPAxis3D")))
@interface PPCSPPAxis3D : PPCSKotlinEnum<PPCSPPAxis3D *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPAxis3D *x __attribute__((swift_name("x")));
@property (class, readonly) PPCSPPAxis3D *y __attribute__((swift_name("y")));
@property (class, readonly) PPCSPPAxis3D *z __attribute__((swift_name("z")));
+ (PPCSKotlinArray<PPCSPPAxis3D *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPAxis3D *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBlurEffectStyle")))
@interface PPCSPPBlurEffectStyle : PPCSKotlinEnum<PPCSPPBlurEffectStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPBlurEffectStyle *none __attribute__((swift_name("none")));
@property (class, readonly) PPCSPPBlurEffectStyle *light __attribute__((swift_name("light")));
@property (class, readonly) PPCSPPBlurEffectStyle *dark __attribute__((swift_name("dark")));
@property (class, readonly) PPCSPPBlurEffectStyle *extraLight __attribute__((swift_name("extraLight")));
@property (class, readonly) PPCSPPBlurEffectStyle *materialLight __attribute__((swift_name("materialLight")));
@property (class, readonly) PPCSPPBlurEffectStyle *thinMaterialLight __attribute__((swift_name("thinMaterialLight")));
@property (class, readonly) PPCSPPBlurEffectStyle *ultrathinMaterialLight __attribute__((swift_name("ultrathinMaterialLight")));
@property (class, readonly) PPCSPPBlurEffectStyle *thickMaterialLight __attribute__((swift_name("thickMaterialLight")));
@property (class, readonly) PPCSPPBlurEffectStyle *chromeMaterialLight __attribute__((swift_name("chromeMaterialLight")));
@property (class, readonly) PPCSPPBlurEffectStyle *materialDark __attribute__((swift_name("materialDark")));
@property (class, readonly) PPCSPPBlurEffectStyle *thinMaterialDark __attribute__((swift_name("thinMaterialDark")));
@property (class, readonly) PPCSPPBlurEffectStyle *ultrathinMaterialDark __attribute__((swift_name("ultrathinMaterialDark")));
@property (class, readonly) PPCSPPBlurEffectStyle *thickMaterialDark __attribute__((swift_name("thickMaterialDark")));
@property (class, readonly) PPCSPPBlurEffectStyle *chromeMaterialDark __attribute__((swift_name("chromeMaterialDark")));
+ (PPCSKotlinArray<PPCSPPBlurEffectStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPBlurEffectStyle *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBorderPosition")))
@interface PPCSPPBorderPosition : PPCSKotlinEnum<PPCSPPBorderPosition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPBorderPosition *inside __attribute__((swift_name("inside")));
@property (class, readonly) PPCSPPBorderPosition *center __attribute__((swift_name("center")));
@property (class, readonly) PPCSPPBorderPosition *outside __attribute__((swift_name("outside")));
+ (PPCSKotlinArray<PPCSPPBorderPosition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPBorderPosition *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraPosition")))
@interface PPCSPPCameraPosition : PPCSKotlinEnum<PPCSPPCameraPosition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPCameraPosition *back __attribute__((swift_name("back")));
@property (class, readonly) PPCSPPCameraPosition *front __attribute__((swift_name("front")));
+ (PPCSKotlinArray<PPCSPPCameraPosition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPCameraPosition *> *entries __attribute__((swift_name("entries")));
- (PPCSPPCameraPosition *)toggle __attribute__((swift_name("toggle()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDeviceFrameType")))
@interface PPCSPPDeviceFrameType : PPCSKotlinEnum<PPCSPPDeviceFrameType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPDeviceFrameType *none __attribute__((swift_name("none")));
@property (class, readonly) PPCSPPDeviceFrameType *iphoneX __attribute__((swift_name("iphoneX")));
@property (class, readonly) PPCSPPDeviceFrameType *iphoneXr __attribute__((swift_name("iphoneXr")));
@property (class, readonly) PPCSPPDeviceFrameType *iphoneXsMax __attribute__((swift_name("iphoneXsMax")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone11 __attribute__((swift_name("iphone11")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone11Pro __attribute__((swift_name("iphone11Pro")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone11ProMax __attribute__((swift_name("iphone11ProMax")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone12Mini __attribute__((swift_name("iphone12Mini")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone12Pro __attribute__((swift_name("iphone12Pro")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone12ProMax __attribute__((swift_name("iphone12ProMax")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone13mini __attribute__((swift_name("iphone13mini")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone13pro __attribute__((swift_name("iphone13pro")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone13promax __attribute__((swift_name("iphone13promax")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone14 __attribute__((swift_name("iphone14")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone14plus __attribute__((swift_name("iphone14plus")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone14pro __attribute__((swift_name("iphone14pro")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone14promax __attribute__((swift_name("iphone14promax")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone15 __attribute__((swift_name("iphone15")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone15plus __attribute__((swift_name("iphone15plus")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone15pro __attribute__((swift_name("iphone15pro")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone15promax __attribute__((swift_name("iphone15promax")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone16 __attribute__((swift_name("iphone16")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone16plus __attribute__((swift_name("iphone16plus")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone16pro __attribute__((swift_name("iphone16pro")));
@property (class, readonly) PPCSPPDeviceFrameType *iphone16promax __attribute__((swift_name("iphone16promax")));
@property (class, readonly) PPCSPPDeviceFrameType *galaxyS8 __attribute__((swift_name("galaxyS8")));
@property (class, readonly) PPCSPPDeviceFrameType *galaxyS10 __attribute__((swift_name("galaxyS10")));
@property (class, readonly) PPCSPPDeviceFrameType *galaxyS10Plus __attribute__((swift_name("galaxyS10Plus")));
@property (class, readonly) PPCSPPDeviceFrameType *galaxyS20 __attribute__((swift_name("galaxyS20")));
@property (class, readonly) PPCSPPDeviceFrameType *googlePixel3 __attribute__((swift_name("googlePixel3")));
@property (class, readonly) PPCSPPDeviceFrameType *googlePixel4 __attribute__((swift_name("googlePixel4")));
@property (class, readonly) PPCSPPDeviceFrameType *googlePixel4Xl __attribute__((swift_name("googlePixel4Xl")));
@property (class, readonly) PPCSPPDeviceFrameType *googlePixel5 __attribute__((swift_name("googlePixel5")));
+ (PPCSKotlinArray<PPCSPPDeviceFrameType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPDeviceFrameType *> *entries __attribute__((swift_name("entries")));
- (BOOL)matchesWithDevice:(PPCSPPDeviceInfo *)device __attribute__((swift_name("matchesWith(device:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFillScaleMode")))
@interface PPCSPPFillScaleMode : PPCSKotlinEnum<PPCSPPFillScaleMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPFillScaleMode *fill __attribute__((swift_name("fill")));
@property (class, readonly) PPCSPPFillScaleMode *fit __attribute__((swift_name("fit")));
@property (class, readonly) PPCSPPFillScaleMode *stretch __attribute__((swift_name("stretch")));
+ (PPCSKotlinArray<PPCSPPFillScaleMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPFillScaleMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPHorizontalAlign")))
@interface PPCSPPHorizontalAlign : PPCSKotlinEnum<PPCSPPHorizontalAlign *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPHorizontalAlign *left __attribute__((swift_name("left")));
@property (class, readonly) PPCSPPHorizontalAlign *center __attribute__((swift_name("center")));
@property (class, readonly) PPCSPPHorizontalAlign *right __attribute__((swift_name("right")));
+ (PPCSKotlinArray<PPCSPPHorizontalAlign *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPHorizontalAlign *> *entries __attribute__((swift_name("entries")));
@property (readonly) float autoResizeMovementFactor __attribute__((swift_name("autoResizeMovementFactor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosVibrateType")))
@interface PPCSPPIosVibrateType : PPCSKotlinEnum<PPCSPPIosVibrateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPIosVibrateType *normal __attribute__((swift_name("normal")));
@property (class, readonly) PPCSPPIosVibrateType *selectionChanged __attribute__((swift_name("selectionChanged")));
@property (class, readonly) PPCSPPIosVibrateType *notificationSuccess __attribute__((swift_name("notificationSuccess")));
@property (class, readonly) PPCSPPIosVibrateType *notificationWarning __attribute__((swift_name("notificationWarning")));
@property (class, readonly) PPCSPPIosVibrateType *notificationError __attribute__((swift_name("notificationError")));
@property (class, readonly) PPCSPPIosVibrateType *impactHeavy __attribute__((swift_name("impactHeavy")));
@property (class, readonly) PPCSPPIosVibrateType *impactMedium __attribute__((swift_name("impactMedium")));
@property (class, readonly) PPCSPPIosVibrateType *impactLight __attribute__((swift_name("impactLight")));
@property (class, readonly) PPCSPPIosVibrateType *impactRigid __attribute__((swift_name("impactRigid")));
@property (class, readonly) PPCSPPIosVibrateType *impactSoft __attribute__((swift_name("impactSoft")));
@property (class, readonly) PPCSPPIosVibrateType *none __attribute__((swift_name("none")));
+ (PPCSKotlinArray<PPCSPPIosVibrateType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPIosVibrateType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLineCap")))
@interface PPCSPPLineCap : PPCSKotlinEnum<PPCSPPLineCap *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPLineCap *butt __attribute__((swift_name("butt")));
@property (class, readonly) PPCSPPLineCap *round __attribute__((swift_name("round")));
@property (class, readonly) PPCSPPLineCap *square __attribute__((swift_name("square")));
+ (PPCSKotlinArray<PPCSPPLineCap *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPLineCap *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLineJoin")))
@interface PPCSPPLineJoin : PPCSKotlinEnum<PPCSPPLineJoin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPLineJoin *miter __attribute__((swift_name("miter")));
@property (class, readonly) PPCSPPLineJoin *round __attribute__((swift_name("round")));
@property (class, readonly) PPCSPPLineJoin *bevel __attribute__((swift_name("bevel")));
+ (PPCSKotlinArray<PPCSPPLineJoin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPLineJoin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsgChannel")))
@interface PPCSPPMsgChannel : PPCSKotlinEnum<PPCSPPMsgChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PPCSPPMsgChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PPCSPPMsgChannel *androidBroadcast __attribute__((swift_name("androidBroadcast")));
@property (class, readonly) PPCSPPMsgChannel *studio __attribute__((swift_name("studio")));
@property (class, readonly) PPCSPPMsgChannel *scene __attribute__((swift_name("scene")));
@property (class, readonly) PPCSPPMsgChannel *current __attribute__((swift_name("current")));
@property (class, readonly) PPCSPPMsgChannel *outside __attribute__((swift_name("outside")));
@property (class, readonly) PPCSPPMsgChannel *component __attribute__((swift_name("component")));
+ (PPCSKotlinArray<PPCSPPMsgChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPMsgChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsgChannel.Companion")))
@interface PPCSPPMsgChannelCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPMsgChannelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t ANDROID_BROADCAST_CODE __attribute__((swift_name("ANDROID_BROADCAST_CODE")));
@property (readonly) int32_t COMPONENT_CODE __attribute__((swift_name("COMPONENT_CODE")));
@property (readonly) int32_t CURRENT_CODE __attribute__((swift_name("CURRENT_CODE")));
@property (readonly) int32_t OUTSIDE_CODE __attribute__((swift_name("OUTSIDE_CODE")));
@property (readonly) int32_t SCENE_CODE __attribute__((swift_name("SCENE_CODE")));
@property (readonly) int32_t STUDIO_CODE __attribute__((swift_name("STUDIO_CODE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPathSegmentType")))
@interface PPCSPPPathSegmentType : PPCSKotlinEnum<PPCSPPPathSegmentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPPathSegmentType *moveto __attribute__((swift_name("moveto")));
@property (class, readonly) PPCSPPPathSegmentType *lineto __attribute__((swift_name("lineto")));
@property (class, readonly) PPCSPPPathSegmentType *curveto __attribute__((swift_name("curveto")));
@property (class, readonly) PPCSPPPathSegmentType *quadraticcurve __attribute__((swift_name("quadraticcurve")));
@property (class, readonly) PPCSPPPathSegmentType *arccurve __attribute__((swift_name("arccurve")));
@property (class, readonly) PPCSPPPathSegmentType *zclose __attribute__((swift_name("zclose")));
@property (class, readonly) PPCSPPPathSegmentType *hlineto __attribute__((swift_name("hlineto")));
@property (class, readonly) PPCSPPPathSegmentType *vlineto __attribute__((swift_name("vlineto")));
@property (class, readonly) PPCSPPPathSegmentType *smoothcurve __attribute__((swift_name("smoothcurve")));
@property (class, readonly) PPCSPPPathSegmentType *tquadraticcurve __attribute__((swift_name("tquadraticcurve")));
@property (class, readonly) PPCSPPPathSegmentType *rmoveto __attribute__((swift_name("rmoveto")));
@property (class, readonly) PPCSPPPathSegmentType *rlineto __attribute__((swift_name("rlineto")));
@property (class, readonly) PPCSPPPathSegmentType *rcurveto __attribute__((swift_name("rcurveto")));
@property (class, readonly) PPCSPPPathSegmentType *rquadraticcurve __attribute__((swift_name("rquadraticcurve")));
@property (class, readonly) PPCSPPPathSegmentType *rarccurve __attribute__((swift_name("rarccurve")));
@property (class, readonly) PPCSPPPathSegmentType *rhlineto __attribute__((swift_name("rhlineto")));
@property (class, readonly) PPCSPPPathSegmentType *rvlineto __attribute__((swift_name("rvlineto")));
@property (class, readonly) PPCSPPPathSegmentType *rsmoothcurve __attribute__((swift_name("rsmoothcurve")));
@property (class, readonly) PPCSPPPathSegmentType *rtquadraticcurve __attribute__((swift_name("rtquadraticcurve")));
+ (PPCSKotlinArray<PPCSPPPathSegmentType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPPathSegmentType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlatformType")))
@interface PPCSPPPlatformType : PPCSKotlinEnum<PPCSPPPlatformType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPPlatformType *ios __attribute__((swift_name("ios")));
@property (class, readonly) PPCSPPPlatformType *android __attribute__((swift_name("android")));
@property (class, readonly) PPCSPPPlatformType *desktop __attribute__((swift_name("desktop")));
+ (PPCSKotlinArray<PPCSPPPlatformType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPPlatformType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSpeechGender")))
@interface PPCSPPSpeechGender : PPCSKotlinEnum<PPCSPPSpeechGender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPSpeechGender *male __attribute__((swift_name("male")));
@property (class, readonly) PPCSPPSpeechGender *female __attribute__((swift_name("female")));
+ (PPCSKotlinArray<PPCSPPSpeechGender *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPSpeechGender *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextLayerSizeMode")))
@interface PPCSPPTextLayerSizeMode : PPCSKotlinEnum<PPCSPPTextLayerSizeMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPTextLayerSizeMode *autoWidth __attribute__((swift_name("autoWidth")));
@property (class, readonly) PPCSPPTextLayerSizeMode *autoHeight __attribute__((swift_name("autoHeight")));
@property (class, readonly) PPCSPPTextLayerSizeMode *autoWidthHeight __attribute__((swift_name("autoWidthHeight")));
@property (class, readonly) PPCSPPTextLayerSizeMode *fixedSize __attribute__((swift_name("fixedSize")));
+ (PPCSKotlinArray<PPCSPPTextLayerSizeMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPTextLayerSizeMode *> *entries __attribute__((swift_name("entries")));
- (BOOL)canAutoChangeHeight __attribute__((swift_name("canAutoChangeHeight()")));
- (BOOL)canAutoChangeWidth __attribute__((swift_name("canAutoChangeWidth()")));
- (BOOL)shouldAutoResize __attribute__((swift_name("shouldAutoResize()")));
- (BOOL)shouldWrap __attribute__((swift_name("shouldWrap()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorShapeType")))
@interface PPCSPPVectorShapeType : PPCSKotlinEnum<PPCSPPVectorShapeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPVectorShapeType *rect __attribute__((swift_name("rect")));
@property (class, readonly) PPCSPPVectorShapeType *ellipse __attribute__((swift_name("ellipse")));
@property (class, readonly) PPCSPPVectorShapeType *line __attribute__((swift_name("line")));
@property (class, readonly) PPCSPPVectorShapeType *path __attribute__((swift_name("path")));
@property (class, readonly) PPCSPPVectorShapeType *polygon __attribute__((swift_name("polygon")));
@property (class, readonly) PPCSPPVectorShapeType *polyline __attribute__((swift_name("polyline")));
+ (PPCSKotlinArray<PPCSPPVectorShapeType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPVectorShapeType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVerticalAlign")))
@interface PPCSPPVerticalAlign : PPCSKotlinEnum<PPCSPPVerticalAlign *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPVerticalAlign *top __attribute__((swift_name("top")));
@property (class, readonly) PPCSPPVerticalAlign *middle __attribute__((swift_name("middle")));
@property (class, readonly) PPCSPPVerticalAlign *bottom __attribute__((swift_name("bottom")));
+ (PPCSKotlinArray<PPCSPPVerticalAlign *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPVerticalAlign *> *entries __attribute__((swift_name("entries")));
@property (readonly) float autoResizeMovementFactor __attribute__((swift_name("autoResizeMovementFactor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSensorType")))
@interface PPCSSoundSensorType : PPCSKotlinEnum<PPCSSoundSensorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSSoundSensorType *start __attribute__((swift_name("start")));
@property (class, readonly) PPCSSoundSensorType *stop __attribute__((swift_name("stop")));
+ (PPCSKotlinArray<PPCSSoundSensorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSSoundSensorType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPEventChannel")))
@interface PPCSPPEventChannel<T> : PPCSBase
- (instancetype)initWithHandler:(id<PPCSPPEventChannelHandler>)handler __attribute__((swift_name("init(handler:)"))) __attribute__((objc_designated_initializer));
- (void)emitEvent:(T _Nullable)event now:(int64_t)now __attribute__((swift_name("emit(event:now:)")));
@end

__attribute__((swift_name("PPEventChannelHandler")))
@protocol PPCSPPEventChannelHandler
@required
- (void)handleEvent:(id _Nullable)event now:(int64_t)now __attribute__((swift_name("handle(event:now:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPKeyCode")))
@interface PPCSPPKeyCode : PPCSKotlinEnum<PPCSPPKeyCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PPCSPPKeyCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PPCSPPKeyCode *back __attribute__((swift_name("back")));
@property (class, readonly) PPCSPPKeyCode *volumeUp __attribute__((swift_name("volumeUp")));
@property (class, readonly) PPCSPPKeyCode *volumeDown __attribute__((swift_name("volumeDown")));
@property (class, readonly) PPCSPPKeyCode *a __attribute__((swift_name("a")));
@property (class, readonly) PPCSPPKeyCode *b __attribute__((swift_name("b")));
@property (class, readonly) PPCSPPKeyCode *c __attribute__((swift_name("c")));
@property (class, readonly) PPCSPPKeyCode *d __attribute__((swift_name("d")));
@property (class, readonly) PPCSPPKeyCode *e __attribute__((swift_name("e")));
@property (class, readonly) PPCSPPKeyCode *f __attribute__((swift_name("f")));
@property (class, readonly) PPCSPPKeyCode *g __attribute__((swift_name("g")));
@property (class, readonly) PPCSPPKeyCode *h __attribute__((swift_name("h")));
@property (class, readonly) PPCSPPKeyCode *i __attribute__((swift_name("i")));
@property (class, readonly) PPCSPPKeyCode *j __attribute__((swift_name("j")));
@property (class, readonly) PPCSPPKeyCode *k __attribute__((swift_name("k")));
@property (class, readonly) PPCSPPKeyCode *l __attribute__((swift_name("l")));
@property (class, readonly) PPCSPPKeyCode *m __attribute__((swift_name("m")));
@property (class, readonly) PPCSPPKeyCode *n __attribute__((swift_name("n")));
@property (class, readonly) PPCSPPKeyCode *o __attribute__((swift_name("o")));
@property (class, readonly) PPCSPPKeyCode *p __attribute__((swift_name("p")));
@property (class, readonly) PPCSPPKeyCode *q __attribute__((swift_name("q")));
@property (class, readonly) PPCSPPKeyCode *r __attribute__((swift_name("r")));
@property (class, readonly) PPCSPPKeyCode *s __attribute__((swift_name("s")));
@property (class, readonly) PPCSPPKeyCode *t __attribute__((swift_name("t")));
@property (class, readonly) PPCSPPKeyCode *u __attribute__((swift_name("u")));
@property (class, readonly) PPCSPPKeyCode *v __attribute__((swift_name("v")));
@property (class, readonly) PPCSPPKeyCode *w __attribute__((swift_name("w")));
@property (class, readonly) PPCSPPKeyCode *x __attribute__((swift_name("x")));
@property (class, readonly) PPCSPPKeyCode *y __attribute__((swift_name("y")));
@property (class, readonly) PPCSPPKeyCode *z __attribute__((swift_name("z")));
@property (class, readonly) PPCSPPKeyCode *n0 __attribute__((swift_name("n0")));
@property (class, readonly) PPCSPPKeyCode *n1 __attribute__((swift_name("n1")));
@property (class, readonly) PPCSPPKeyCode *n2 __attribute__((swift_name("n2")));
@property (class, readonly) PPCSPPKeyCode *n3 __attribute__((swift_name("n3")));
@property (class, readonly) PPCSPPKeyCode *n4 __attribute__((swift_name("n4")));
@property (class, readonly) PPCSPPKeyCode *n5 __attribute__((swift_name("n5")));
@property (class, readonly) PPCSPPKeyCode *n6 __attribute__((swift_name("n6")));
@property (class, readonly) PPCSPPKeyCode *n7 __attribute__((swift_name("n7")));
@property (class, readonly) PPCSPPKeyCode *n8 __attribute__((swift_name("n8")));
@property (class, readonly) PPCSPPKeyCode *n9 __attribute__((swift_name("n9")));
@property (class, readonly) PPCSPPKeyCode *enter __attribute__((swift_name("enter")));
@property (class, readonly) PPCSPPKeyCode *space __attribute__((swift_name("space")));
@property (class, readonly) PPCSPPKeyCode *tab __attribute__((swift_name("tab")));
@property (class, readonly) PPCSPPKeyCode *up __attribute__((swift_name("up")));
@property (class, readonly) PPCSPPKeyCode *left __attribute__((swift_name("left")));
@property (class, readonly) PPCSPPKeyCode *right __attribute__((swift_name("right")));
@property (class, readonly) PPCSPPKeyCode *down __attribute__((swift_name("down")));
@property (class, readonly) PPCSPPKeyCode *backspace __attribute__((swift_name("backspace")));
@property (class, readonly) PPCSPPKeyCode *esc __attribute__((swift_name("esc")));
+ (PPCSKotlinArray<PPCSPPKeyCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPKeyCode *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *stringValue __attribute__((swift_name("stringValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPKeyCode.Companion")))
@interface PPCSPPKeyCodeCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPKeyCodeCompanion *shared __attribute__((swift_name("shared")));
- (PPCSPPKeyCode * _Nullable)fromStringStringValue:(NSString *)stringValue __attribute__((swift_name("fromString(stringValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsg")))
@interface PPCSPPMsg : PPCSBase
- (instancetype)initWithMessageId:(NSString *)messageId value:(NSString * _Nullable)value __attribute__((swift_name("init(messageId:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPMsgCompanion *companion __attribute__((swift_name("companion")));
- (void)toJSONOut:(id<PPCSPPJson>)out __attribute__((swift_name("toJSON(out:)")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsg.Companion")))
@interface PPCSPPMsgCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPMsgCompanion *shared __attribute__((swift_name("shared")));
- (PPCSPPMsg *)fromJSONJson:(id<PPCSPPJson>)json __attribute__((swift_name("fromJSON(json:)")));
@end

__attribute__((swift_name("PPPiePlayerEvent")))
@interface PPCSPPPiePlayerEvent : PPCSBase
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayerEvent.TextInputFocusedIn")))
@interface PPCSPPPiePlayerEventTextInputFocusedIn : PPCSPPPiePlayerEvent
- (instancetype)initWithLayer:(PPCSPPTextInputLayer *)layer __attribute__((swift_name("init(layer:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPPiePlayerEventTextInputFocusedIn *)doCopyLayer:(PPCSPPTextInputLayer *)layer __attribute__((swift_name("doCopy(layer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCSPPTextInputLayer *layer __attribute__((swift_name("layer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayerEvent.TextInputFocusedOut")))
@interface PPCSPPPiePlayerEventTextInputFocusedOut : PPCSPPPiePlayerEvent
- (instancetype)initWithLayer:(PPCSPPTextInputLayer *)layer __attribute__((swift_name("init(layer:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPPiePlayerEventTextInputFocusedOut *)doCopyLayer:(PPCSPPTextInputLayer *)layer __attribute__((swift_name("doCopy(layer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCSPPTextInputLayer *layer __attribute__((swift_name("layer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSensor")))
@interface PPCSPPSensor : PPCSKotlinEnum<PPCSPPSensor *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPSensor *compass __attribute__((swift_name("compass")));
@property (class, readonly) PPCSPPSensor *tiltX __attribute__((swift_name("tiltX")));
@property (class, readonly) PPCSPPSensor *tiltY __attribute__((swift_name("tiltY")));
@property (class, readonly) PPCSPPSensor *tiltZ __attribute__((swift_name("tiltZ")));
@property (class, readonly) PPCSPPSensor *sound __attribute__((swift_name("sound")));
@property (class, readonly) PPCSPPSensor *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) PPCSPPSensor *light __attribute__((swift_name("light")));
@property (class, readonly) PPCSPPSensor *rotary __attribute__((swift_name("rotary")));
+ (PPCSKotlinArray<PPCSPPSensor *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPSensor *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPSensorListener")))
@protocol PPCSPPSensorListener
@required
- (void)onSensorValueSensor:(PPCSPPSensor *)sensor value:(float)value __attribute__((swift_name("onSensorValue(sensor:value:)")));
@end

__attribute__((swift_name("PPSensorManager")))
@protocol PPCSPPSensorManager
@required
- (void)disableSensors __attribute__((swift_name("disableSensors()")));
- (void)enableSensorsSensors:(NSSet<PPCSPPSensor *> *)sensors listener:(id<PPCSPPSensorListener>)listener __attribute__((swift_name("enableSensors(sensors:listener:)")));
@end

__attribute__((swift_name("PPSpeechInterface")))
@protocol PPCSPPSpeechInterface
@required
- (void)setListenerListener:(id<PPCSPPSpeechInterfaceListener> _Nullable)listener __attribute__((swift_name("setListener(listener:)")));
- (void)startSpeechText:(NSString *)text language:(NSString *)language gender:(PPCSPPSpeechGender *)gender pitch:(float)pitch speed:(float)speed __attribute__((swift_name("startSpeech(text:language:gender:pitch:speed:)")));
- (void)stopSpeech __attribute__((swift_name("stopSpeech()")));
@end

__attribute__((swift_name("PPSpeechInterfaceListener")))
@protocol PPCSPPSpeechInterfaceListener
@required
- (void)onEnd __attribute__((swift_name("onEnd()")));
@end

__attribute__((swift_name("PPTouchEvent")))
@interface PPCSPPTouchEvent : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addMovementPointerId:(int32_t)pointerId x:(float)x y:(float)y time:(int64_t)time force:(float)force __attribute__((swift_name("addMovement(pointerId:x:y:time:force:)")));
- (void)addPointerPointerId:(int32_t)pointerId x:(float)x y:(float)y time:(int64_t)time force:(float)force __attribute__((swift_name("addPointer(pointerId:x:y:time:force:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)enableSpanTracking __attribute__((swift_name("enableSpanTracking()")));
- (PPCSPPPoint * _Nullable)getPointerPointerId:(int32_t)pointerId __attribute__((swift_name("getPointer(pointerId:)")));
- (int32_t)getPointerIdIndex:(int32_t)index __attribute__((swift_name("getPointerId(index:)")));
- (BOOL)hasIdPointerId:(int32_t)pointerId __attribute__((swift_name("hasId(pointerId:)")));
- (BOOL)isCanceled __attribute__((swift_name("isCanceled()")));
- (BOOL)isEnded __attribute__((swift_name("isEnded()")));
- (void)onEnd __attribute__((swift_name("onEnd()")));
- (BOOL)removeAllPointersTime:(int64_t)time __attribute__((swift_name("removeAllPointers(time:)")));
- (void)removePointerPointerId:(int32_t)pointerId time:(int64_t)time __attribute__((swift_name("removePointer(pointerId:time:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)updateValues __attribute__((swift_name("updateValues()")));
@property int64_t firstActionTime __attribute__((swift_name("firstActionTime")));
@property (readonly) PPCSPPPoint * _Nullable focus __attribute__((swift_name("focus")));
@property (readonly) float force __attribute__((swift_name("force")));
@property (readonly) PPCSPPTouchEventAction * _Nullable lastAction __attribute__((swift_name("lastAction")));
@property (readonly) int64_t lastActionTime __attribute__((swift_name("lastActionTime")));
@property (readonly) int32_t pointerCount __attribute__((swift_name("pointerCount")));
@property (readonly) float span __attribute__((swift_name("span")));
@property (readonly) PPCSPPPoint *velocity __attribute__((swift_name("velocity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTouchEvent.Action")))
@interface PPCSPPTouchEventAction : PPCSKotlinEnum<PPCSPPTouchEventAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPTouchEventAction *down __attribute__((swift_name("down")));
@property (class, readonly) PPCSPPTouchEventAction *up __attribute__((swift_name("up")));
@property (class, readonly) PPCSPPTouchEventAction *move __attribute__((swift_name("move")));
@property (class, readonly) PPCSPPTouchEventAction *cancel __attribute__((swift_name("cancel")));
+ (PPCSKotlinArray<PPCSPPTouchEventAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPTouchEventAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPTouchSessionListener")))
@protocol PPCSPPTouchSessionListener
@required
- (void)onTouchSessionEndedNow:(int64_t)now eventConsumed:(BOOL)eventConsumed __attribute__((swift_name("onTouchSessionEnded(now:eventConsumed:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVelocityTracker")))
@interface PPCSPPVelocityTracker : PPCSBase
- (instancetype)initWithPoint:(PPCSPPPoint *)point now:(int64_t)now T:(double)T __attribute__((swift_name("init(point:now:T:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPPoint *)getVelocity __attribute__((swift_name("getVelocity()")));
- (void)updatePoint:(PPCSPPPoint *)point now:(int64_t)now __attribute__((swift_name("update(point:now:)")));
@end

__attribute__((swift_name("PPVoiceInterface")))
@protocol PPCSPPVoiceInterface
@required
- (void)setListenerListener_:(id<PPCSPPVoiceInterfaceListener> _Nullable)listener __attribute__((swift_name("setListener(listener_:)")));
- (void)startRecognitionContinuous:(BOOL)continuous language:(NSString *)language __attribute__((swift_name("startRecognition(continuous:language:)")));
- (void)stopRecognition __attribute__((swift_name("stopRecognition()")));
@end

__attribute__((swift_name("PPVoiceInterfaceListener")))
@protocol PPCSPPVoiceInterfaceListener
@required
- (void)onChangeTranscript:(NSString *)transcript __attribute__((swift_name("onChange(transcript:)")));
- (void)onEndTranscript:(NSString *)transcript __attribute__((swift_name("onEnd(transcript:)")));
@end

__attribute__((swift_name("FormulaObserver")))
@protocol PPCSFormulaObserver
@required
- (void)reportErrorError:(PPCSPPExprEvalError *)error __attribute__((swift_name("reportError(error:)")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDataType")))
@interface PPCSPPDataType : PPCSKotlinEnum<PPCSPPDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPDataType *string __attribute__((swift_name("string")));
@property (class, readonly) PPCSPPDataType *number __attribute__((swift_name("number")));
@property (class, readonly) PPCSPPDataType *color __attribute__((swift_name("color")));
@property (class, readonly) PPCSPPDataType *layer __attribute__((swift_name("layer")));
+ (PPCSKotlinArray<PPCSPPDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPDataType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPEngineObserver")))
@protocol PPCSPPEngineObserver
@required
- (void)onEvalErrorError:(PPCSPPExprEvalError *)error __attribute__((swift_name("onEvalError(error:)")));
- (void)onFixedSceneChangeArgs:(PPCSPPSceneChangeArgs *)args __attribute__((swift_name("onFixedSceneChange(args:)")));
- (void)onPlayEventEvent:(PPCSPPPlayEvent *)event __attribute__((swift_name("onPlayEvent(event:)")));
- (void)onSceneChangeArgs:(PPCSPPSceneChangeArgs *)args __attribute__((swift_name("onSceneChange(args:)")));
@end

__attribute__((swift_name("PPExpr")))
@interface PPCSPPExpr : PPCSBase
- (instancetype)initWithDataType:(PPCSPPDataType *)dataType observer:(id<PPCSFormulaObserver> _Nullable)observer __attribute__((swift_name("init(dataType:observer:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPColor * _Nullable)evalAsColor __attribute__((swift_name("evalAsColor()")));
- (id<PPCSPPExprLayer> _Nullable)evalAsLayer __attribute__((swift_name("evalAsLayer()")));
- (PPCSDouble * _Nullable)evalAsNumber __attribute__((swift_name("evalAsNumber()")));
- (NSString * _Nullable)evalAsString __attribute__((swift_name("evalAsString()")));
- (void)forEachFn:(void (^)(PPCSPPExpr *))fn __attribute__((swift_name("forEach(fn:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)reportErrorError:(PPCSPPExprEvalError *)error __attribute__((swift_name("reportError(error:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PPCSPPColor * _Nullable)unsupportedEvalAsColor __attribute__((swift_name("unsupportedEvalAsColor()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PPCSPPExprLayer> _Nullable)unsupportedEvalAsLayer __attribute__((swift_name("unsupportedEvalAsLayer()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PPCSDouble * _Nullable)unsupportedEvalAsNumber __attribute__((swift_name("unsupportedEvalAsNumber()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString * _Nullable)unsupportedEvalAsString __attribute__((swift_name("unsupportedEvalAsString()")));
@property (readonly) PPCSPPDataType *dataType __attribute__((swift_name("dataType")));
@property (readonly) id<PPCSFormulaObserver> _Nullable observer __attribute__((swift_name("observer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprEvalError")))
@interface PPCSPPExprEvalError : PPCSBase
- (instancetype)initWithMessage:(NSString *)message code:(NSString *)code args:(PPCSKotlinArray<NSString *> *)args __attribute__((swift_name("init(message:code:args:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPExprEvalErrorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PPCSKotlinArray<NSString *> *args __attribute__((swift_name("args")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property NSString * _Nullable conditionId __attribute__((swift_name("conditionId")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property NSString * _Nullable responseId __attribute__((swift_name("responseId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprEvalError.Companion")))
@interface PPCSPPExprEvalErrorCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPExprEvalErrorCompanion *shared __attribute__((swift_name("shared")));
- (PPCSPPExprEvalError *)castingColorToLayer __attribute__((swift_name("castingColorToLayer()")));
- (PPCSPPExprEvalError *)castingColorToNumber __attribute__((swift_name("castingColorToNumber()")));
- (PPCSPPExprEvalError *)castingLayerToColor __attribute__((swift_name("castingLayerToColor()")));
- (PPCSPPExprEvalError *)castingLayerToNumber __attribute__((swift_name("castingLayerToNumber()")));
- (PPCSPPExprEvalError *)castingLayerToString __attribute__((swift_name("castingLayerToString()")));
- (PPCSPPExprEvalError *)castingNumberToColor __attribute__((swift_name("castingNumberToColor()")));
- (PPCSPPExprEvalError *)castingNumberToLayer __attribute__((swift_name("castingNumberToLayer()")));
- (PPCSPPExprEvalError *)castingStringToColorValue:(NSString *)value __attribute__((swift_name("castingStringToColor(value:)")));
- (PPCSPPExprEvalError *)castingStringToLayer __attribute__((swift_name("castingStringToLayer()")));
- (PPCSPPExprEvalError *)castingStringToNumberValue:(NSString *)value __attribute__((swift_name("castingStringToNumber(value:)")));
- (PPCSPPExprEvalError *)colorFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("colorFunctionError(functionName:)")));
- (PPCSPPExprEvalError *)layerFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("layerFunctionError(functionName:)")));
- (PPCSPPExprEvalError *)negateColor __attribute__((swift_name("negateColor()")));
- (PPCSPPExprEvalError *)noPropertyLayerName:(NSString *)layerName propertyName:(NSString *)propertyName __attribute__((swift_name("noProperty(layerName:propertyName:)")));
- (PPCSPPExprEvalError *)numberFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("numberFunctionError(functionName:)")));
- (PPCSPPExprEvalError *)stringFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("stringFunctionError(functionName:)")));
- (PPCSPPExprEvalError *)unexpected __attribute__((swift_name("unexpected()")));
@end

__attribute__((swift_name("PPExprLayer")))
@protocol PPCSPPExprLayer
@required
- (PPCSPPColorProperty * _Nullable)getColorPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getColorPropertyByName(propertyName:)")));
- (PPCSPPFloatProperty * _Nullable)getFloatPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getFloatPropertyByName(propertyName:)")));
- (id<PPCSPPObservableValueProvider> _Nullable)getObservableValueProvider __attribute__((swift_name("getObservableValueProvider()")));
- (id<PPCSPPExprLayer> _Nullable)getParent __attribute__((swift_name("getParent()")));
- (PPCSPPStringProperty * _Nullable)getStringPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getStringPropertyByName(propertyName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPNumberConstantExpr")))
@interface PPCSPPNumberConstantExpr : PPCSPPExpr
- (instancetype)initWithNumberValue:(float)numberValue observer:(id<PPCSFormulaObserver> _Nullable)observer __attribute__((swift_name("init(numberValue:observer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDataType:(PPCSPPDataType *)dataType observer:(id<PPCSFormulaObserver> _Nullable)observer __attribute__((swift_name("init(dataType:observer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PPCSPPColor * _Nullable)evalAsColor __attribute__((swift_name("evalAsColor()")));
- (id<PPCSPPExprLayer> _Nullable)evalAsLayer __attribute__((swift_name("evalAsLayer()")));
- (PPCSDouble * _Nullable)evalAsNumber __attribute__((swift_name("evalAsNumber()")));
- (NSString * _Nullable)evalAsString __attribute__((swift_name("evalAsString()")));
- (void)forEachFn:(void (^)(PPCSPPExpr *))fn __attribute__((swift_name("forEach(fn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneChangeArgs")))
@interface PPCSPPSceneChangeArgs : PPCSBase
- (instancetype)initWithScene:(PPCSPPScene *)scene isAdded:(BOOL)isAdded isTopScene:(BOOL)isTopScene isTransition:(BOOL)isTransition __attribute__((swift_name("init(scene:isAdded:isTopScene:isTransition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id name:(NSString *)name isAdded:(BOOL)isAdded isTopScene:(BOOL)isTopScene isTransition:(BOOL)isTransition __attribute__((swift_name("init(id:name:isAdded:isTopScene:isTransition:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPSceneChangeArgs *)doCopyId:(NSString *)id name:(NSString *)name isAdded:(BOOL)isAdded isTopScene:(BOOL)isTopScene isTransition:(BOOL)isTransition __attribute__((swift_name("doCopy(id:name:isAdded:isTopScene:isTransition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isAdded __attribute__((swift_name("isAdded")));
@property (readonly) BOOL isTopScene __attribute__((swift_name("isTopScene")));
@property (readonly) BOOL isTransition __attribute__((swift_name("isTransition")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("PPJson")))
@protocol PPCSPPJson
@required
- (BOOL)hasKey:(NSString *)key __attribute__((swift_name("has(key:)")));
- (NSSet<NSString *> *)keySet __attribute__((swift_name("keySet()")));
- (id _Nullable)optKey:(NSString *)key __attribute__((swift_name("opt(key:)")));
- (id<PPCSPPJson> _Nullable)optObjectKey:(NSString *)key __attribute__((swift_name("optObject(key:)")));
- (NSArray<id<PPCSPPJson>> * _Nullable)optObjectArrayKey:(NSString *)key __attribute__((swift_name("optObjectArray(key:)")));
- (NSString * _Nullable)optStringKey:(NSString *)key __attribute__((swift_name("optString(key:)")));
- (NSArray<NSString *> * _Nullable)optStringArrayKey:(NSString *)key __attribute__((swift_name("optStringArray(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putNumberKey:(NSString *)key value:(id)value __attribute__((swift_name("putNumber(key:value:)")));
- (void)putObjectArrayKey:(NSString *)key value:(NSArray<id<PPCSPPJson>> *)value __attribute__((swift_name("putObjectArray(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@end

__attribute__((swift_name("PPLayer")))
@interface PPCSPPLayer : PPCSBase <PPCSPPExprLayer>
@property (class, readonly, getter=companion) PPCSPPLayerCompanion *companion __attribute__((swift_name("companion")));
- (void)addObserverObserver:(id<PPCSPPLayerObserver>)observer __attribute__((swift_name("addObserver(observer:)")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (void)forEachPropertyFn:(void (^)(PPCSPPProperty<id> *))fn __attribute__((swift_name("forEachProperty(fn:)")));
- (float)getBorderCenterOffsetScaleFactor:(float)scaleFactor __attribute__((swift_name("getBorderCenterOffset(scaleFactor:)")));
- (int32_t)getBottomScaleFactor:(float)scaleFactor __attribute__((swift_name("getBottom(scaleFactor:)")));
- (PPCSPPColorProperty * _Nullable)getColorPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getColorPropertyByName(propertyName:)")));
- (PPCSPPFloatProperty * _Nullable)getFloatPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getFloatPropertyByName(propertyName:)")));
- (float)getInsideBorderWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getInsideBorderWidth(scaleFactor:)")));
- (int32_t)getIntHeightScaleFactor:(float)scaleFactor __attribute__((swift_name("getIntHeight(scaleFactor:)")));
- (int32_t)getIntWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getIntWidth(scaleFactor:)")));
- (int32_t)getLeftScaleFactor:(float)scaleFactor __attribute__((swift_name("getLeft(scaleFactor:)")));
- (id<PPCSPPObservableValueProvider> _Nullable)getObservableValueProvider __attribute__((swift_name("getObservableValueProvider()")));
- (float)getOutsideBorderWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getOutsideBorderWidth(scaleFactor:)")));
- (id<PPCSPPExprLayer> _Nullable)getParent __attribute__((swift_name("getParent()")));
- (void)getPositionOut:(PPCSPPPoint *)out __attribute__((swift_name("getPosition(out:)")));
- (PPCSPPProperty<id> * _Nullable)getPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getPropertyByName(propertyName:)")));
- (float)getRadiusFactor __attribute__((swift_name("getRadiusFactor()")));
- (float)getRenderBorderWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getRenderBorderWidth(scaleFactor:)")));
- (float)getRenderRadiusScaleFactor:(float)scaleFactor __attribute__((swift_name("getRenderRadius(scaleFactor:)")));
- (int32_t)getRightScaleFactor:(float)scaleFactor __attribute__((swift_name("getRight(scaleFactor:)")));
- (PPCSPPStringProperty * _Nullable)getStringPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getStringPropertyByName(propertyName:)")));
- (int32_t)getTopScaleFactor:(float)scaleFactor __attribute__((swift_name("getTop(scaleFactor:)")));
- (BOOL)hasActiveResponses __attribute__((swift_name("hasActiveResponses()")));
- (BOOL)hasMoveResponse __attribute__((swift_name("hasMoveResponse()")));
- (BOOL)hasParentScaleResponse __attribute__((swift_name("hasParentScaleResponse()")));
- (BOOL)hasRotateResponse __attribute__((swift_name("hasRotateResponse()")));
- (BOOL)hasScaleResponse __attribute__((swift_name("hasScaleResponse()")));
- (BOOL)hasTouchTriggers __attribute__((swift_name("hasTouchTriggers()")));
- (BOOL)includesPointPointInParent:(PPCSPPPoint *)pointInParent __attribute__((swift_name("includesPoint(pointInParent:)")));
- (BOOL)includesSelfOriginPointPoint:(PPCSPPPoint *)point __attribute__((swift_name("includesSelfOriginPoint(point:)")));
- (BOOL)is3DRotatable __attribute__((swift_name("is3DRotatable()")));
- (BOOL)isAbsolutePositioned __attribute__((swift_name("isAbsolutePositioned()")));
- (BOOL)isDirty __attribute__((swift_name("isDirty()")));
- (BOOL)isInterestedWithTouchEventPointInParent:(PPCSPPPoint *)pointInParent __attribute__((swift_name("isInterestedWithTouchEvent(pointInParent:)")));
- (BOOL)isLayerUpdated __attribute__((swift_name("isLayerUpdated()")));
- (BOOL)isTouchable __attribute__((swift_name("isTouchable()")));
- (void)moveAnchorNewAnchor:(PPCSPPPoint *)newAnchor __attribute__((swift_name("moveAnchor(newAnchor:)")));
- (void)notifyLayerModified __attribute__((swift_name("notifyLayerModified()")));
- (void)notifyOrderChange __attribute__((swift_name("notifyOrderChange()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)optimizeInteractions __attribute__((swift_name("optimizeInteractions()")));
- (BOOL)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)registerPropertyProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("registerProperty(property:)")));
- (void)removeObserverObserver:(id<PPCSPPLayerObserver>)observer __attribute__((swift_name("removeObserver(observer:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetLayerDuration:(int64_t)duration __attribute__((swift_name("resetLayer(duration:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)saveInitialState __attribute__((swift_name("saveInitialState()")));
- (void)setDirty __attribute__((swift_name("setDirty()")));
- (void)setLayerUpdatedChanged:(BOOL)changed __attribute__((swift_name("setLayerUpdated(changed:)")));
- (void)setNeedUpdateOnNextFrame __attribute__((swift_name("setNeedUpdateOnNextFrame()")));
- (BOOL)shouldRenderBorder __attribute__((swift_name("shouldRenderBorder()")));
- (BOOL)shouldRenderShadow __attribute__((swift_name("shouldRenderShadow()")));
- (void)stopPropertyAnimation __attribute__((swift_name("stopPropertyAnimation()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PPCSPPPoint *)translateAbsPointToSelfAbsPoint:(PPCSPPPoint *)absPoint applyScroll:(BOOL)applyScroll __attribute__((swift_name("translateAbsPointToSelf(absPoint:applyScroll:)")));
- (PPCSPPPoint *)translateParentPointToSelfPoint:(PPCSPPPoint *)point applyScroll:(BOOL)applyScroll __attribute__((swift_name("translateParentPointToSelf(point:applyScroll:)")));
- (void)unsetDirty __attribute__((swift_name("unsetDirty()")));
@property PPCSPPLayerAlias * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<PPCSPPContainerLayer *> *ancestors __attribute__((swift_name("ancestors")));
@property float anchorX __attribute__((swift_name("anchorX")));
@property float anchorY __attribute__((swift_name("anchorY")));
@property (readonly) PPCSPPColorProperty *borderColor __attribute__((swift_name("borderColor")));
@property (readonly) PPCSPPFloatProperty *borderOpacity __attribute__((swift_name("borderOpacity")));
@property PPCSPPBorderPosition *borderPosition __attribute__((swift_name("borderPosition")));
@property (readonly) PPCSPPFloatProperty *borderWidth __attribute__((swift_name("borderWidth")));
@property PPCSPPLayerLayoutBBox *cachedBBox __attribute__((swift_name("cachedBBox")));
@property (readonly) PPCSPPCorners<PPCSPPFloatProperty *> *cornerRadius __attribute__((swift_name("cornerRadius")));
@property (readonly) PPCSMutableSet<PPCSPPLayerProperty *> *dynamicProperties __attribute__((swift_name("dynamicProperties")));
@property (readonly) PPCSPPColorProperty *fillColor __attribute__((swift_name("fillColor")));
@property (readonly) int32_t fillColorWithOpacity __attribute__((swift_name("fillColorWithOpacity")));
@property (readonly) PPCSPPFloatProperty *fillImageRate __attribute__((swift_name("fillImageRate")));
@property (readonly) PPCSPPFloatProperty *fillOpacity __attribute__((swift_name("fillOpacity")));
@property NSString * _Nullable fillResourceId __attribute__((swift_name("fillResourceId")));
@property PPCSPPFillScaleMode *fillScaleMode __attribute__((swift_name("fillScaleMode")));
@property (readonly) PPCSPPFloatProperty *fillSolidRate __attribute__((swift_name("fillSolidRate")));
@property BOOL fixAspectRatio __attribute__((swift_name("fixAspectRatio")));
@property BOOL fixBottom __attribute__((swift_name("fixBottom")));
@property BOOL fixHeight __attribute__((swift_name("fixHeight")));
@property BOOL fixLeft __attribute__((swift_name("fixLeft")));
@property BOOL fixRight __attribute__((swift_name("fixRight")));
@property BOOL fixTop __attribute__((swift_name("fixTop")));
@property BOOL fixWidth __attribute__((swift_name("fixWidth")));
@property (readonly) PPCSPPFloatProperty *height __attribute__((swift_name("height")));
@property (readonly) PPCSPPFloatProperty *highlightOpacity __attribute__((swift_name("highlightOpacity")));
@property (readonly) PPCSPPHitArea *hitArea __attribute__((swift_name("hitArea")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property NSString * _Nullable identifiedName __attribute__((swift_name("identifiedName")));
@property BOOL invisible __attribute__((swift_name("invisible")));
@property BOOL isLayoutHeightDirty __attribute__((swift_name("isLayoutHeightDirty")));
@property BOOL isLayoutWidthDirty __attribute__((swift_name("isLayoutWidthDirty")));
@property BOOL isPassTouch __attribute__((swift_name("isPassTouch")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property int32_t layoutGrow __attribute__((swift_name("layoutGrow")));
@property int32_t layoutMaxHeight __attribute__((swift_name("layoutMaxHeight")));
@property int32_t layoutMaxWidth __attribute__((swift_name("layoutMaxWidth")));
@property int32_t layoutMinHeight __attribute__((swift_name("layoutMinHeight")));
@property int32_t layoutMinWidth __attribute__((swift_name("layoutMinWidth")));
@property (readonly) float left __attribute__((swift_name("left")));
@property PPCSPPShapeLayer * _Nullable maskLayer __attribute__((swift_name("maskLayer")));
@property (readonly) float maxRadius __attribute__((swift_name("maxRadius")));
@property (readonly) float mergedOpacity __attribute__((swift_name("mergedOpacity")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) NSString *nsId __attribute__((swift_name("nsId")));
@property (readonly) PPCSPPFloatProperty *opacity __attribute__((swift_name("opacity")));
@property PPCSPPContainerLayer * _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) PPCSPPPoint *position __attribute__((swift_name("position")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<PPCSPPPropertyObserver> propertyObserver __attribute__((swift_name("propertyObserver")));
@property PPCSPPAxis3D * _Nullable r3Axis __attribute__((swift_name("r3Axis")));
@property float r3Depth __attribute__((swift_name("r3Depth")));
@property float r3PivotX __attribute__((swift_name("r3PivotX")));
@property float r3PivotY __attribute__((swift_name("r3PivotY")));
@property (readonly) PPCSPPFloatProperty *radius __attribute__((swift_name("radius")));
@property (readonly) PPCSPPFloatProperty *radiusBottomLeft __attribute__((swift_name("radiusBottomLeft")));
@property (readonly) PPCSPPFloatProperty *radiusBottomRight __attribute__((swift_name("radiusBottomRight")));
@property (readonly) PPCSPPFloatProperty *radiusTopLeft __attribute__((swift_name("radiusTopLeft")));
@property (readonly) PPCSPPFloatProperty *radiusTopRight __attribute__((swift_name("radiusTopRight")));
@property (readonly) PPCSPPFloatProperty *rotation __attribute__((swift_name("rotation")));
@property (readonly) PPCSPPFloatProperty *rotation3d __attribute__((swift_name("rotation3d")));
@property (readonly) PPCSPPFloatProperty *rotation3dX __attribute__((swift_name("rotation3dX")));
@property (readonly) PPCSPPFloatProperty *rotation3dY __attribute__((swift_name("rotation3dY")));
@property PPCSInt * _Nullable savedIndexByLayerOrder __attribute__((swift_name("savedIndexByLayerOrder")));
@property (readonly) PPCSPPFloatProperty *scaleX __attribute__((swift_name("scaleX")));
@property (readonly) PPCSPPFloatProperty *scaleY __attribute__((swift_name("scaleY")));
@property (readonly) PPCSPPFloatProperty *shadowBlur __attribute__((swift_name("shadowBlur")));
@property (readonly) PPCSPPColorProperty *shadowColor __attribute__((swift_name("shadowColor")));
@property (readonly) BOOL shadowEnabled __attribute__((swift_name("shadowEnabled")));
@property (readonly) PPCSPPFloatProperty *shadowOffsetX __attribute__((swift_name("shadowOffsetX")));
@property (readonly) PPCSPPFloatProperty *shadowOffsetY __attribute__((swift_name("shadowOffsetY")));
@property (readonly) PPCSPPFloatProperty *shadowOpacity __attribute__((swift_name("shadowOpacity")));
@property (readonly) PPCSPPFloatProperty *shadowSpread __attribute__((swift_name("shadowSpread")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) PPCSPPPoint *topLeft __attribute__((swift_name("topLeft")));
@property (readonly) PPCSPPLayerType *type __attribute__((swift_name("type")));
@property (readonly) PPCSPPFloatProperty *width __attribute__((swift_name("width")));
@property (readonly) PPCSPPFloatProperty *x __attribute__((swift_name("x")));
@property (readonly) PPCSPPFloatProperty *y __attribute__((swift_name("y")));
@end

__attribute__((swift_name("AbstractMediaLayer")))
@interface PPCSAbstractMediaLayer : PPCSPPLayer
- (BOOL)allowAutoStart __attribute__((swift_name("allowAutoStart()")));
- (BOOL)canAutoPlay __attribute__((swift_name("canAutoPlay()")));
- (void)clearCommands __attribute__((swift_name("clearCommands()")));
- (void)clearTickTimes __attribute__((swift_name("clearTickTimes()")));
- (PPCSPPMediaCommand * _Nullable)dequeueCommand __attribute__((swift_name("dequeueCommand()")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (NSString *)getMediaResourceUrl __attribute__((swift_name("getMediaResourceUrl()")));
- (BOOL)isSameTick __attribute__((swift_name("isSameTick()")));
- (BOOL)needsAutoPlay __attribute__((swift_name("needsAutoPlay()")));
- (void)notifyPlayCompleted __attribute__((swift_name("notifyPlayCompleted()")));
- (void)resetMediaState __attribute__((swift_name("resetMediaState()")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)runCommandCommand:(PPCSPPMediaCommand *)command __attribute__((swift_name("runCommand(command:)")));
- (void)setCanAutoPlayValue:(BOOL)value __attribute__((swift_name("setCanAutoPlay(value:)")));
- (void)setMediaResourceUrlValue:(NSString *)value __attribute__((swift_name("setMediaResourceUrl(value:)")));
- (void)setPlayTickNow:(int64_t)now __attribute__((swift_name("setPlayTick(now:)")));
- (void)setResetTickNow:(int64_t)now __attribute__((swift_name("setResetTick(now:)")));
@property (readonly) PPCSPPFloatProperty *currentTime __attribute__((swift_name("currentTime")));
@property (readonly) NSString *initialResourceUrl __attribute__((swift_name("initialResourceUrl")));
@property BOOL isPlaying __attribute__((swift_name("isPlaying")));
@property BOOL isRepeating __attribute__((swift_name("isRepeating")));
@property PPCSPPMessageBus * _Nullable scheduler __attribute__((swift_name("scheduler")));
@property (readonly) PPCSPPFloatProperty *totalTime __attribute__((swift_name("totalTime")));
@property (readonly) PPCSPPFloatProperty *volume __attribute__((swift_name("volume")));
@end

__attribute__((swift_name("AbstractTextLayer")))
@interface PPCSAbstractTextLayer : PPCSPPLayer
- (PPCSPPStringProperty * _Nullable)getStringPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getStringPropertyByName(propertyName:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)saveInitialState __attribute__((swift_name("saveInitialState()")));
@property float paddingBottom __attribute__((swift_name("paddingBottom")));
@property float paddingLeft __attribute__((swift_name("paddingLeft")));
@property float paddingRight __attribute__((swift_name("paddingRight")));
@property float paddingTop __attribute__((swift_name("paddingTop")));
@property (readonly) PPCSPPTextAttributes *textAttributes __attribute__((swift_name("textAttributes")));
@property (readonly) PPCSPPColorProperty *textColor __attribute__((swift_name("textColor")));
@property (readonly) PPCSPPFloatProperty *textOpacity __attribute__((swift_name("textOpacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPAudioLayer")))
@interface PPCSPPAudioLayer : PPCSAbstractMediaLayer
- (BOOL)isTouchable __attribute__((swift_name("isTouchable()")));
@property (readonly) BOOL autoStart __attribute__((swift_name("autoStart")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraLayer")))
@interface PPCSPPCameraLayer : PPCSPPLayer
- (void)changeQrScannerPropertiesIsQr:(BOOL)isQr qrValue:(NSString *)qrValue qrX:(float)qrX qrY:(float)qrY qrWidth:(float)qrWidth qrHeight:(float)qrHeight __attribute__((swift_name("changeQrScannerProperties(isQr:qrValue:qrX:qrY:qrWidth:qrHeight:)")));
- (void)clearCommands __attribute__((swift_name("clearCommands()")));
- (PPCSPPCameraLayerCommand * _Nullable)dequeueCommand __attribute__((swift_name("dequeueCommand()")));
- (void)openUrlData:(NSString *)data __attribute__((swift_name("openUrl(data:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
@property (readonly) PPCSPPCameraPosition * _Nullable cameraPosition __attribute__((swift_name("cameraPosition")));
@property BOOL qrScanner __attribute__((swift_name("qrScanner")));
@property PPCSBoolean * _Nullable qrScannerRedirection __attribute__((swift_name("qrScannerRedirection")));
@property (readonly) BOOL started __attribute__((swift_name("started")));
@end

__attribute__((swift_name("PPCameraLayerCommand")))
@interface PPCSPPCameraLayerCommand : PPCSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraLayerStartCommand")))
@interface PPCSPPCameraLayerStartCommand : PPCSPPCameraLayerCommand
- (instancetype)initWithPosition:(PPCSPPCameraPosition *)position __attribute__((swift_name("init(position:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCSPPCameraPosition *position __attribute__((swift_name("position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraLayerStopCommand")))
@interface PPCSPPCameraLayerStopCommand : PPCSPPCameraLayerCommand
- (instancetype)initWithShowBlack:(BOOL)showBlack __attribute__((swift_name("init(showBlack:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL showBlack __attribute__((swift_name("showBlack")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPChangeTarget")))
@interface PPCSPPChangeTarget : PPCSBase
- (instancetype)initWithLayerId:(NSString *)layerId property:(PPCSPPLayerProperty *)property __attribute__((swift_name("init(layerId:property:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPChangeTarget *)doCopyLayerId:(NSString *)layerId property:(PPCSPPLayerProperty *)property __attribute__((swift_name("doCopy(layerId:property:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) PPCSPPLayerProperty *property __attribute__((swift_name("property")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPContainerLayer")))
@interface PPCSPPContainerLayer : PPCSPPLayer
- (void)addChildLayerChildLayer:(PPCSPPLayer *)childLayer __attribute__((swift_name("addChildLayer(childLayer:)")));
- (void)addChildLayerIndex:(int32_t)index layer:(PPCSPPLayer *)layer __attribute__((swift_name("addChildLayer(index:layer:)")));
- (NSArray<PPCSPPLayer *> *)collectAllDescendants __attribute__((swift_name("collectAllDescendants()")));
- (BOOL)containVideoLayer __attribute__((swift_name("containVideoLayer()")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (void)forEachLayerCallback:(void (^)(PPCSPPLayer *))callback __attribute__((swift_name("forEachLayer(callback:)")));
- (PPCSKotlinArray<PPCSPPLayer *> *)getAllLayers __attribute__((swift_name("getAllLayers()")));
- (NSArray<PPCSPPLayer *> *)getChildren __attribute__((swift_name("getChildren()")));
- (PPCSPPFloatProperty * _Nullable)getFloatPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getFloatPropertyByName(propertyName:)")));
- (float)getHorizontalTotalPadding __attribute__((swift_name("getHorizontalTotalPadding()")));
- (PPCSPPProperty<id> * _Nullable)getPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getPropertyByName(propertyName:)")));
- (float)getVerticalTotalPadding __attribute__((swift_name("getVerticalTotalPadding()")));
- (BOOL)isAutoLayout __attribute__((swift_name("isAutoLayout()")));
- (BOOL)isHorizontalAutoLayout __attribute__((swift_name("isHorizontalAutoLayout()")));
- (BOOL)isLayerUpdated __attribute__((swift_name("isLayerUpdated()")));
- (BOOL)isVerticalAutoLayout __attribute__((swift_name("isVerticalAutoLayout()")));
- (BOOL)isWrapAutoLayout __attribute__((swift_name("isWrapAutoLayout()")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)setChildrenMaskLayers __attribute__((swift_name("setChildrenMaskLayers()")));
@property NSString * _Nullable componentId __attribute__((swift_name("componentId")));
@property PPCSInt * _Nullable counterAxisSpacing __attribute__((swift_name("counterAxisSpacing")));
@property BOOL isClipChildren __attribute__((swift_name("isClipChildren")));
@property int32_t itemSpacing __attribute__((swift_name("itemSpacing")));
@property float paddingBottom __attribute__((swift_name("paddingBottom")));
@property float paddingLeft __attribute__((swift_name("paddingLeft")));
@property float paddingRight __attribute__((swift_name("paddingRight")));
@property float paddingTop __attribute__((swift_name("paddingTop")));
@property BOOL scrollEnabled __attribute__((swift_name("scrollEnabled")));
@property (readonly) PPCSPPFloatProperty * _Nullable scrollOffset __attribute__((swift_name("scrollOffset")));
@property (readonly) PPCSPPLayerProperty * _Nullable scrollOffsetKey __attribute__((swift_name("scrollOffsetKey")));
@property (readonly) PPCSPPFloatProperty *scrollX __attribute__((swift_name("scrollX")));
@property (readonly) PPCSPPFloatProperty *scrollY __attribute__((swift_name("scrollY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPHitArea")))
@interface PPCSPPHitArea : PPCSBase
- (instancetype)initWithExtendAbove:(float)extendAbove extendBelow:(float)extendBelow extendLeft:(float)extendLeft extendRight:(float)extendRight __attribute__((swift_name("init(extendAbove:extendBelow:extendLeft:extendRight:)"))) __attribute__((objc_designated_initializer));
- (BOOL)hasExtension __attribute__((swift_name("hasExtension()")));
- (BOOL)isPointIncludedInPoint:(PPCSPPPoint *)point width:(float)width height:(float)height __attribute__((swift_name("isPointIncludedIn(point:width:height:)")));
- (void)setExtendValuesExtendAbove:(float)extendAbove extendBelow:(float)extendBelow extendLeft:(float)extendLeft extendRight:(float)extendRight __attribute__((swift_name("setExtendValues(extendAbove:extendBelow:extendLeft:extendRight:)")));
@property float extendAbove __attribute__((swift_name("extendAbove")));
@property float extendBelow __attribute__((swift_name("extendBelow")));
@property float extendLeft __attribute__((swift_name("extendLeft")));
@property float extendRight __attribute__((swift_name("extendRight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPImageLayer")))
@interface PPCSPPImageLayer : PPCSPPLayer
- (NSString *)getMediaResourceUrl __attribute__((swift_name("getMediaResourceUrl()")));
- (void)setMediaResourceUrlValue:(NSString *)value __attribute__((swift_name("setMediaResourceUrl(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosEffectLayer")))
@interface PPCSPPIosEffectLayer : PPCSPPLayer
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)updateStyleBlurStyle:(PPCSPPBlurEffectStyle *)blurStyle duration:(int64_t)duration __attribute__((swift_name("updateStyle(blurStyle:duration:)")));
@property (readonly) PPCSPPBlurEffectStyle *blurStyle __attribute__((swift_name("blurStyle")));
@property (readonly) int64_t styleDuration __attribute__((swift_name("styleDuration")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayer.Companion")))
@interface PPCSPPLayerCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPLayerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t LAYOUT_COORDINATE_SYSTEM_SCALE __attribute__((swift_name("LAYOUT_COORDINATE_SYSTEM_SCALE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayer.LayoutBBox")))
@interface PPCSPPLayerLayoutBBox : PPCSBase
- (instancetype)initWithMinX:(int32_t)minX minY:(int32_t)minY maxX:(int32_t)maxX maxY:(int32_t)maxY __attribute__((swift_name("init(minX:minY:maxX:maxY:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPLayerLayoutBBox *)doCopyMinX:(int32_t)minX minY:(int32_t)minY maxX:(int32_t)maxX maxY:(int32_t)maxY __attribute__((swift_name("doCopy(minX:minY:maxX:maxY:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property int32_t maxX __attribute__((swift_name("maxX")));
@property int32_t maxY __attribute__((swift_name("maxY")));
@property int32_t minX __attribute__((swift_name("minX")));
@property int32_t minY __attribute__((swift_name("minY")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("PPLayerObserver")))
@protocol PPCSPPLayerObserver
@required
- (void)onChildOrderModifiedLayer:(PPCSPPLayer *)layer __attribute__((swift_name("onChildOrderModified(layer:)")));
- (void)onLayerEndChangeLayer:(PPCSPPLayer *)layer __attribute__((swift_name("onLayerEndChange(layer:)")));
- (void)onLayerModifiedLayer:(PPCSPPLayer *)layer __attribute__((swift_name("onLayerModified(layer:)")));
- (void)onLayerWillChangeLayer:(PPCSPPLayer *)layer __attribute__((swift_name("onLayerWillChange(layer:)")));
- (void)onMaskLayerChangedLayer:(PPCSPPLayer *)layer __attribute__((swift_name("onMaskLayerChanged(layer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerAlias")))
@interface PPCSPPLayerAlias : PPCSBase
- (instancetype)initWithNamespace:(NSString *)namespace_ nsId:(NSString *)nsId name:(NSString *)name __attribute__((swift_name("init(namespace:nsId:name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) NSString *nsId __attribute__((swift_name("nsId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerType")))
@interface PPCSPPLayerType : PPCSKotlinEnum<PPCSPPLayerType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPLayerType *image __attribute__((swift_name("image")));
@property (class, readonly) PPCSPPLayerType *rect __attribute__((swift_name("rect")));
@property (class, readonly) PPCSPPLayerType *oval __attribute__((swift_name("oval")));
@property (class, readonly) PPCSPPLayerType *container __attribute__((swift_name("container")));
@property (class, readonly) PPCSPPLayerType *text __attribute__((swift_name("text")));
@property (class, readonly) PPCSPPLayerType *textInput __attribute__((swift_name("textInput")));
@property (class, readonly) PPCSPPLayerType *video __attribute__((swift_name("video")));
@property (class, readonly) PPCSPPLayerType *lottie __attribute__((swift_name("lottie")));
@property (class, readonly) PPCSPPLayerType *audio __attribute__((swift_name("audio")));
@property (class, readonly) PPCSPPLayerType *shape __attribute__((swift_name("shape")));
@property (class, readonly) PPCSPPLayerType *camera __attribute__((swift_name("camera")));
@property (class, readonly) PPCSPPLayerType *iosEffect __attribute__((swift_name("iosEffect")));
@property (class, readonly) PPCSPPLayerType *component __attribute__((swift_name("component")));
+ (PPCSKotlinArray<PPCSPPLayerType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPLayerType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLottieLayer")))
@interface PPCSPPLottieLayer : PPCSAbstractMediaLayer
@property (readonly) BOOL autoStart __attribute__((swift_name("autoStart")));
@end

__attribute__((swift_name("PPMediaCommand")))
@interface PPCSPPMediaCommand : PPCSBase
@property (class, readonly, getter=companion) PPCSPPMediaCommandCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaChangeCommand")))
@interface PPCSPPMediaChangeCommand : PPCSPPMediaCommand
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaCommand.Companion")))
@interface PPCSPPMediaCommandCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPMediaCommandCompanion *shared __attribute__((swift_name("shared")));
- (PPCSPPMediaCommand * _Nullable)deserializeStr:(NSString *)str __attribute__((swift_name("deserialize(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaPauseCommand")))
@interface PPCSPPMediaPauseCommand : PPCSPPMediaCommand
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaPlayCommand")))
@interface PPCSPPMediaPlayCommand : PPCSPPMediaCommand
- (instancetype)initWithRepeating:(BOOL)repeating __attribute__((swift_name("init(repeating:)"))) __attribute__((objc_designated_initializer));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL repeating __attribute__((swift_name("repeating")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaSeekCommand")))
@interface PPCSPPMediaSeekCommand : PPCSPPMediaCommand
- (instancetype)initWithSeekTime:(int32_t)seekTime __attribute__((swift_name("init(seekTime:)"))) __attribute__((objc_designated_initializer));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t seekTime __attribute__((swift_name("seekTime")));
@end

__attribute__((swift_name("PPShapeLayer")))
@interface PPCSPPShapeLayer : PPCSPPLayer

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
@property BOOL isMask __attribute__((swift_name("isMask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPOvalLayer")))
@interface PPCSPPOvalLayer : PPCSPPShapeLayer
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlayState")))
@interface PPCSPPPlayState : PPCSBase
- (instancetype)initWithDuration:(int64_t)duration __attribute__((swift_name("init(duration:)"))) __attribute__((objc_designated_initializer));
- (int64_t)getPlayPositionTime:(int64_t)time __attribute__((swift_name("getPlayPosition(time:)")));
- (BOOL)isPlayingTime:(int64_t)time __attribute__((swift_name("isPlaying(time:)")));
- (void)pauseTime:(int64_t)time __attribute__((swift_name("pause(time:)")));
- (void)playTime:(int64_t)time looping:(BOOL)looping __attribute__((swift_name("play(time:looping:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)seekTime:(int64_t)time seekPosition:(int64_t)seekPosition __attribute__((swift_name("seek(time:seekPosition:)")));
- (void)updateFromStateTime:(int64_t)time playing:(BOOL)playing looping:(BOOL)looping position:(int64_t)position __attribute__((swift_name("updateFromState(time:playing:looping:position:)")));
@property (readonly) int64_t duration __attribute__((swift_name("duration")));
@property (readonly) BOOL isLooping __attribute__((swift_name("isLooping")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPRectLayer")))
@interface PPCSPPRectLayer : PPCSPPShapeLayer
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextAttributes")))
@interface PPCSPPTextAttributes : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PPCSPPTextAttributesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)doCopyFromOther:(PPCSPPTextAttributes *)other __attribute__((swift_name("doCopyFrom(other:)")));
- (PPCSFloat * _Nullable)getFontSizeScaleFactor:(float)scaleFactor __attribute__((swift_name("getFontSize(scaleFactor:)")));
@property BOOL autoLineHeight __attribute__((swift_name("autoLineHeight")));
@property NSString * _Nullable font __attribute__((swift_name("font")));
@property PPCSFloat * _Nullable fontSize __attribute__((swift_name("fontSize")));
@property NSString * _Nullable initialText __attribute__((swift_name("initialText")));
@property PPCSFloat * _Nullable letterSpacing __attribute__((swift_name("letterSpacing")));
@property PPCSFloat * _Nullable lineHeight __attribute__((swift_name("lineHeight")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property PPCSPPHorizontalAlign * _Nullable textAlign __attribute__((swift_name("textAlign")));
@property PPCSPPVerticalAlign * _Nullable verticalAlign __attribute__((swift_name("verticalAlign")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextAttributes.Companion")))
@interface PPCSPPTextAttributesCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPTextAttributesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEFAULT_FONT_BOLD __attribute__((swift_name("DEFAULT_FONT_BOLD")));
@property (readonly) NSString *DEFAULT_FONT_DEBUG __attribute__((swift_name("DEFAULT_FONT_DEBUG")));
@property (readonly) NSString *DEFAULT_FONT_REGULAR __attribute__((swift_name("DEFAULT_FONT_REGULAR")));
@property (readonly) NSString *DEFAULT_FONT_SEMI_BOLD __attribute__((swift_name("DEFAULT_FONT_SEMI_BOLD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer")))
@interface PPCSPPTextInputLayer : PPCSAbstractTextLayer
- (void)addFocusRequestListenerFocusRequestListener:(id<PPCSPPTextInputLayerFocusRequestListener>)focusRequestListener __attribute__((swift_name("addFocusRequestListener(focusRequestListener:)")));
- (void)addFocusStateListenerFocusStateListener:(id<PPCSPPTextInputLayerFocusStateListener>)focusStateListener __attribute__((swift_name("addFocusStateListener(focusStateListener:)")));
- (void)applySizeFromRendererTextRenderHeight:(float)textRenderHeight now:(int64_t)now __attribute__((swift_name("applySizeFromRenderer(textRenderHeight:now:)")));
- (void)notifyFocusStateFocused:(BOOL)focused now:(int64_t)now __attribute__((swift_name("notifyFocusState(focused:now:)")));
- (void)notifyReturnKeyPressedNow:(int64_t)now __attribute__((swift_name("notifyReturnKeyPressed(now:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)removeFocusRequestListenerFocusRequestListener:(id<PPCSPPTextInputLayerFocusRequestListener>)focusRequestListener __attribute__((swift_name("removeFocusRequestListener(focusRequestListener:)")));
- (void)requestFocusFocus:(BOOL)focus replayMode:(BOOL)replayMode __attribute__((swift_name("requestFocus(focus:replayMode:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)saveInitialState __attribute__((swift_name("saveInitialState()")));
@property BOOL autoHeight __attribute__((swift_name("autoHeight")));
@property BOOL focusOutOnTapOutside __attribute__((swift_name("focusOutOnTapOutside")));
@property BOOL initialFocus __attribute__((swift_name("initialFocus")));
@property BOOL isAutoFocusOut __attribute__((swift_name("isAutoFocusOut")));
@property PPCSPPTextInputLayerKeyboardLook *keyboardLook __attribute__((swift_name("keyboardLook")));
@property PPCSPPTextInputLayerKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@property PPCSFloat * _Nullable maxHeight __attribute__((swift_name("maxHeight")));
@property float minHeight __attribute__((swift_name("minHeight")));
@property BOOL multiLine __attribute__((swift_name("multiLine")));
@property PPCSPPColor *placeHolderColor __attribute__((swift_name("placeHolderColor")));
@property float placeHolderOpacity __attribute__((swift_name("placeHolderOpacity")));
@property NSString *placeHolderText __attribute__((swift_name("placeHolderText")));
@property PPCSPPTextInputLayerReturnKeyType *returnKeyType __attribute__((swift_name("returnKeyType")));
@end

__attribute__((swift_name("PPTextInputLayerFocusRequestListener")))
@protocol PPCSPPTextInputLayerFocusRequestListener
@required
- (void)onFocusRequestedLayer:(PPCSPPTextInputLayer *)layer focus:(BOOL)focus replayMode:(BOOL)replayMode __attribute__((swift_name("onFocusRequested(layer:focus:replayMode:)")));
@end

__attribute__((swift_name("PPTextInputLayerFocusStateListener")))
@protocol PPCSPPTextInputLayerFocusStateListener
@required
- (void)onFocusStateChangedLayer:(PPCSPPTextInputLayer *)layer focused:(BOOL)focused now:(int64_t)now __attribute__((swift_name("onFocusStateChanged(layer:focused:now:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer.KeyboardLook")))
@interface PPCSPPTextInputLayerKeyboardLook : PPCSKotlinEnum<PPCSPPTextInputLayerKeyboardLook *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPTextInputLayerKeyboardLook *dark __attribute__((swift_name("dark")));
@property (class, readonly) PPCSPPTextInputLayerKeyboardLook *light __attribute__((swift_name("light")));
+ (PPCSKotlinArray<PPCSPPTextInputLayerKeyboardLook *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPTextInputLayerKeyboardLook *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer.KeyboardType")))
@interface PPCSPPTextInputLayerKeyboardType : PPCSKotlinEnum<PPCSPPTextInputLayerKeyboardType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPTextInputLayerKeyboardType *text __attribute__((swift_name("text")));
@property (class, readonly) PPCSPPTextInputLayerKeyboardType *url __attribute__((swift_name("url")));
@property (class, readonly) PPCSPPTextInputLayerKeyboardType *email __attribute__((swift_name("email")));
@property (class, readonly) PPCSPPTextInputLayerKeyboardType *number __attribute__((swift_name("number")));
@property (class, readonly) PPCSPPTextInputLayerKeyboardType *textPassword __attribute__((swift_name("textPassword")));
@property (class, readonly) PPCSPPTextInputLayerKeyboardType *numberPassword __attribute__((swift_name("numberPassword")));
+ (PPCSKotlinArray<PPCSPPTextInputLayerKeyboardType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPTextInputLayerKeyboardType *> *entries __attribute__((swift_name("entries")));
@property (readonly) BOOL isPassword __attribute__((swift_name("isPassword")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer.ReturnKeyType")))
@interface PPCSPPTextInputLayerReturnKeyType : PPCSKotlinEnum<PPCSPPTextInputLayerReturnKeyType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPTextInputLayerReturnKeyType *done __attribute__((swift_name("done")));
@property (class, readonly) PPCSPPTextInputLayerReturnKeyType *go __attribute__((swift_name("go")));
@property (class, readonly) PPCSPPTextInputLayerReturnKeyType *next __attribute__((swift_name("next")));
@property (class, readonly) PPCSPPTextInputLayerReturnKeyType *send __attribute__((swift_name("send")));
@property (class, readonly) PPCSPPTextInputLayerReturnKeyType *search __attribute__((swift_name("search")));
@property (class, readonly) PPCSPPTextInputLayerReturnKeyType *theNewLine __attribute__((swift_name("theNewLine")));
+ (PPCSKotlinArray<PPCSPPTextInputLayerReturnKeyType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPTextInputLayerReturnKeyType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextLayer")))
@interface PPCSPPTextLayer : PPCSAbstractTextLayer
- (void)applySizeFromRendererTextRenderWidth:(float)textRenderWidth textRenderHeight:(float)textRenderHeight now:(int64_t)now __attribute__((swift_name("applySizeFromRenderer(textRenderWidth:textRenderHeight:now:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)saveInitialState __attribute__((swift_name("saveInitialState()")));
@property BOOL guessInitialWidth __attribute__((swift_name("guessInitialWidth")));
@property float renderHeight __attribute__((swift_name("renderHeight")));
@property float renderWidth __attribute__((swift_name("renderWidth")));
@property PPCSPPTextLayerSizeMode *sizeMode __attribute__((swift_name("sizeMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorShapeLayer")))
@interface PPCSPPVectorShapeLayer : PPCSPPShapeLayer
@property PPCSPPLineCap *lineCap __attribute__((swift_name("lineCap")));
@property PPCSPPLineJoin *lineJoin __attribute__((swift_name("lineJoin")));
@property (readonly) NSMutableArray<PPCSPPVectorShape *> *shapes __attribute__((swift_name("shapes")));
@property float viewBoxHeight __attribute__((swift_name("viewBoxHeight")));
@property float viewBoxWidth __attribute__((swift_name("viewBoxWidth")));
@property float viewBoxX __attribute__((swift_name("viewBoxX")));
@property float viewBoxY __attribute__((swift_name("viewBoxY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVideoLayer")))
@interface PPCSPPVideoLayer : PPCSAbstractMediaLayer
- (NSString *)getThumbnailUrl __attribute__((swift_name("getThumbnailUrl()")));
@property (readonly) BOOL autoStart __attribute__((swift_name("autoStart")));
@property (readonly) NSString *thumbnailId __attribute__((swift_name("thumbnailId")));
@end

__attribute__((swift_name("PPVectorShape")))
@interface PPCSPPVectorShape : PPCSBase
@property (readonly) BOOL fillable __attribute__((swift_name("fillable")));
@property (readonly) PPCSPPVectorShapeType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorEllipse")))
@interface PPCSPPVectorEllipse : PPCSPPVectorShape
@property (readonly) float cx __attribute__((swift_name("cx")));
@property (readonly) float cy __attribute__((swift_name("cy")));
@property (readonly) float rx __attribute__((swift_name("rx")));
@property (readonly) float ry __attribute__((swift_name("ry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorLine")))
@interface PPCSPPVectorLine : PPCSPPVectorShape
@property (readonly) float x1 __attribute__((swift_name("x1")));
@property (readonly) float x2 __attribute__((swift_name("x2")));
@property (readonly) float y1 __attribute__((swift_name("y1")));
@property (readonly) float y2 __attribute__((swift_name("y2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorPath")))
@interface PPCSPPVectorPath : PPCSPPVectorShape
@property (readonly) NSString *d __attribute__((swift_name("d")));
@property (readonly) NSMutableArray<PPCSPPPathSegmentData *> *segmentData __attribute__((swift_name("segmentData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorPolygon")))
@interface PPCSPPVectorPolygon : PPCSPPVectorShape
@property (readonly) NSMutableArray<PPCSPPPoint *> *points __attribute__((swift_name("points")));
@property (readonly) NSString *pointsString __attribute__((swift_name("pointsString")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorPolyline")))
@interface PPCSPPVectorPolyline : PPCSPPVectorShape
@property (readonly) NSMutableArray<PPCSPPPoint *> *points __attribute__((swift_name("points")));
@property (readonly) NSString *pointsString __attribute__((swift_name("pointsString")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorRect")))
@interface PPCSPPVectorRect : PPCSPPVectorShape
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float rx __attribute__((swift_name("rx")));
@property (readonly) float ry __attribute__((swift_name("ry")));
@property (readonly) float width __attribute__((swift_name("width")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((swift_name("PPMessage")))
@interface PPCSPPMessage : PPCSBase
@property (class, readonly, getter=companion) PPCSPPMessageCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)computeDuration __attribute__((swift_name("computeDuration()")));
- (BOOL)shouldStopForLayerLayerId:(NSString *)layerId __attribute__((swift_name("shouldStopForLayer(layerId:)")));
- (BOOL)shouldStopForVariableVariable:(PPCSPPVar<id> *)variable __attribute__((swift_name("shouldStopForVariable(variable:)")));
@property int64_t duration __attribute__((swift_name("duration")));
@property PPCSInt * _Nullable expiresAfter __attribute__((swift_name("expiresAfter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMessage.Companion")))
@interface PPCSPPMessageCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPMessageCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PPTask")))
@interface PPCSPPTask : PPCSPPMessage
- (instancetype)initWithLayerIdToStop:(NSString * _Nullable)layerIdToStop variableNameToStop:(NSString * _Nullable)variableNameToStop expires:(BOOL)expires __attribute__((swift_name("init(layerIdToStop:variableNameToStop:expires:)"))) __attribute__((objc_designated_initializer));
- (void)runNow:(int64_t)now __attribute__((swift_name("run(now:)")));
- (BOOL)shouldStopForLayerLayerId:(NSString *)layerId __attribute__((swift_name("shouldStopForLayer(layerId:)")));
- (BOOL)shouldStopForVariableVariable:(PPCSPPVar<id> *)variable __attribute__((swift_name("shouldStopForVariable(variable:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDesc")))
@interface PPCSDeviceDesc : PPCSBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name type:(NSString *)type width:(int32_t)width height:(int32_t)height density:(float)density platformType:(NSString *)platformType orientation:(NSString *)orientation framePathOrigin:(NSString * _Nullable)framePathOrigin framePathLandscapeOrigin:(NSString * _Nullable)framePathLandscapeOrigin framePath:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)framePath frameBgPath:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPath framePathLandscape:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)framePathLandscape frameBgPathLandscape:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPathLandscape __attribute__((swift_name("init(id:name:type:width:height:density:platformType:orientation:framePathOrigin:framePathLandscapeOrigin:framePath:frameBgPath:framePathLandscape:frameBgPathLandscape:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSDeviceDescCompanion *companion __attribute__((swift_name("companion")));
- (PPCSDeviceDesc *)doCopyId:(NSString *)id name:(NSString *)name type:(NSString *)type width:(int32_t)width height:(int32_t)height density:(float)density platformType:(NSString *)platformType orientation:(NSString *)orientation framePathOrigin:(NSString * _Nullable)framePathOrigin framePathLandscapeOrigin:(NSString * _Nullable)framePathLandscapeOrigin framePath:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)framePath frameBgPath:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPath framePathLandscape:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)framePathLandscape frameBgPathLandscape:(PPCSKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPathLandscape __attribute__((swift_name("doCopy(id:name:type:width:height:density:platformType:orientation:framePathOrigin:framePathLandscapeOrigin:framePath:frameBgPath:framePathLandscape:frameBgPathLandscape:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) PPCSKotlinx_serialization_jsonJsonElement * _Nullable frameBgPath __attribute__((swift_name("frameBgPath")));
@property (readonly) PPCSKotlinx_serialization_jsonJsonElement * _Nullable frameBgPathLandscape __attribute__((swift_name("frameBgPathLandscape")));
@property (readonly) PPCSKotlinx_serialization_jsonJsonElement * _Nullable framePath __attribute__((swift_name("framePath")));
@property (readonly) PPCSKotlinx_serialization_jsonJsonElement * _Nullable framePathLandscape __attribute__((swift_name("framePathLandscape")));
@property (readonly) NSString * _Nullable framePathLandscapeOrigin __attribute__((swift_name("framePathLandscapeOrigin")));
@property (readonly) NSString * _Nullable framePathOrigin __attribute__((swift_name("framePathOrigin")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *orientation __attribute__((swift_name("orientation")));
@property (readonly) NSString *platformType __attribute__((swift_name("platformType")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDesc.Companion")))
@interface PPCSDeviceDescCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSDeviceDescCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceFrameHelper")))
@interface PPCSDeviceFrameHelper : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deviceFrameHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSDeviceFrameHelper *shared __attribute__((swift_name("shared")));
- (void)setDeviceFrameEnabledValue:(BOOL)value fixedScenes:(NSMutableArray<PPCSPPScene *> *)fixedScenes __attribute__((swift_name("setDeviceFrameEnabled(value:fixedScenes:)")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePreset")))
@interface PPCSDevicePreset : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)devicePreset __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSDevicePreset *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEVICE_PRESETS __attribute__((swift_name("DEVICE_PRESETS")));
@property (readonly) NSString *DEVICE_PRESETS_ETC __attribute__((swift_name("DEVICE_PRESETS_ETC")));
@property (readonly) NSString *DEVICE_PRESETS_GALAXY __attribute__((swift_name("DEVICE_PRESETS_GALAXY")));
@property (readonly) NSString *DEVICE_PRESETS_IPHONE11 __attribute__((swift_name("DEVICE_PRESETS_IPHONE11")));
@property (readonly) NSString *DEVICE_PRESETS_IPHONE12 __attribute__((swift_name("DEVICE_PRESETS_IPHONE12")));
@property (readonly) NSString *DEVICE_PRESETS_IPHONE13 __attribute__((swift_name("DEVICE_PRESETS_IPHONE13")));
@property (readonly) NSString *DEVICE_PRESETS_IPHONE14 __attribute__((swift_name("DEVICE_PRESETS_IPHONE14")));
@property (readonly) NSString *DEVICE_PRESETS_IPHONE15 __attribute__((swift_name("DEVICE_PRESETS_IPHONE15")));
@property (readonly) NSString *DEVICE_PRESETS_IPHONE16 __attribute__((swift_name("DEVICE_PRESETS_IPHONE16")));
@property (readonly) NSString *DEVICE_PRESETS_PIXEL __attribute__((swift_name("DEVICE_PRESETS_PIXEL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFont")))
@interface PPCSPPFont : PPCSBase
- (NSString *)getDisplayName __attribute__((swift_name("getDisplayName()")));
- (PPCSPPFont *)replaceFamilyFamily:(NSString *)family __attribute__((swift_name("replaceFamily(family:)")));
@property (readonly) NSString * _Nullable family __attribute__((swift_name("family")));
@property (readonly) NSString * _Nullable postscriptName __attribute__((swift_name("postscriptName")));
@property (readonly) float preferredLineHeight __attribute__((swift_name("preferredLineHeight")));
@property (readonly) NSString * _Nullable style __attribute__((swift_name("style")));
@property (readonly) NSString * _Nullable subfamily __attribute__((swift_name("subfamily")));
@property (readonly) NSString * _Nullable weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter")))
@interface PPCSPPLayerViewSplitter : PPCSBase
- (instancetype)initWithScene:(PPCSPPScene *)scene splittingLayerIds:(id)splittingLayerIds __attribute__((swift_name("init(scene:splittingLayerIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPLayerViewSplitterCompanion *companion __attribute__((swift_name("companion")));
- (void)update __attribute__((swift_name("update()")));
@property (readonly) NSMutableArray<PPCSPPLayerViewSplitterGroup *> *groups __attribute__((swift_name("groups")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter.Companion")))
@interface PPCSPPLayerViewSplitterCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPLayerViewSplitterCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PPLayerViewSplitter.Group")))
@interface PPCSPPLayerViewSplitterGroup : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter.NormalLayersGroup")))
@interface PPCSPPLayerViewSplitterNormalLayersGroup : PPCSPPLayerViewSplitterGroup
- (instancetype)initWithLayers:(NSArray<PPCSPPLayer *> *)layers __attribute__((swift_name("init(layers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<PPCSPPLayer *> *layers __attribute__((swift_name("layers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter.SplittingLayer")))
@interface PPCSPPLayerViewSplitterSplittingLayer : PPCSPPLayerViewSplitterGroup
- (instancetype)initWithLayer:(PPCSPPLayer *)layer __attribute__((swift_name("init(layer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) PPCSPPLayer *layer __attribute__((swift_name("layer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieModel")))
@interface PPCSPPPieModel : PPCSBase
- (instancetype)initWithDeviceInfo:(PPCSPPDeviceInfo *)deviceInfo observer:(id<PPCSPPEngineObserver> _Nullable)observer fonts:(NSDictionary<NSString *, PPCSPPFont *> *)fonts __attribute__((swift_name("init(deviceInfo:observer:fonts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPPieModelCompanion *companion __attribute__((swift_name("companion")));
- (float)computeScaleFactorWidth:(float)width height:(float)height __attribute__((swift_name("computeScaleFactor(width:height:)")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (NSArray<PPCSPPVar<id> *> *)getContextVariables __attribute__((swift_name("getContextVariables()")));
- (PPCSPPFont * _Nullable)getFontPostscriptName:(NSString *)postscriptName __attribute__((swift_name("getFont(postscriptName:)")));
- (id)getFonts __attribute__((swift_name("getFonts()")));
- (NSDictionary<NSString *, PPCSPPFont *> *)getFontsMap __attribute__((swift_name("getFontsMap()")));
- (NSArray<PPCSPPVar<id> *> *)getGlobalVariables __attribute__((swift_name("getGlobalVariables()")));
- (PPCSPPScene * _Nullable)getSceneByIdSceneId:(NSString * _Nullable)sceneId __attribute__((swift_name("getSceneById(sceneId:)")));
- (NSArray<PPCSPPVar<id> *> *)getSceneVariables __attribute__((swift_name("getSceneVariables()")));
- (BOOL)hasVideoLayer __attribute__((swift_name("hasVideoLayer()")));
- (void)hideSceneScene:(PPCSPPScene *)scene isTransition:(BOOL)isTransition __attribute__((swift_name("hideScene(scene:isTransition:)")));
- (void)doInitContextContext:(PPCSPPPieContext *)context __attribute__((swift_name("doInitContext(context:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)showFixedSceneScene:(PPCSPPScene *)scene isTransition:(BOOL)isTransition __attribute__((swift_name("showFixedScene(scene:isTransition:)")));
- (void)showSceneScene:(PPCSPPScene *)scene top:(BOOL)top isTransition:(BOOL)isTransition __attribute__((swift_name("showScene(scene:top:isTransition:)")));
- (void)toggleVariableVisibilityVarName:(NSString *)varName updateLayerVisibility:(void (^ _Nullable)(NSString *, PPCSBoolean *))updateLayerVisibility __attribute__((swift_name("toggleVariableVisibility(varName:updateLayerVisibility:)")));
@property (readonly) NSDictionary<NSString *, PPCSPPLayerType *> *allResourceIds __attribute__((swift_name("allResourceIds")));
@property (readonly) NSSet<NSString *> *allThumbnailIds __attribute__((swift_name("allThumbnailIds")));
@property int32_t baseModelVersion __attribute__((swift_name("baseModelVersion")));
@property (readonly) PPCSPPDeviceInfo *deviceInfo __attribute__((swift_name("deviceInfo")));
@property (readonly) NSMutableArray<PPCSPPScene *> *fixedScenes __attribute__((swift_name("fixedScenes")));
@property (readonly) NSDictionary<NSString *, PPCSPPFont *> *fonts __attribute__((swift_name("fonts")));
@property float height __attribute__((swift_name("height")));
@property (readonly) PPCSPPScene *initialScene __attribute__((swift_name("initialScene")));
@property NSString * _Nullable initialSceneId __attribute__((swift_name("initialSceneId")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property int32_t modelVersion __attribute__((swift_name("modelVersion")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) id<PPCSPPEngineObserver> _Nullable observer __attribute__((swift_name("observer")));
@property (readonly) BOOL requiresMicPermission __attribute__((swift_name("requiresMicPermission")));
@property (readonly) NSMutableArray<PPCSPPScene *> *scenes __attribute__((swift_name("scenes")));
@property NSString * _Nullable selectedSceneId __attribute__((swift_name("selectedSceneId")));
@property PPCSPPScene * _Nullable statusBarScene __attribute__((swift_name("statusBarScene")));
@property (readonly) NSSet<NSString *> *usedFontNames __attribute__((swift_name("usedFontNames")));
@property float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieModel.Companion")))
@interface PPCSPPPieModelCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPPieModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MODEL_VERSION __attribute__((swift_name("MODEL_VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlayControlGestureOptions")))
@interface PPCSPPPlayControlGestureOptions : PPCSBase
- (instancetype)initWithTwoFingerDoubleTapEnabled:(BOOL)twoFingerDoubleTapEnabled threeFingerTapEnabled:(BOOL)threeFingerTapEnabled shakeEnabled:(BOOL)shakeEnabled __attribute__((swift_name("init(twoFingerDoubleTapEnabled:threeFingerTapEnabled:shakeEnabled:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL shakeEnabled __attribute__((swift_name("shakeEnabled")));
@property (readonly) BOOL threeFingerTapEnabled __attribute__((swift_name("threeFingerTapEnabled")));
@property (readonly) BOOL twoFingerDoubleTapEnabled __attribute__((swift_name("twoFingerDoubleTapEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPScene")))
@interface PPCSPPScene : PPCSBase
- (NSSet<NSString *> *)consumeModifiedLayerIdsIncludeMaskedLayers:(BOOL)includeMaskedLayers __attribute__((swift_name("consumeModifiedLayerIds(includeMaskedLayers:)")));
- (NSSet<PPCSPPContainerLayer *> *)consumeReorderedParentLayers __attribute__((swift_name("consumeReorderedParentLayers()")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (void)forEachLayerFn:(void (^)(PPCSPPLayer *))fn __attribute__((swift_name("forEachLayer(fn:)")));
- (PPCSPPLayer * _Nullable)getLayerByIdId:(NSString * _Nullable)id __attribute__((swift_name("getLayerById(id:)")));
- (BOOL)handleKeyEventKeyCode:(PPCSPPKeyCode *)keyCode now:(int64_t)now __attribute__((swift_name("handleKeyEvent(keyCode:now:)")));
- (void)handleReceivedMessageChannel:(PPCSPPMsgChannel *)channel scope:(NSString * _Nullable)scope messageId:(NSString *)messageId value:(NSString * _Nullable)value now:(int64_t)now __attribute__((swift_name("handleReceivedMessage(channel:scope:messageId:value:now:)")));
- (void)handleShakeEventNow:(int64_t)now __attribute__((swift_name("handleShakeEvent(now:)")));
- (BOOL)hasAutoLayoutEnabledChild __attribute__((swift_name("hasAutoLayoutEnabledChild()")));
- (void)doInitContextPieContext:(PPCSPPPieContext *)pieContext __attribute__((swift_name("doInitContext(pieContext:)")));
- (BOOL)is3DRotatingLayerLayerId:(NSString *)layerId __attribute__((swift_name("is3DRotatingLayer(layerId:)")));
- (void)prepareTransitionNow:(int64_t)now __attribute__((swift_name("prepareTransition(now:)")));
- (void)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetMediaState __attribute__((swift_name("resetMediaState()")));
- (void)startNow:(int64_t)now includePreTransition:(BOOL)includePreTransition __attribute__((swift_name("start(now:includePreTransition:)")));
@property (readonly) NSSet<PPCSPPChangeTarget *> *changeTargets __attribute__((swift_name("changeTargets")));
@property (readonly, getter=doCopy) PPCSPPScene * _Nullable (^copy)(void) __attribute__((swift_name("copy")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSSet<NSString *> *nextSceneIds __attribute__((swift_name("nextSceneIds")));
@property (readonly) NSDictionary<NSString *, PPCSPPLayerType *> *requiredMediaResourceIds __attribute__((swift_name("requiredMediaResourceIds")));
@property (readonly) PPCSPPContainerLayer * _Nullable rootLayer __attribute__((swift_name("rootLayer")));
@property (readonly) NSString * _Nullable thumbnailId __attribute__((swift_name("thumbnailId")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprParseError")))
@interface PPCSPPExprParseError : PPCSBase
- (instancetype)initWithPosition:(int32_t)position code:(NSString *)code args:(PPCSKotlinArray<NSString *> *)args message:(NSString *)message __attribute__((swift_name("init(position:code:args:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPExprParseErrorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PPCSKotlinArray<NSString *> *args __attribute__((swift_name("args")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprParseError.Companion")))
@interface PPCSPPExprParseErrorCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPExprParseErrorCompanion *shared __attribute__((swift_name("shared")));
- (PPCSPPExprParseError *)errorPosition:(int32_t)position code:(NSString *)code args:(PPCSKotlinArray<NSString *> *)args __attribute__((swift_name("error(position:code:args:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPClock")))
@interface PPCSPPClock : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addObserverObserver:(id<PPCSPPClockObserver>)observer __attribute__((swift_name("addObserver(observer:)")));
- (BOOL)isPaused __attribute__((swift_name("isPaused()")));
- (void)pause __attribute__((swift_name("pause()")));
- (void)removeObserverObserver:(id<PPCSPPClockObserver>)observer __attribute__((swift_name("removeObserver(observer:)")));
- (void)resetTime:(int32_t)time __attribute__((swift_name("reset(time:)")));
- (void)resetTime_:(int64_t)time __attribute__((swift_name("reset(time_:)")));
- (void)resume __attribute__((swift_name("resume()")));
- (int64_t)tick __attribute__((swift_name("tick()")));
@property (readonly) int64_t now __attribute__((swift_name("now")));
@property (readonly) int32_t nowToInt __attribute__((swift_name("nowToInt")));
@property double scale __attribute__((swift_name("scale")));
@end

__attribute__((swift_name("PPClockObserver")))
@protocol PPCSPPClockObserver
@required
- (void)onClockScaleChangeScale:(double)scale __attribute__((swift_name("onClockScaleChange(scale:)")));
- (void)onPause __attribute__((swift_name("onPause()")));
- (void)onResumeClockScale:(double)clockScale __attribute__((swift_name("onResume(clockScale:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMessageBus")))
@interface PPCSPPMessageBus : PPCSBase
- (instancetype)initWithTaskRunner:(id<PPCSPPMessageBusTaskRunner>)taskRunner __attribute__((swift_name("init(taskRunner:)"))) __attribute__((objc_designated_initializer));
- (void)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)removeMessageMsg:(PPCSPPMessage *)msg __attribute__((swift_name("removeMessage(msg:)")));
- (void)removeMessageOfLayerLayerId:(NSString *)layerId removingTaskNo:(int32_t)removingTaskNo __attribute__((swift_name("removeMessageOfLayer(layerId:removingTaskNo:)")));
- (void)removeMessageOfVariableVariable:(PPCSPPVar<id> *)variable removingTaskNo:(int32_t)removingTaskNo __attribute__((swift_name("removeMessageOfVariable(variable:removingTaskNo:)")));
- (void)removeRealClockTaskMsg:(PPCSPPMessage *)msg __attribute__((swift_name("removeRealClockTask(msg:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (int32_t)scheduleRealClockTaskMessage:(PPCSPPMessage *)message delay:(int32_t)delay __attribute__((swift_name("scheduleRealClockTask(message:delay:)")));
- (int32_t)sendMessage:(PPCSPPMessage *)message repeatDef:(PPCSPPRepeatDef * _Nullable)repeatDef delay:(int64_t)delay startCallback:(void (^ _Nullable)(PPCSLong *, PPCSInt *))startCallback __attribute__((swift_name("send(message:repeatDef:delay:startCallback:)")));
@end

__attribute__((swift_name("PPMessageBusTaskRunner")))
@protocol PPCSPPMessageBusTaskRunner
@required
- (void)onMessageMessage:(PPCSPPMessage *)message now:(int64_t)now __attribute__((swift_name("onMessage(message:now:)")));
@end

__attribute__((swift_name("PPOnMessageListener")))
@protocol PPCSPPOnMessageListener
@required
- (void)onMessageChannel:(PPCSPPMsgChannel *)channel messageId:(NSString *)messageId value:(NSString * _Nullable)value __attribute__((swift_name("onMessage(channel:messageId:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieContext")))
@interface PPCSPPPieContext : PPCSBase
- (instancetype)initWithDensity:(float)density replayMode:(BOOL)replayMode __attribute__((swift_name("init(density:replayMode:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) BOOL replayMode __attribute__((swift_name("replayMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayer")))
@interface PPCSPPPiePlayer : PPCSBase
- (instancetype)initWithPie:(PPCSPPPieModel *)pie initialScene:(PPCSPPScene *)initialScene clock:(PPCSPPClock *)clock playerDelegate:(id<PPCSPlayerDelegate>)playerDelegate hotspotHintsEnabled:(BOOL)hotspotHintsEnabled sensorManager:(id<PPCSPPSensorManager>)sensorManager voiceInterface:(id<PPCSPPVoiceInterface> _Nullable)voiceInterface speechInterface:(id<PPCSPPSpeechInterface> _Nullable)speechInterface record:(BOOL)record broadcast:(BOOL)broadcast forceDisableWatermark:(BOOL)forceDisableWatermark __attribute__((swift_name("init(pie:initialScene:clock:playerDelegate:hotspotHintsEnabled:sensorManager:voiceInterface:speechInterface:record:broadcast:forceDisableWatermark:)"))) __attribute__((objc_designated_initializer));
- (void)focusOutCurrentNow:(int64_t)now __attribute__((swift_name("focusOutCurrent(now:)")));
- (PPCSPPPieRecord * _Nullable)getRecord __attribute__((swift_name("getRecord()")));
- (PPCSPPScene * _Nullable)getRunningScene __attribute__((swift_name("getRunningScene()")));
- (BOOL)handleKeyDownKeyCode:(PPCSPPKeyCode *)keyCode __attribute__((swift_name("handleKeyDown(keyCode:)")));
- (void)handleKeyboardShown:(BOOL)shown keyboardHeight:(int32_t)keyboardHeight now:(int64_t)now __attribute__((swift_name("handleKeyboard(shown:keyboardHeight:now:)")));
- (void)handleMessageMessageId:(NSString *)messageId channel:(PPCSPPMsgChannel *)channel value:(NSString * _Nullable)value __attribute__((swift_name("handleMessage(messageId:channel:value:)")));
- (void)handleMouseMoveMouseX:(float)mouseX mouseY:(float)mouseY __attribute__((swift_name("handleMouseMove(mouseX:mouseY:)")));
- (void)handleShake __attribute__((swift_name("handleShake()")));
- (void)onTouchEventTouchEvent:(PPCSPPTouchEvent *)touchEvent __attribute__((swift_name("onTouchEvent(touchEvent:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)progressNow:(int64_t)now error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("progress(now:)")));
- (void)restoreFromReplayDataData:(NSString *)data __attribute__((swift_name("restoreFromReplayData(data:)")));
- (void)restoreSceneActiveSceneId:(NSString * _Nullable)activeSceneId __attribute__((swift_name("restoreScene(activeSceneId:)")));
- (void)setHotspotHintsEnabledValue:(BOOL)value __attribute__((swift_name("setHotspotHintsEnabled(value:)")));
- (void)showHotspotHints __attribute__((swift_name("showHotspotHints()")));
- (void)start __attribute__((swift_name("start()")));
- (void)stopAll __attribute__((swift_name("stopAll()")));
- (void)switchSceneSceneId:(NSString *)sceneId __attribute__((swift_name("switchScene(sceneId:)")));
@property (readonly) PPCSPPEventChannel<PPCSPPPiePlayerEvent *> *channel __attribute__((swift_name("channel")));
@property (readonly) PPCSPPPieModel *pie __attribute__((swift_name("pie")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayer.PlayerDelayRunner")))
@interface PPCSPPPiePlayerPlayerDelayRunner : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancelRunnable:(void (^)(void))runnable __attribute__((swift_name("cancel(runnable:)")));
- (void)progress __attribute__((swift_name("progress()")));
- (void)runRunnable:(void (^)(void))runnable delay:(int32_t)delay __attribute__((swift_name("run(runnable:delay:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("PPPlayEvent")))
@interface PPCSPPPlayEvent : PPCSBase
- (instancetype)initWithEventId:(int32_t)eventId delay:(int32_t)delay startTime:(int32_t)startTime endTime:(int32_t)endTime sceneId:(NSString *)sceneId namespace:(NSString *)namespace_ targetType:(NSString *)targetType targetId:(NSString *)targetId count:(int32_t)count averageDuration:(int32_t)averageDuration parentEventId:(PPCSInt * _Nullable)parentEventId __attribute__((swift_name("init(eventId:delay:startTime:endTime:sceneId:namespace:targetType:targetId:count:averageDuration:parentEventId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 eventId:(int32_t)eventId delay:(int32_t)delay startTime:(int32_t)startTime endTime:(int32_t)endTime sceneId:(NSString * _Nullable)sceneId namespace:(NSString * _Nullable)namespace_ targetType:(NSString * _Nullable)targetType targetId:(NSString * _Nullable)targetId count:(int32_t)count averageDuration:(int32_t)averageDuration parentEventId:(PPCSInt * _Nullable)parentEventId lastMergedStartTime:(int32_t)lastMergedStartTime serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:eventId:delay:startTime:endTime:sceneId:namespace:targetType:targetId:count:averageDuration:parentEventId:lastMergedStartTime:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPPlayEventCompanion *companion __attribute__((swift_name("companion")));
- (void)mergeStartTime:(int32_t)startTime endTime:(int32_t)endTime __attribute__((swift_name("merge(startTime:endTime:)")));
@property int32_t averageDuration __attribute__((swift_name("averageDuration")));
@property int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t delay __attribute__((swift_name("delay")));
@property int32_t endTime __attribute__((swift_name("endTime")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property int32_t lastMergedStartTime __attribute__((swift_name("lastMergedStartTime")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) PPCSInt * _Nullable parentEventId __attribute__((swift_name("parentEventId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) int32_t startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString *targetId __attribute__((swift_name("targetId")));
@property (readonly) NSString *targetType __attribute__((swift_name("targetType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlayEvent.Companion")))
@interface PPCSPPPlayEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPPlayEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TARGET_TYPE_RESPONSE __attribute__((swift_name("TARGET_TYPE_RESPONSE")));
@property (readonly) NSString *TARGET_TYPE_TRIGGER __attribute__((swift_name("TARGET_TYPE_TRIGGER")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneContext")))
@interface PPCSPPSceneContext : PPCSBase
- (instancetype)initWithPieContext:(PPCSPPPieContext *)pieContext taskScheduler:(PPCSPPMessageBus *)taskScheduler __attribute__((swift_name("init(pieContext:taskScheduler:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCSPPPieContext *pieContext __attribute__((swift_name("pieContext")));
@property (readonly) PPCSPPMessageBus *taskScheduler __attribute__((swift_name("taskScheduler")));
@end

__attribute__((swift_name("PlayerDelegate")))
@protocol PPCSPlayerDelegate
@required
- (void)addSceneViewScene:(PPCSPPScene *)scene top:(BOOL)top __attribute__((swift_name("addSceneView(scene:top:)")));
- (void)broadcastType:(NSString *)type data:(NSString *)data __attribute__((swift_name("broadcast(type:data:)")));
- (void)emitBarCodeScannedData:(NSString *)data __attribute__((swift_name("emitBarCodeScanned(data:)")));
- (void)openUrlUrlString:(NSString *)urlString inAppBrowser:(BOOL)inAppBrowser __attribute__((swift_name("openUrl(urlString:inAppBrowser:)")));
- (void)removeSceneViewScene:(PPCSPPScene *)scene __attribute__((swift_name("removeSceneView(scene:)")));
- (void)resetBackgroundColor __attribute__((swift_name("resetBackgroundColor()")));
- (void)sendChannel:(PPCSPPMsgChannel *)channel msg:(PPCSPPMsg *)msg __attribute__((swift_name("send(channel:msg:)")));
- (void)setBackgroundColorColor:(PPCSPPColor *)color __attribute__((swift_name("setBackgroundColor(color:)")));
- (void)showControl __attribute__((swift_name("showControl()")));
- (void)showFixedSceneScene:(PPCSPPScene *)scene __attribute__((swift_name("showFixedScene(scene:)")));
- (void)vibrateIosType:(PPCSPPIosVibrateType *)iosType androidType:(PPCSPPAndroidVibrateType *)androidType __attribute__((swift_name("vibrate(iosType:androidType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayOptions")))
@interface PPCSReplayOptions : PPCSBase
- (instancetype)initWithAutoPlay:(PPCSBoolean * _Nullable)autoPlay onProgress:(void (^ _Nullable)(PPCSInt *))onProgress onEnd:(void (^ _Nullable)(void))onEnd onPropChange:(void (^ _Nullable)(NSString *, NSString *, NSString *))onPropChange onVarChange:(void (^ _Nullable)(NSString *, NSString *))onVarChange onOneTimeTrigger:(void (^ _Nullable)(PPCSInt *))onOneTimeTrigger onSceneChange:(void (^ _Nullable)(NSString *))onSceneChange onFirstFrame:(void (^ _Nullable)(void))onFirstFrame onInitialSceneResourceLoaded:(void (^ _Nullable)(PPCSInt *, PPCSInt *))onInitialSceneResourceLoaded __attribute__((swift_name("init(autoPlay:onProgress:onEnd:onPropChange:onVarChange:onOneTimeTrigger:onSceneChange:onFirstFrame:onInitialSceneResourceLoaded:)"))) __attribute__((objc_designated_initializer));
- (PPCSReplayOptions *)doCopyAutoPlay:(PPCSBoolean * _Nullable)autoPlay onProgress:(void (^ _Nullable)(PPCSInt *))onProgress onEnd:(void (^ _Nullable)(void))onEnd onPropChange:(void (^ _Nullable)(NSString *, NSString *, NSString *))onPropChange onVarChange:(void (^ _Nullable)(NSString *, NSString *))onVarChange onOneTimeTrigger:(void (^ _Nullable)(PPCSInt *))onOneTimeTrigger onSceneChange:(void (^ _Nullable)(NSString *))onSceneChange onFirstFrame:(void (^ _Nullable)(void))onFirstFrame onInitialSceneResourceLoaded:(void (^ _Nullable)(PPCSInt *, PPCSInt *))onInitialSceneResourceLoaded __attribute__((swift_name("doCopy(autoPlay:onProgress:onEnd:onPropChange:onVarChange:onOneTimeTrigger:onSceneChange:onFirstFrame:onInitialSceneResourceLoaded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCSBoolean * _Nullable autoPlay __attribute__((swift_name("autoPlay")));
@property (readonly) void (^ _Nullable onEnd)(void) __attribute__((swift_name("onEnd")));
@property (readonly) void (^ _Nullable onFirstFrame)(void) __attribute__((swift_name("onFirstFrame")));
@property (readonly) void (^ _Nullable onInitialSceneResourceLoaded)(PPCSInt *, PPCSInt *) __attribute__((swift_name("onInitialSceneResourceLoaded")));
@property (readonly) void (^ _Nullable onOneTimeTrigger)(PPCSInt *) __attribute__((swift_name("onOneTimeTrigger")));
@property (readonly) void (^ _Nullable onProgress)(PPCSInt *) __attribute__((swift_name("onProgress")));
@property (readonly) void (^ _Nullable onPropChange)(NSString *, NSString *, NSString *) __attribute__((swift_name("onPropChange")));
@property (readonly) void (^ _Nullable onSceneChange)(NSString *) __attribute__((swift_name("onSceneChange")));
@property (readonly) void (^ _Nullable onVarChange)(NSString *, NSString *) __attribute__((swift_name("onVarChange")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Replayer")))
@interface PPCSReplayer : PPCSBase
- (instancetype)initWithPie:(PPCSPPPieModel *)pie initialScene:(PPCSPPScene *)initialScene clock:(PPCSPPClock *)clock delegate:(id<PPCSReplayerDelegate>)delegate record:(PPCSPPPieRecord * _Nullable)record options:(PPCSReplayOptions * _Nullable)options __attribute__((swift_name("init(pie:initialScene:clock:delegate:record:options:)"))) __attribute__((objc_designated_initializer));
- (int32_t)getEndTime __attribute__((swift_name("getEndTime()")));
- (int64_t)getSceneAddedTimeEvent:(PPCSPPSceneChangeEvent *)event __attribute__((swift_name("getSceneAddedTime(event:)")));
- (int32_t)getStartTime __attribute__((swift_name("getStartTime()")));
- (BOOL)jumpTime:(int32_t)time __attribute__((swift_name("jump(time:)")));
- (void)onColorPropChangeSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName value:(PPCSPPColor *)value __attribute__((swift_name("onColorPropChange(sceneId:layerId:propName:value:)")));
- (void)onColorVarChangeSceneId:(NSString *)sceneId varName:(NSString *)varName value:(PPCSPPColor *)value __attribute__((swift_name("onColorVarChange(sceneId:varName:value:)")));
- (void)onExtraPropChangeSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName value:(NSString *)value __attribute__((swift_name("onExtraPropChange(sceneId:layerId:propName:value:)")));
- (void)onInteractionEventIndex:(int32_t)index __attribute__((swift_name("onInteractionEvent(index:)")));
- (void)onMouseActionAction:(NSString *)action forward:(BOOL)forward __attribute__((swift_name("onMouseAction(action:forward:)")));
- (void)onMouseMoveX:(int32_t)x y:(int32_t)y __attribute__((swift_name("onMouseMove(x:y:)")));
- (void)onNumberPropChangeSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName value:(float)value __attribute__((swift_name("onNumberPropChange(sceneId:layerId:propName:value:)")));
- (void)onNumberVarChangeSceneId:(NSString *)sceneId varName:(NSString *)varName value:(float)value __attribute__((swift_name("onNumberVarChange(sceneId:varName:value:)")));
- (void)onRenderEventEvent:(PPCSPPRenderEvent *)event forward:(BOOL)forward __attribute__((swift_name("onRenderEvent(event:forward:)")));
- (void)onStringVarChangeSceneId:(NSString *)sceneId varName:(NSString *)varName value:(NSString *)value __attribute__((swift_name("onStringVarChange(sceneId:varName:value:)")));
- (void)postProgress __attribute__((swift_name("postProgress()")));
- (void)preProgress __attribute__((swift_name("preProgress()")));
- (void)progressFromTime:(int32_t)fromTime toTime:(int32_t)toTime __attribute__((swift_name("progress(fromTime:toTime:)")));
- (void)putData:(NSString *)data __attribute__((swift_name("put(data:)")));
- (void)setReplayDataData:(NSString *)data __attribute__((swift_name("setReplayData(data:)")));
- (void)start __attribute__((swift_name("start()")));
@end

__attribute__((swift_name("ReplayerDelegate")))
@protocol PPCSReplayerDelegate
@required
- (void)addSceneViewScene:(PPCSPPScene *)scene top:(BOOL)top fixed:(BOOL)fixed __attribute__((swift_name("addSceneView(scene:top:fixed:)")));
- (void)onMouseActionAction:(NSString *)action forward:(BOOL)forward __attribute__((swift_name("onMouseAction(action:forward:)")));
- (void)onMouseMoveX:(int32_t)x y:(int32_t)y __attribute__((swift_name("onMouseMove(x:y:)")));
- (void)removeSceneViewScene:(PPCSPPScene *)scene __attribute__((swift_name("removeSceneView(scene:)")));
- (void)showFixedSceneScene:(PPCSPPScene *)scene __attribute__((swift_name("showFixedScene(scene:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileOptions")))
@interface PPCSProfileOptions : PPCSBase
- (instancetype)initWithIntervalFrames:(int32_t)intervalFrames onCpuUsage:(NSString *(^ _Nullable)(void))onCpuUsage onMemoryUsage:(NSString *(^ _Nullable)(void))onMemoryUsage __attribute__((swift_name("init(intervalFrames:onCpuUsage:onMemoryUsage:)"))) __attribute__((objc_designated_initializer));
- (PPCSProfileOptions *)doCopyIntervalFrames:(int32_t)intervalFrames onCpuUsage:(NSString *(^ _Nullable)(void))onCpuUsage onMemoryUsage:(NSString *(^ _Nullable)(void))onMemoryUsage __attribute__((swift_name("doCopy(intervalFrames:onCpuUsage:onMemoryUsage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t intervalFrames __attribute__((swift_name("intervalFrames")));
@property (readonly) NSString *(^ _Nullable onCpuUsage)(void) __attribute__((swift_name("onCpuUsage")));
@property (readonly) NSString *(^ _Nullable onMemoryUsage)(void) __attribute__((swift_name("onMemoryUsage")));
@end

__attribute__((swift_name("PPValueProvider")))
@protocol PPCSPPValueProvider
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("PPProperty")))
@interface PPCSPPProperty<T> : PPCSBase <PPCSPPValueProvider>
- (instancetype)initWithParentId:(NSString *)parentId name:(NSString *)name key:(PPCSPPLayerProperty * _Nullable)key initialValue:(T)initialValue observer:(id<PPCSPPPropertyObserver> _Nullable)observer __attribute__((swift_name("init(parentId:name:key:initialValue:observer:)"))) __attribute__((objc_designated_initializer));
- (T)curVal __attribute__((swift_name("curVal()")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (BOOL)isChanged __attribute__((swift_name("isChanged()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyEndChange __attribute__((swift_name("notifyEndChange()")));
- (void)notifyModification __attribute__((swift_name("notifyModification()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyWillChange __attribute__((swift_name("notifyWillChange()")));
- (BOOL)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setInitialValue:(T)value __attribute__((swift_name("setInitial(value:)")));
- (void)stop __attribute__((swift_name("stop()")));
@property BOOL affectsRendering __attribute__((swift_name("affectsRendering")));
@property T currentValue __attribute__((swift_name("currentValue")));
@property (setter=setInitialValue_:) T initialValue __attribute__((swift_name("initialValue")));
@property T intermediaryValue __attribute__((swift_name("intermediaryValue")));
@property (readonly) PPCSPPLayerProperty * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPColorProperty")))
@interface PPCSPPColorProperty : PPCSPPProperty<PPCSPPColor *>
- (instancetype)initWithParentId:(NSString *)parentId name:(NSString *)name key:(PPCSPPLayerProperty * _Nullable)key initialValue:(id)initialValue observer:(id<PPCSPPPropertyObserver> _Nullable)observer __attribute__((swift_name("init(parentId:name:key:initialValue:observer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setImmediateValue:(PPCSPPColor *)value __attribute__((swift_name("setImmediate(value:)")));
- (void)setInitialValue:(PPCSPPColor *)value __attribute__((swift_name("setInitial(value:)")));
- (void)stop __attribute__((swift_name("stop()")));
- (NSString *)toHex __attribute__((swift_name("toHex()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t blue __attribute__((swift_name("blue")));
@property (readonly) PPCSPPColor *color __attribute__((swift_name("color")));
@property (readonly) int32_t green __attribute__((swift_name("green")));
@property BOOL modified __attribute__((swift_name("modified")));
@property (readonly) id<PPCSPPPropertyObserver> o __attribute__((swift_name("o")));
@property (readonly) int32_t red __attribute__((swift_name("red")));
@property (readonly) PPCSPPColor *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFloatProperty")))
@interface PPCSPPFloatProperty : PPCSPPProperty<PPCSFloat *>
- (instancetype)initWithParentId:(NSString *)parentId name:(NSString *)name key:(PPCSPPLayerProperty * _Nullable)key initialValue:(id)initialValue observer:(id<PPCSPPPropertyObserver> _Nullable)observer __attribute__((swift_name("init(parentId:name:key:initialValue:observer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (float)curValScaleFactor:(float)scaleFactor __attribute__((swift_name("curVal(scaleFactor:)")));
- (BOOL)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setImmediateValue:(float)value __attribute__((swift_name("setImmediate(value:)")));
- (void)stop __attribute__((swift_name("stop()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isChanging __attribute__((swift_name("isChanging")));
@property (readonly) NSString *parentId __attribute__((swift_name("parentId")));
@property (readonly) PPCSFloat *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerProperty")))
@interface PPCSPPLayerProperty : PPCSKotlinEnum<PPCSPPLayerProperty *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSPPLayerProperty *x __attribute__((swift_name("x")));
@property (class, readonly) PPCSPPLayerProperty *y __attribute__((swift_name("y")));
@property (class, readonly) PPCSPPLayerProperty *width __attribute__((swift_name("width")));
@property (class, readonly) PPCSPPLayerProperty *height __attribute__((swift_name("height")));
@property (class, readonly) PPCSPPLayerProperty *rotation __attribute__((swift_name("rotation")));
@property (class, readonly) PPCSPPLayerProperty *rotation3d __attribute__((swift_name("rotation3d")));
@property (class, readonly) PPCSPPLayerProperty *rotation3dx __attribute__((swift_name("rotation3dx")));
@property (class, readonly) PPCSPPLayerProperty *rotation3dy __attribute__((swift_name("rotation3dy")));
@property (class, readonly) PPCSPPLayerProperty *opacity __attribute__((swift_name("opacity")));
@property (class, readonly) PPCSPPLayerProperty *order __attribute__((swift_name("order")));
@property (class, readonly) PPCSPPLayerProperty *fillColor __attribute__((swift_name("fillColor")));
@property (class, readonly) PPCSPPLayerProperty *fillOpacity __attribute__((swift_name("fillOpacity")));
@property (class, readonly) PPCSPPLayerProperty *fillSolidRate __attribute__((swift_name("fillSolidRate")));
@property (class, readonly) PPCSPPLayerProperty *fillImageRate __attribute__((swift_name("fillImageRate")));
@property (class, readonly) PPCSPPLayerProperty *radius __attribute__((swift_name("radius")));
@property (class, readonly) PPCSPPLayerProperty *radiusTopLeft __attribute__((swift_name("radiusTopLeft")));
@property (class, readonly) PPCSPPLayerProperty *radiusTopRight __attribute__((swift_name("radiusTopRight")));
@property (class, readonly) PPCSPPLayerProperty *radiusBottomLeft __attribute__((swift_name("radiusBottomLeft")));
@property (class, readonly) PPCSPPLayerProperty *radiusBottomRight __attribute__((swift_name("radiusBottomRight")));
@property (class, readonly) PPCSPPLayerProperty *borderColor __attribute__((swift_name("borderColor")));
@property (class, readonly) PPCSPPLayerProperty *borderOpacity __attribute__((swift_name("borderOpacity")));
@property (class, readonly) PPCSPPLayerProperty *borderWidth __attribute__((swift_name("borderWidth")));
@property (class, readonly) PPCSPPLayerProperty *shadowColor __attribute__((swift_name("shadowColor")));
@property (class, readonly) PPCSPPLayerProperty *shadowOpacity __attribute__((swift_name("shadowOpacity")));
@property (class, readonly) PPCSPPLayerProperty *shadowOffsetX __attribute__((swift_name("shadowOffsetX")));
@property (class, readonly) PPCSPPLayerProperty *shadowOffsetY __attribute__((swift_name("shadowOffsetY")));
@property (class, readonly) PPCSPPLayerProperty *shadowBlur __attribute__((swift_name("shadowBlur")));
@property (class, readonly) PPCSPPLayerProperty *shadowSpread __attribute__((swift_name("shadowSpread")));
@property (class, readonly) PPCSPPLayerProperty *backgroundBlur __attribute__((swift_name("backgroundBlur")));
@property (class, readonly) PPCSPPLayerProperty *scrollX __attribute__((swift_name("scrollX")));
@property (class, readonly) PPCSPPLayerProperty *scrollY __attribute__((swift_name("scrollY")));
@property (class, readonly) PPCSPPLayerProperty *scaleX __attribute__((swift_name("scaleX")));
@property (class, readonly) PPCSPPLayerProperty *scaleY __attribute__((swift_name("scaleY")));
@property (class, readonly) PPCSPPLayerProperty *text __attribute__((swift_name("text")));
@property (class, readonly) PPCSPPLayerProperty *currentTime __attribute__((swift_name("currentTime")));
@property (class, readonly) PPCSPPLayerProperty *totalTime __attribute__((swift_name("totalTime")));
@property (class, readonly) PPCSPPLayerProperty *highlight __attribute__((swift_name("highlight")));
@property (class, readonly) PPCSPPLayerProperty *volume __attribute__((swift_name("volume")));
+ (PPCSKotlinArray<PPCSPPLayerProperty *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSPPLayerProperty *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPPropertyObserver")))
@protocol PPCSPPPropertyObserver
@required
- (void)onPropertyEndChangeProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("onPropertyEndChange(property:)")));
- (void)onPropertyModifiedProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)onPropertyWillChangeProperty:(PPCSPPProperty<id> *)property __attribute__((swift_name("onPropertyWillChange(property:)")));
@end

__attribute__((swift_name("PPStringProperty")))
@interface PPCSPPStringProperty : PPCSBase <PPCSPPValueProvider>
- (NSString *)curVal __attribute__((swift_name("curVal()")));
- (NSString *)initialVal __attribute__((swift_name("initialVal()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPathSegmentData")))
@interface PPCSPPPathSegmentData : PPCSBase
@property (readonly) NSMutableArray<PPCSFloat *> *data __attribute__((swift_name("data")));
@property (readonly) PPCSPPPathSegmentType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("PPPieDecorator")))
@protocol PPCSPPPieDecorator
@required
- (void)onSceneLayersReadSceneId:(NSString *)sceneId rootLayer:(PPCSPPContainerLayer *)rootLayer pie:(PPCSPPPieModel *)pie __attribute__((swift_name("onSceneLayersRead(sceneId:rootLayer:pie:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieReader")))
@interface PPCSPPPieReader : PPCSBase
- (instancetype)initWithPieDecorator:(id<PPCSPPPieDecorator> _Nullable)pieDecorator __attribute__((swift_name("init(pieDecorator:)"))) __attribute__((objc_designated_initializer));
- (PPCSPPPieModel *)readPieJson:(id<PPCSPPJson>)json engineObserver:(id<PPCSPPEngineObserver> _Nullable)engineObserver gestureOptions:(PPCSPPPlayControlGestureOptions *)gestureOptions disableVariableDisplay:(BOOL)disableVariableDisplay disableDeviceFrameDisplay:(BOOL)disableDeviceFrameDisplay forceDisableWatermark:(BOOL)forceDisableWatermark __attribute__((swift_name("readPie(json:engineObserver:gestureOptions:disableVariableDisplay:disableDeviceFrameDisplay:forceDisableWatermark:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaState")))
@interface PPCSMediaState : PPCSBase
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId isPlaying:(BOOL)isPlaying isRepeating:(BOOL)isRepeating time:(float)time volume:(float)volume __attribute__((swift_name("init(sceneId:layerId:isPlaying:isRepeating:time:volume:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSMediaStateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL isPlaying __attribute__((swift_name("isPlaying")));
@property (readonly) BOOL isRepeating __attribute__((swift_name("isRepeating")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) float time __attribute__((swift_name("time")));
@property (readonly) float volume __attribute__((swift_name("volume")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaState.Companion")))
@interface PPCSMediaStateCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSMediaStateCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("PPRenderEvent")))
@interface PPCSPPRenderEvent : PPCSBase
@property (class, readonly, getter=companion) PPCSPPRenderEventCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFixedSceneChangeEvent")))
@interface PPCSPPFixedSceneChangeEvent : PPCSPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId add:(BOOL)add top:(BOOL)top __attribute__((swift_name("init(sceneId:add:top:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPFixedSceneChangeEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL add __attribute__((swift_name("add")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) BOOL top __attribute__((swift_name("top")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFixedSceneChangeEvent.Companion")))
@interface PPCSPPFixedSceneChangeEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPFixedSceneChangeEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPInputFocusEvent")))
@interface PPCSPPInputFocusEvent : PPCSPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId focus:(BOOL)focus __attribute__((swift_name("init(sceneId:layerId:focus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPInputFocusEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL focus __attribute__((swift_name("focus")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPInputFocusEvent.Companion")))
@interface PPCSPPInputFocusEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPInputFocusEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosEffectEvent")))
@interface PPCSPPIosEffectEvent : PPCSPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId style:(NSString *)style duration:(int32_t)duration __attribute__((swift_name("init(sceneId:layerId:style:duration:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPIosEffectEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t duration __attribute__((swift_name("duration")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) NSString *style __attribute__((swift_name("style")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosEffectEvent.Companion")))
@interface PPCSPPIosEffectEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPIosEffectEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaCommandEvent")))
@interface PPCSPPMediaCommandEvent : PPCSPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId command:(NSString *)command __attribute__((swift_name("init(sceneId:layerId:command:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPMediaCommandEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *command __attribute__((swift_name("command")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaCommandEvent.Companion")))
@interface PPCSPPMediaCommandEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPMediaCommandEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("PPPieRecord")))
@interface PPCSPPPieRecord : PPCSBase
- (void)attachStartTime:(int32_t)startTime endTime:(int32_t)endTime playEvents:(PPCSPPValueHistory<PPCSPPPlayEvent *> *)playEvents renderEvents:(PPCSPPValueHistory<PPCSPPRenderEvent *> *)renderEvents mousePositions:(PPCSPPValueHistory<PPCSPPPoint *> *)mousePositions mouseActions:(PPCSPPValueHistory<NSString *> *)mouseActions numberValues:(PPCSMutableDictionary<NSString *, PPCSPPValueHistory<PPCSFloat *> *> *)numberValues colorValues:(PPCSMutableDictionary<NSString *, PPCSPPValueHistory<PPCSInt *> *> *)colorValues stringValues:(PPCSMutableDictionary<NSString *, PPCSPPValueHistory<NSString *> *> *)stringValues __attribute__((swift_name("attach(startTime:endTime:playEvents:renderEvents:mousePositions:mouseActions:numberValues:colorValues:stringValues:)")));
- (BOOL)empty __attribute__((swift_name("empty()")));
- (void)getChangesTimeFrom:(int32_t)timeFrom timeTo:(int32_t)timeTo replayer:(PPCSReplayer *)replayer __attribute__((swift_name("getChanges(timeFrom:timeTo:replayer:)")));
- (NSString * _Nullable)getColorPropValueSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName time:(int32_t)time __attribute__((swift_name("getColorPropValue(sceneId:layerId:propName:time:)")));
- (PPCSKotlinArray<PPCSPPPlayEvent *> *)getEvents __attribute__((swift_name("getEvents()")));
- (PPCSFloat * _Nullable)getFloatPropValueSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName time:(int32_t)time __attribute__((swift_name("getFloatPropValue(sceneId:layerId:propName:time:)")));
- (NSString * _Nullable)getStringPropValueSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName time:(int32_t)time __attribute__((swift_name("getStringPropValue(sceneId:layerId:propName:time:)")));
- (void)resetTime:(int32_t)time replayer:(PPCSReplayer *)replayer __attribute__((swift_name("reset(time:replayer:)")));
@property int32_t endTime __attribute__((swift_name("endTime")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *idDelimiter __attribute__((swift_name("idDelimiter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPRenderEvent.Companion")))
@interface PPCSPPRenderEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPRenderEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PPCSKotlinArray<id<PPCSKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPReorderEvent")))
@interface PPCSPPReorderEvent : PPCSPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId parentId:(NSString *)parentId oldIndex:(int32_t)oldIndex newIndex:(int32_t)newIndex __attribute__((swift_name("init(sceneId:parentId:oldIndex:newIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPReorderEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewIndex) int32_t newIndex __attribute__((swift_name("newIndex")));
@property (readonly) int32_t oldIndex __attribute__((swift_name("oldIndex")));
@property (readonly) NSString *parentId __attribute__((swift_name("parentId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPReorderEvent.Companion")))
@interface PPCSPPReorderEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPReorderEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneChangeEvent")))
@interface PPCSPPSceneChangeEvent : PPCSPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId add:(BOOL)add top:(BOOL)top __attribute__((swift_name("init(sceneId:add:top:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPSceneChangeEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL add __attribute__((swift_name("add")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) BOOL top __attribute__((swift_name("top")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneChangeEvent.Companion")))
@interface PPCSPPSceneChangeEventCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPSceneChangeEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPValueHistory")))
@interface PPCSPPValueHistory<T> : PPCSBase
- (instancetype)initWithAllowMultiple:(BOOL)allowMultiple __attribute__((swift_name("init(allowMultiple:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPValueHistoryCompanion *companion __attribute__((swift_name("companion")));
- (void)addValue:(PPCSPPValueHistory<T> *)value __attribute__((swift_name("add(value:)")));
- (void)addTime:(int32_t)time value:(T _Nullable)value __attribute__((swift_name("add(time:value:)")));
- (void)forEachFn:(void (^)(PPCSInt *, T _Nullable))fn __attribute__((swift_name("forEach(fn:)")));
- (T _Nullable)getChangeFromTime:(int32_t)fromTime toTime:(int32_t)toTime __attribute__((swift_name("getChange(fromTime:toTime:)")));
- (T _Nullable)getEventAtIndex:(int32_t)index __attribute__((swift_name("getEventAt(index:)")));
- (NSArray<PPCSInt *> *)getEventIndexBetweenFromTime:(int32_t)fromTime toTime:(int32_t)toTime __attribute__((swift_name("getEventIndexBetween(fromTime:toTime:)")));
- (int32_t)getEventTimeAtIndex:(int32_t)index __attribute__((swift_name("getEventTimeAt(index:)")));
- (T _Nullable)getValueAtTime:(int32_t)time __attribute__((swift_name("getValueAt(time:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) NSArray<PPCSInt *> *times __attribute__((swift_name("times")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPValueHistoryCompanion")))
@interface PPCSPPValueHistoryCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPValueHistoryCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PPCSKotlinArray<id<PPCSKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<PPCSKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayData")))
@interface PPCSReplayData : PPCSBase
- (instancetype)initWithVersion:(int32_t)version startTime:(int32_t)startTime endTime:(int32_t)endTime playEvents:(PPCSPPValueHistory<PPCSPPPlayEvent *> * _Nullable)playEvents renderEvents:(PPCSPPValueHistory<PPCSPPRenderEvent *> * _Nullable)renderEvents mousePositions:(PPCSPPValueHistory<PPCSPPPoint *> * _Nullable)mousePositions mouseActions:(PPCSPPValueHistory<NSString *> * _Nullable)mouseActions numberValues:(PPCSMutableDictionary<NSString *, PPCSPPValueHistory<PPCSFloat *> *> * _Nullable)numberValues colorValues:(PPCSMutableDictionary<NSString *, PPCSPPValueHistory<PPCSInt *> *> * _Nullable)colorValues stringValues:(PPCSMutableDictionary<NSString *, PPCSPPValueHistory<NSString *> *> * _Nullable)stringValues mediaStates:(NSMutableArray<PPCSMediaState *> * _Nullable)mediaStates sceneId:(NSString * _Nullable)sceneId __attribute__((swift_name("init(version:startTime:endTime:playEvents:renderEvents:mousePositions:mouseActions:numberValues:colorValues:stringValues:mediaStates:sceneId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSReplayDataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PPCSMutableDictionary<NSString *, PPCSPPValueHistory<PPCSInt *> *> * _Nullable colorValues __attribute__((swift_name("colorValues")));
@property (readonly) int32_t endTime __attribute__((swift_name("endTime")));
@property (readonly) NSMutableArray<PPCSMediaState *> * _Nullable mediaStates __attribute__((swift_name("mediaStates")));
@property (readonly) PPCSPPValueHistory<NSString *> * _Nullable mouseActions __attribute__((swift_name("mouseActions")));
@property (readonly) PPCSPPValueHistory<PPCSPPPoint *> * _Nullable mousePositions __attribute__((swift_name("mousePositions")));
@property (readonly) PPCSMutableDictionary<NSString *, PPCSPPValueHistory<PPCSFloat *> *> * _Nullable numberValues __attribute__((swift_name("numberValues")));
@property (readonly) PPCSPPValueHistory<PPCSPPPlayEvent *> * _Nullable playEvents __attribute__((swift_name("playEvents")));
@property (readonly) PPCSPPValueHistory<PPCSPPRenderEvent *> * _Nullable renderEvents __attribute__((swift_name("renderEvents")));
@property (readonly) NSString * _Nullable sceneId __attribute__((swift_name("sceneId")));
@property (readonly) int32_t startTime __attribute__((swift_name("startTime")));
@property (readonly) PPCSMutableDictionary<NSString *, PPCSPPValueHistory<NSString *> *> * _Nullable stringValues __attribute__((swift_name("stringValues")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayData.Companion")))
@interface PPCSReplayDataCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSReplayDataCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("ReplayDataManagerDelegate")))
@protocol PPCSReplayDataManagerDelegate
@required
- (void)restoreMediaStateSceneId:(NSString *)sceneId mediaState:(PPCSMediaState *)mediaState __attribute__((swift_name("restoreMediaState(sceneId:mediaState:)")));
- (void)updateSceneSceneId:(NSString *)sceneId __attribute__((swift_name("updateScene(sceneId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataSerializer")))
@interface PPCSReplayDataSerializer : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)replayDataSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSReplayDataSerializer *shared __attribute__((swift_name("shared")));
- (PPCSPPPieRecord *)deserializeReplayData:(NSString *)replayData __attribute__((swift_name("deserialize(replayData:)")));
- (PPCSReplayData *)deserializeReplayDataReplayData:(NSString *)replayData __attribute__((swift_name("deserializeReplayData(replayData:)")));
- (NSString *)serializeRecord:(PPCSPPPieRecord *)record __attribute__((swift_name("serialize(record:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataVersion")))
@interface PPCSReplayDataVersion : PPCSBase
- (instancetype)initWithVersion:(int32_t)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSReplayDataVersionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataVersion.Companion")))
@interface PPCSReplayDataVersionCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSReplayDataVersionCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("DragDetectorListener")))
@protocol PPCSDragDetectorListener
@required
- (void)onDragEndNow:(int64_t)now __attribute__((swift_name("onDragEnd(now:)")));
- (void)onDragMoveNow:(int64_t)now __attribute__((swift_name("onDragMove(now:)")));
- (void)onDragStartNow:(int64_t)now dx:(float)dx dy:(float)dy __attribute__((swift_name("onDragStart(now:dx:dy:)")));
- (BOOL)onDragTouchDownNow:(int64_t)now __attribute__((swift_name("onDragTouchDown(now:)")));
@end

__attribute__((swift_name("TapDetectorListener")))
@protocol PPCSTapDetectorListener
@required
- (void)onCancelNow:(int64_t)now __attribute__((swift_name("onCancel(now:)")));
- (void)onTapNow:(int64_t)now __attribute__((swift_name("onTap(now:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPColor")))
@interface PPCSPPColor : PPCSBase
- (instancetype)initWithRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue __attribute__((swift_name("init(red:green:blue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPColorCompanion *companion __attribute__((swift_name("companion")));
- (PPCSPPColor *)doCopyRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue __attribute__((swift_name("doCopy(red:green:blue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toColorString __attribute__((swift_name("toColorString()")));
- (int32_t)toInt __attribute__((swift_name("toInt()")));
- (int32_t)toIntOpacity:(float)opacity __attribute__((swift_name("toInt(opacity:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t blue __attribute__((swift_name("blue")));
@property (readonly) int32_t green __attribute__((swift_name("green")));
@property (readonly) int32_t red __attribute__((swift_name("red")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPColor.Companion")))
@interface PPCSPPColorCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPColorCompanion *shared __attribute__((swift_name("shared")));
- (PPCSPPColor *)fromIntIntVal:(int32_t)intVal __attribute__((swift_name("fromInt(intVal:)")));
- (NSString *)toHexRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue __attribute__((swift_name("toHex(red:green:blue:)")));
@property (readonly) PPCSPPColor *BLACK __attribute__((swift_name("BLACK")));
@property (readonly) PPCSPPColor *BLUE __attribute__((swift_name("BLUE")));
@property (readonly) PPCSPPColor *CYAN __attribute__((swift_name("CYAN")));
@property (readonly) PPCSPPColor *LIME __attribute__((swift_name("LIME")));
@property (readonly) PPCSPPColor *MAGENTA __attribute__((swift_name("MAGENTA")));
@property (readonly) PPCSPPColor *RED __attribute__((swift_name("RED")));
@property (readonly) PPCSPPColor *WHITE __attribute__((swift_name("WHITE")));
@property (readonly) PPCSPPColor *YELLOW __attribute__((swift_name("YELLOW")));
@end

__attribute__((swift_name("PPCorners")))
@interface PPCSPPCorners<T> : PPCSBase
- (instancetype)initWithTopLeft:(T _Nullable)topLeft topRight:(T _Nullable)topRight bottomRight:(T _Nullable)bottomRight bottomLeft:(T _Nullable)bottomLeft __attribute__((swift_name("init(topLeft:topRight:bottomRight:bottomLeft:)"))) __attribute__((objc_designated_initializer));
- (BOOL)anyPredicate:(PPCSBoolean *(^)(T _Nullable))predicate __attribute__((swift_name("any(predicate:)")));
- (void)setSrc:(PPCSPPCorners<id> *)src valueConverter:(T _Nullable (^)(id _Nullable))valueConverter __attribute__((swift_name("set(src:valueConverter:)")));
- (void)setTopLeft:(T _Nullable)topLeft topRight:(T _Nullable)topRight bottomRight:(T _Nullable)bottomRight bottomLeft:(T _Nullable)bottomLeft __attribute__((swift_name("set(topLeft:topRight:bottomRight:bottomLeft:)")));
@property T _Nullable bottomLeft __attribute__((swift_name("bottomLeft")));
@property T _Nullable bottomRight __attribute__((swift_name("bottomRight")));
@property T _Nullable topLeft __attribute__((swift_name("topLeft")));
@property T _Nullable topRight __attribute__((swift_name("topRight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDeviceInfo")))
@interface PPCSPPDeviceInfo : PPCSBase
@property (class, readonly, getter=companion) PPCSPPDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) PPCSPPDeviceFrameType *frameType __attribute__((swift_name("frameType")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BOOL isPortrait __attribute__((swift_name("isPortrait")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) PPCSPPPlatformType *platformType __attribute__((swift_name("platformType")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDeviceInfo.Companion")))
@interface PPCSPPDeviceInfoCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (PPCSPPPlatformType *)inferPlatformTypeFromDeviceIdId:(NSString * _Nullable)id __attribute__((swift_name("inferPlatformTypeFromDeviceId(id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFloatCorners")))
@interface PPCSPPFloatCorners : PPCSPPCorners<PPCSFloat *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTopLeft:(id _Nullable)topLeft topRight:(id _Nullable)topRight bottomRight:(id _Nullable)bottomRight bottomLeft:(id _Nullable)bottomLeft __attribute__((swift_name("init(topLeft:topRight:bottomRight:bottomLeft:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)allEqualOther:(PPCSPPFloatCorners *)other __attribute__((swift_name("allEqual(other:)")));
- (PPCSKotlinFloatArray *)getCorners __attribute__((swift_name("getCorners()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIntSize")))
@interface PPCSPPIntSize : PPCSBase
- (instancetype)initWithW:(int32_t)w h:(int32_t)h __attribute__((swift_name("init(w:h:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t h __attribute__((swift_name("h")));
@property int32_t w __attribute__((swift_name("w")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPoint")))
@interface PPCSPPPoint : PPCSBase
- (instancetype)initWithSrc:(PPCSPPPoint *)src __attribute__((swift_name("init(src:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPPointCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyFromOther:(PPCSPPPoint *)other __attribute__((swift_name("doCopyFrom(other:)")));
- (void)setX:(id)x y:(id)y __attribute__((swift_name("set(x:y:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPoint.Companion")))
@interface PPCSPPPointCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPPointCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPRepeatDef")))
@interface PPCSPPRepeatDef : PPCSBase
- (instancetype)initWithIsInfinite:(BOOL)isInfinite repeatCount:(PPCSPPExpr *)repeatCount interval:(PPCSPPExpr *)interval __attribute__((swift_name("init(isInfinite:repeatCount:interval:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCSPPExpr *interval __attribute__((swift_name("interval")));
@property (readonly) BOOL isInfinite __attribute__((swift_name("isInfinite")));
@property (readonly) PPCSPPExpr *repeatCount __attribute__((swift_name("repeatCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSize")))
@interface PPCSPPSize : PPCSBase
- (instancetype)initWithSrc:(PPCSPPSize *)src __attribute__((swift_name("init(src:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithW:(float)w h:(float)h __attribute__((swift_name("init(w:h:)"))) __attribute__((objc_designated_initializer));
- (void)setW:(id)w h:(id)h __attribute__((swift_name("set(w:h:)")));
- (void)swap __attribute__((swift_name("swap()")));
@property (readonly) float aspectRatio __attribute__((swift_name("aspectRatio")));
@property float h __attribute__((swift_name("h")));
@property float w __attribute__((swift_name("w")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormulaUtils")))
@interface PPCSFormulaUtils : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)formulaUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSFormulaUtils *shared __attribute__((swift_name("shared")));
- (int64_t)evalAsTimeFormula:(PPCSPPExpr *)formula defaultValue:(int64_t)defaultValue __attribute__((swift_name("evalAsTime(formula:defaultValue:)")));
- (PPCSPPExpr *)numberConstantValue:(float)value __attribute__((swift_name("numberConstant(value:)")));
@property (readonly) PPCSPPNumberConstantExpr *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface PPCSLogger : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSLogger *shared __attribute__((swift_name("shared")));
- (void)aMessage:(NSString *)message throwable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("a(message:throwable:tag:)")));
- (void)aThrowable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("a(throwable:tag:message:)")));
- (void)dMessage:(NSString *)message throwable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("d(message:throwable:tag:)")));
- (void)dThrowable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("d(throwable:tag:message:)")));
- (void)eMessage:(NSString *)message throwable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("e(message:throwable:tag:)")));
- (void)eThrowable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("e(throwable:tag:message:)")));
- (void)iMessage:(NSString *)message throwable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("i(message:throwable:tag:)")));
- (void)iThrowable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("i(throwable:tag:message:)")));
- (void)logPriority:(PPCSLogLevel *)priority tag:(NSString * _Nullable)tag throwable:(PPCSKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("log(priority:tag:throwable:message:)")));
- (void)setLogLevelLogLevel:(int32_t)logLevel __attribute__((swift_name("setLogLevel(logLevel:)")));
- (void)vMessage:(NSString *)message throwable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("v(message:throwable:tag:)")));
- (void)vThrowable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("v(throwable:tag:message:)")));
- (void)wMessage:(NSString *)message throwable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("w(message:throwable:tag:)")));
- (void)wThrowable:(PPCSKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("w(throwable:tag:message:)")));
@property (readonly) PPCSPlatform *platform __attribute__((swift_name("platform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPJsonImpl")))
@interface PPCSPPJsonImpl : PPCSBase <PPCSPPJson>
- (instancetype)initWithJson:(PPCSKotlinx_serialization_jsonJsonElement *)json __attribute__((swift_name("init(json:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, PPCSKotlinx_serialization_jsonJsonElement *> *)getJsonObject __attribute__((swift_name("getJsonObject()")));
- (BOOL)hasKey:(NSString *)key __attribute__((swift_name("has(key:)")));
- (NSSet<NSString *> *)keySet __attribute__((swift_name("keySet()")));
- (id _Nullable)optKey:(NSString *)key __attribute__((swift_name("opt(key:)")));
- (id<PPCSPPJson> _Nullable)optObjectKey:(NSString *)key __attribute__((swift_name("optObject(key:)")));
- (NSArray<id<PPCSPPJson>> * _Nullable)optObjectArrayKey:(NSString *)key __attribute__((swift_name("optObjectArray(key:)")));
- (NSString * _Nullable)optStringKey:(NSString *)key __attribute__((swift_name("optString(key:)")));
- (NSArray<NSString *> * _Nullable)optStringArrayKey:(NSString *)key __attribute__((swift_name("optStringArray(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putNumberKey:(NSString *)key value:(id)value __attribute__((swift_name("putNumber(key:value:)")));
- (void)putObjectArrayKey:(NSString *)key value:(NSArray<id<PPCSPPJson>> *)value __attribute__((swift_name("putObjectArray(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCSKotlinx_serialization_jsonJsonElement *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPKotlinGC")))
@interface PPCSPPKotlinGC : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pPKotlinGC __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPKotlinGC *shared __attribute__((swift_name("shared")));
- (void)collect __attribute__((swift_name("collect()")));
@end

__attribute__((swift_name("PPObservableValueProvider")))
@protocol PPCSPPObservableValueProvider <PPCSPPValueProvider>
@required
@property (readonly) PPCSPPIdentifiableChangeObservable *observable __attribute__((swift_name("observable")));
@end

__attribute__((swift_name("PPVar")))
@interface PPCSPPVar<T> : PPCSBase <PPCSPPObservableValueProvider>
- (instancetype)initWithNamespace:(NSString *)namespace_ name:(NSString *)name type:(PPCSPPDataType *)type isGlobal:(BOOL)isGlobal formula:(NSString * _Nullable)formula linkSceneId:(NSString * _Nullable)linkSceneId linkVarName:(NSString * _Nullable)linkVarName __attribute__((swift_name("init(namespace:name:type:isGlobal:formula:linkSceneId:linkVarName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCSPPVarCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getLayerId __attribute__((swift_name("getLayerId()")));
- (PPCSPPVar<T> *)getLinkedVarSceneId:(NSString *)sceneId namespace:(NSString *)namespace_ name:(NSString *)name __attribute__((swift_name("getLinkedVar(sceneId:namespace:name:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)syncFromOther:(PPCSPPVar<id> *)other __attribute__((swift_name("syncFrom(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCSPPChangeObserversHolder *changeObservers __attribute__((swift_name("changeObservers")));
@property (readonly) NSString * _Nullable formula __attribute__((swift_name("formula")));
@property (readonly) BOOL isGlobal __attribute__((swift_name("isGlobal")));
@property (readonly) BOOL isLink __attribute__((swift_name("isLink")));
@property BOOL isVisible __attribute__((swift_name("isVisible")));
@property (readonly) BOOL isWritable __attribute__((swift_name("isWritable")));
@property (readonly) NSString * _Nullable linkSceneId __attribute__((swift_name("linkSceneId")));
@property (readonly) NSString * _Nullable linkVarName __attribute__((swift_name("linkVarName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) PPCSPPIdentifiableChangeObservable *observable __attribute__((swift_name("observable")));
@property (readonly) PPCSPPDataType *type __attribute__((swift_name("type")));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVarCompanion")))
@interface PPCSPPVarCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPVarCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)isVariableLayerIdLayerId:(NSString *)layerId __attribute__((swift_name("isVariableLayerId(layerId:)")));
@end

__attribute__((swift_name("PPChangeObserver")))
@protocol PPCSPPChangeObserver
@required
- (void)onChangeDetected __attribute__((swift_name("onChangeDetected()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPChangeObserversHolder")))
@interface PPCSPPChangeObserversHolder : PPCSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addObserver:(id<PPCSPPChangeObserver>)observer __attribute__((swift_name("add(observer:)")));
- (void)notifyChange __attribute__((swift_name("notifyChange()")));
- (void)removeObserver:(id<PPCSPPChangeObserver>)observer __attribute__((swift_name("remove(observer:)")));
- (void)removeAll __attribute__((swift_name("removeAll()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIdentifiableChangeObservable")))
@interface PPCSPPIdentifiableChangeObservable : PPCSBase
- (instancetype)initWithId:(NSString *)id changeObservers:(PPCSPPChangeObserversHolder *)changeObservers __attribute__((swift_name("init(id:changeObservers:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCSPPChangeObserversHolder *changeObservers __attribute__((swift_name("changeObservers")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((swift_name("BridgeResponse")))
@interface PPCSBridgeResponse : PPCSBase
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCSBridgeResponseResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResponse.Error")))
@interface PPCSBridgeResponseError : PPCSBridgeResponse
- (instancetype)initWithRequestId:(NSString *)requestId action:(NSString *)action message:(NSString *)message code:(NSString * _Nullable)code __attribute__((swift_name("init(requestId:action:message:code:)"))) __attribute__((objc_designated_initializer));
- (PPCSBridgeResponseError *)doCopyRequestId:(NSString *)requestId action:(NSString *)action message:(NSString *)message code:(NSString * _Nullable)code __attribute__((swift_name("doCopy(requestId:action:message:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCSBridgeResponseResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResponse.ResponseStatus")))
@interface PPCSBridgeResponseResponseStatus : PPCSKotlinEnum<PPCSBridgeResponseResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCSBridgeResponseResponseStatus *success __attribute__((swift_name("success")));
@property (class, readonly) PPCSBridgeResponseResponseStatus *error __attribute__((swift_name("error")));
+ (PPCSKotlinArray<PPCSBridgeResponseResponseStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCSBridgeResponseResponseStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResponse.Success")))
@interface PPCSBridgeResponseSuccess : PPCSBridgeResponse
- (instancetype)initWithRequestId:(NSString *)requestId action:(NSString *)action data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("init(requestId:action:data:)"))) __attribute__((objc_designated_initializer));
- (PPCSBridgeResponseSuccess *)doCopyRequestId:(NSString *)requestId action:(NSString *)action data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("doCopy(requestId:action:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCSBridgeResponseResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("PPBridge")))
@protocol PPCSPPBridge
@required
- (BOOL)isAvailable __attribute__((swift_name("isAvailable()")));
- (void)sendAction:(NSString *)action data:(id _Nullable)data callback:(void (^ _Nullable)(id _Nullable))callback __attribute__((swift_name("send(action:data:callback:)")));
- (void)sendRequestRequest:(PPCSBridgeRequest *)request callback:(void (^ _Nullable)(PPCSBridgeResponse *))callback __attribute__((swift_name("sendRequest(request:callback:)")));
- (void)setMessageHandlerHandler:(id _Nullable (^)(NSString *, id _Nullable))handler __attribute__((swift_name("setMessageHandler(handler:)")));
- (void)setRequestHandlerHandler:(PPCSBridgeResponse *(^)(PPCSBridgeRequest *))handler __attribute__((swift_name("setRequestHandler(handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBridgeCompanion")))
@interface PPCSPPBridgeCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSPPBridgeCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSPPBridge>)getInstance __attribute__((swift_name("getInstance()")));
@end

__attribute__((swift_name("BridgeRequest")))
@interface PPCSBridgeRequest : PPCSBase
@property (class, readonly, getter=companion) PPCSBridgeRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeRequest.Companion")))
@interface PPCSBridgeRequestCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSBridgeRequestCompanion *shared __attribute__((swift_name("shared")));
- (PPCSBridgeRequest * _Nullable)fromMapData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("fromMap(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSensorControlRequest")))
@interface PPCSSoundSensorControlRequest : PPCSBridgeRequest
- (instancetype)initWithRequestId:(NSString *)requestId sensorType:(PPCSSoundSensorType *)sensorType __attribute__((swift_name("init(requestId:sensorType:)"))) __attribute__((objc_designated_initializer));
- (PPCSSoundSensorControlRequest *)doCopyRequestId:(NSString *)requestId sensorType:(PPCSSoundSensorType *)sensorType __attribute__((swift_name("doCopy(requestId:sensorType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCSSoundSensorType *sensorType __attribute__((swift_name("sensorType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSensorValueRequest")))
@interface PPCSSoundSensorValueRequest : PPCSBridgeRequest
- (instancetype)initWithRequestId:(NSString *)requestId value:(float)value __attribute__((swift_name("init(requestId:value:)"))) __attribute__((objc_designated_initializer));
- (PPCSSoundSensorValueRequest *)doCopyRequestId:(NSString *)requestId value:(float)value __attribute__((swift_name("doCopy(requestId:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VibrationRequest")))
@interface PPCSVibrationRequest : PPCSBridgeRequest
- (instancetype)initWithRequestId:(NSString *)requestId iOSVibrateType:(PPCSPPIosVibrateType *)iOSVibrateType androidVibrateType:(PPCSPPAndroidVibrateType *)androidVibrateType __attribute__((swift_name("init(requestId:iOSVibrateType:androidVibrateType:)"))) __attribute__((objc_designated_initializer));
- (PPCSVibrationRequest *)doCopyRequestId:(NSString *)requestId iOSVibrateType:(PPCSPPIosVibrateType *)iOSVibrateType androidVibrateType:(PPCSPPAndroidVibrateType *)androidVibrateType __attribute__((swift_name("doCopy(requestId:iOSVibrateType:androidVibrateType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) PPCSPPAndroidVibrateType *androidVibrateType __attribute__((swift_name("androidVibrateType")));
@property (readonly) PPCSPPIosVibrateType *iOSVibrateType __attribute__((swift_name("iOSVibrateType")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PPCSKotlinArray<T> : PPCSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PPCSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PPCSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface PPCSKotlinArray (Extensions)
- (NSArray<PPCSKotlinx_serialization_jsonJsonElement *> *)toJsonArray __attribute__((swift_name("toJsonArray()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonUtilsKt")))
@interface PPCSJsonUtilsKt : PPCSBase
+ (BOOL)isListOfTypeList:(NSArray<id> *)list __attribute__((swift_name("isListOfType(list:)")));
+ (NSArray<PPCSKotlinx_serialization_jsonJsonElement *> *)toJsonArray:(NSArray<id> *)receiver __attribute__((swift_name("toJsonArray(_:)")));
+ (PPCSKotlinx_serialization_jsonJsonElement *)toJsonElement:(id _Nullable)receiver __attribute__((swift_name("toJsonElement(_:)")));
+ (NSDictionary<NSString *, PPCSKotlinx_serialization_jsonJsonElement *> *)toJsonObject:(NSDictionary<id, id> *)receiver __attribute__((swift_name("toJsonObject(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBridgeKt")))
@interface PPCSPPBridgeKt : PPCSBase
+ (id<PPCSPPBridge>)getPlatformBridge __attribute__((swift_name("getPlatformBridge()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPClockKt")))
@interface PPCSPPClockKt : PPCSBase
+ (NSString *)getCurrentLocalTime __attribute__((swift_name("getCurrentLocalTime()")));
+ (int64_t)getCurrentTimeMillis __attribute__((swift_name("getCurrentTimeMillis()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PPCSKotlinEnumCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface PPCSKotlinx_serialization_jsonJsonElement : PPCSBase
@property (class, readonly, getter=companion) PPCSKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PPCSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PPCSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PPCSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PPCSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PPCSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PPCSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PPCSKotlinx_serialization_coreKSerializer <PPCSKotlinx_serialization_coreSerializationStrategy, PPCSKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface PPCSKotlinFloatArray : PPCSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PPCSFloat *(^)(PPCSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PPCSKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PPCSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface PPCSKotlinx_serialization_jsonJsonElementCompanion : PPCSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCSKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PPCSKotlinx_serialization_coreEncoder
@required
- (id<PPCSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PPCSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PPCSKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<PPCSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PPCSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PPCSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PPCSKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PPCSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<PPCSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) PPCSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PPCSKotlinx_serialization_coreDecoder
@required
- (id<PPCSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PPCSKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (PPCSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PPCSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PPCSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PPCSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface PPCSKotlinFloatIterator : PPCSBase <PPCSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PPCSFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PPCSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PPCSKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PPCSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PPCSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PPCSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PPCSKotlinx_serialization_coreSerializersModule : PPCSBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PPCSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PPCSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PPCSKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PPCSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PPCSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PPCSKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PPCSKotlinx_serialization_coreSerialKind : PPCSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PPCSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PPCSKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PPCSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PPCSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PPCSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PPCSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PPCSKotlinNothing : PPCSBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PPCSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PPCSKotlinKClass>)kClass provider:(id<PPCSKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PPCSKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PPCSKotlinKClass>)kClass serializer:(id<PPCSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PPCSKotlinKClass>)baseClass actualClass:(id<PPCSKotlinKClass>)actualClass actualSerializer:(id<PPCSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PPCSKotlinKClass>)baseClass defaultDeserializerProvider:(id<PPCSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PPCSKotlinKClass>)baseClass defaultDeserializerProvider:(id<PPCSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PPCSKotlinKClass>)baseClass defaultSerializerProvider:(id<PPCSKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PPCSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PPCSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PPCSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PPCSKotlinKClass <PPCSKotlinKDeclarationContainer, PPCSKotlinKAnnotatedElement, PPCSKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
