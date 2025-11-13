#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PPCAbstractMediaLayer, PPCAbstractTextLayer, PPCBridgeRequest, PPCBridgeRequestCompanion, PPCBridgeResponse, PPCBridgeResponseError, PPCBridgeResponseResponseStatus, PPCBridgeResponseSuccess, PPCCommon, PPCDeviceDesc, PPCDeviceDescCompanion, PPCDeviceFrameHelper, PPCDevicePreset, PPCFormulaUtils, PPCKotlinArray<T>, PPCKotlinEnum<E>, PPCKotlinEnumCompanion, PPCKotlinException, PPCKotlinFloatArray, PPCKotlinFloatIterator, PPCKotlinNothing, PPCKotlinThrowable, PPCKotlinx_serialization_coreSerialKind, PPCKotlinx_serialization_coreSerializersModule, PPCKotlinx_serialization_jsonJsonElement, PPCKotlinx_serialization_jsonJsonElementCompanion, PPCLanguageDefaults, PPCLogLevel, PPCLogger, PPCMediaState, PPCMediaStateCompanion, PPCPPAndroidVibrateType, PPCPPAxis3D, PPCPPBlurEffectStyle, PPCPPBorderPosition, PPCPPBridgeCompanion, PPCPPCameraLayerCommand, PPCPPCameraPosition, PPCPPChangeObserversHolder, PPCPPChangeTarget, PPCPPClock, PPCPPColor, PPCPPColorCompanion, PPCPPColorProperty, PPCPPContainerLayer, PPCPPCorners<T>, PPCPPDataType, PPCPPDeviceFrameType, PPCPPDeviceInfo, PPCPPDeviceInfoCompanion, PPCPPEventChannel<T>, PPCPPExpr, PPCPPExprEvalError, PPCPPExprEvalErrorCompanion, PPCPPExprParseError, PPCPPExprParseErrorCompanion, PPCPPFillScaleMode, PPCPPFixedSceneChangeEventCompanion, PPCPPFloatCorners, PPCPPFloatProperty, PPCPPFont, PPCPPHitArea, PPCPPHorizontalAlign, PPCPPIdentifiableChangeObservable, PPCPPInputFocusEventCompanion, PPCPPIosEffectEventCompanion, PPCPPIosVibrateType, PPCPPKeyCode, PPCPPKeyCodeCompanion, PPCPPKotlinGC, PPCPPLayer, PPCPPLayerAlias, PPCPPLayerCompanion, PPCPPLayerLayoutBBox, PPCPPLayerProperty, PPCPPLayerType, PPCPPLayerViewSplitterCompanion, PPCPPLayerViewSplitterGroup, PPCPPLineCap, PPCPPLineJoin, PPCPPMediaCommand, PPCPPMediaCommandCompanion, PPCPPMediaCommandEventCompanion, PPCPPMessage, PPCPPMessageBus, PPCPPMessageCompanion, PPCPPMsg, PPCPPMsgChannel, PPCPPMsgChannelCompanion, PPCPPMsgCompanion, PPCPPNumberConstantExpr, PPCPPPathSegmentData, PPCPPPathSegmentType, PPCPPPieContext, PPCPPPieModel, PPCPPPieModelCompanion, PPCPPPiePlayerEvent, PPCPPPiePlayerEventTextInputFocusedIn, PPCPPPiePlayerEventTextInputFocusedOut, PPCPPPieRecord, PPCPPPlatformType, PPCPPPlayControlGestureOptions, PPCPPPlayEvent, PPCPPPlayEventCompanion, PPCPPPoint, PPCPPPointCompanion, PPCPPProperty<T>, PPCPPRenderEvent, PPCPPRenderEventCompanion, PPCPPReorderEventCompanion, PPCPPRepeatDef, PPCPPScene, PPCPPSceneChangeArgs, PPCPPSceneChangeEvent, PPCPPSceneChangeEventCompanion, PPCPPSensor, PPCPPSensorControlType, PPCPPShapeLayer, PPCPPSize, PPCPPSpeechGender, PPCPPStringProperty, PPCPPTextAttributes, PPCPPTextAttributesCompanion, PPCPPTextInputLayer, PPCPPTextInputLayerKeyboardLook, PPCPPTextInputLayerKeyboardType, PPCPPTextInputLayerReturnKeyType, PPCPPTextLayerSizeMode, PPCPPTouchEvent, PPCPPTouchEventAction, PPCPPValueHistory<T>, PPCPPValueHistoryCompanion, PPCPPVar<T>, PPCPPVarCompanion, PPCPPVectorShape, PPCPPVectorShapeType, PPCPPVerticalAlign, PPCPlatform, PPCProfileOptions, PPCReplayData, PPCReplayDataCompanion, PPCReplayDataSerializer, PPCReplayDataVersionCompanion, PPCReplayOptions, PPCReplayer, PPCScreenInfo, PPCSoundSensorControlRequest, PPCSoundSensorValueRequest, PPCTTSRequest, PPCVibrationRequest;

@protocol PPCFormulaObserver, PPCKotlinAnnotation, PPCKotlinComparable, PPCKotlinIterator, PPCKotlinKAnnotatedElement, PPCKotlinKClass, PPCKotlinKClassifier, PPCKotlinKDeclarationContainer, PPCKotlinx_serialization_coreCompositeDecoder, PPCKotlinx_serialization_coreCompositeEncoder, PPCKotlinx_serialization_coreDecoder, PPCKotlinx_serialization_coreDeserializationStrategy, PPCKotlinx_serialization_coreEncoder, PPCKotlinx_serialization_coreKSerializer, PPCKotlinx_serialization_coreSerialDescriptor, PPCKotlinx_serialization_coreSerializationStrategy, PPCKotlinx_serialization_coreSerializersModuleCollector, PPCPPBridge, PPCPPChangeObserver, PPCPPClockObserver, PPCPPEngineObserver, PPCPPEventChannelHandler, PPCPPExprLayer, PPCPPJson, PPCPPLayerObserver, PPCPPMessageBusTaskRunner, PPCPPObservableValueProvider, PPCPPPieDecorator, PPCPPPropertyObserver, PPCPPSensorListener, PPCPPSensorManager, PPCPPSpeechInterface, PPCPPSpeechInterfaceListener, PPCPPTextInputLayerFocusRequestListener, PPCPPTextInputLayerFocusStateListener, PPCPPValueProvider, PPCPPVoiceInterface, PPCPPVoiceInterfaceListener, PPCPlayerDelegate, PPCReplayerDelegate;

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
@interface PPCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PPCBase (PPCBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PPCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PPCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPPCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PPCNumber : NSNumber
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
@interface PPCByte : PPCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PPCUByte : PPCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PPCShort : PPCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PPCUShort : PPCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PPCInt : PPCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PPCUInt : PPCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PPCLong : PPCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PPCULong : PPCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PPCFloat : PPCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PPCDouble : PPCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PPCBoolean : PPCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Common")))
@interface PPCCommon : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)common __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCCommon *shared __attribute__((swift_name("shared")));
- (void)debugMessage:(NSString *)message __attribute__((swift_name("debug(message:)")));
- (NSString *)getDeviceInfo __attribute__((swift_name("getDeviceInfo()")));
- (NSString *)getEngineVersion __attribute__((swift_name("getEngineVersion()")));
- (NSString *)getProfileData __attribute__((swift_name("getProfileData()")));
- (NSString * _Nullable)getQrScannerLicenseApplicationId:(NSString *)applicationId __attribute__((swift_name("getQrScannerLicense(applicationId:)")));
- (void)markTrigger __attribute__((swift_name("markTrigger()")));
- (void)setProfileOptionsOptions:(PPCProfileOptions *)options __attribute__((swift_name("setProfileOptions(options:)")));
- (void)traceMessage:(NSString *)message __attribute__((swift_name("trace(message:)")));
@property (readonly) BOOL ENABLE_DEBUG __attribute__((swift_name("ENABLE_DEBUG")));
@property (readonly) BOOL ENABLE_PROFILE __attribute__((swift_name("ENABLE_PROFILE")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PPCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PPCKotlinEnum<E> : PPCBase <PPCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogLevel")))
@interface PPCLogLevel : PPCKotlinEnum<PPCLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCLogLevel *none __attribute__((swift_name("none")));
@property (class, readonly) PPCLogLevel *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) PPCLogLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) PPCLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PPCLogLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) PPCLogLevel *error __attribute__((swift_name("error")));
@property (class, readonly) PPCLogLevel *assert __attribute__((swift_name("assert")));
+ (PPCKotlinArray<PPCLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCLogLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface PPCPlatform : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)logPriority:(PPCLogLevel *)priority tag:(NSString * _Nullable)tag throwable:(PPCKotlinThrowable * _Nullable)throwable message:(NSString * _Nullable)message __attribute__((swift_name("log(priority:tag:throwable:message:)")));
- (void)logSystemInfo __attribute__((swift_name("logSystemInfo()")));
- (id<PPCPPJson>)parseJsonStr:(NSString *)str __attribute__((swift_name("parseJson(str:)")));
- (void)setDateFormatterStringFormatter:(NSString *)formatter __attribute__((swift_name("setDateFormatterString(formatter:)")));
- (void)setTagLevel:(PPCLogLevel *)level tag:(NSString *)tag __attribute__((swift_name("setTag(level:tag:)")));
- (NSString *)toJsonStringStr:(NSString *)str __attribute__((swift_name("toJsonString(str:)")));
@property (readonly) NSString *cpuType __attribute__((swift_name("cpuType")));
@property BOOL crashAssert __attribute__((swift_name("crashAssert")));
@property (readonly) NSString *deviceModel __attribute__((swift_name("deviceModel")));
@property (readonly) NSString *osName __attribute__((swift_name("osName")));
@property (readonly) NSString *osVersion __attribute__((swift_name("osVersion")));
@property (readonly) PPCScreenInfo * _Nullable screen __attribute__((swift_name("screen")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenInfo")))
@interface PPCScreenInfo : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PPCKotlinThrowable : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PPCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PPCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PPCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PPCKotlinException : PPCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PPCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PPCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPModelException")))
@interface PPCPPModelException : PPCKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PPCKotlinThrowable *)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message cause:(PPCKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LanguageDefaults")))
@interface PPCLanguageDefaults : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)languageDefaults __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCLanguageDefaults *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEFAULT_LANGUAGE __attribute__((swift_name("DEFAULT_LANGUAGE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPAndroidVibrateType")))
@interface PPCPPAndroidVibrateType : PPCKotlinEnum<PPCPPAndroidVibrateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPAndroidVibrateType *normal __attribute__((swift_name("normal")));
@property (class, readonly) PPCPPAndroidVibrateType *keyboardPress __attribute__((swift_name("keyboardPress")));
@property (class, readonly) PPCPPAndroidVibrateType *keyboardTap __attribute__((swift_name("keyboardTap")));
@property (class, readonly) PPCPPAndroidVibrateType *longPress __attribute__((swift_name("longPress")));
@property (class, readonly) PPCPPAndroidVibrateType *virtualKey __attribute__((swift_name("virtualKey")));
@property (class, readonly) PPCPPAndroidVibrateType *none __attribute__((swift_name("none")));
+ (PPCKotlinArray<PPCPPAndroidVibrateType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPAndroidVibrateType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPAxis3D")))
@interface PPCPPAxis3D : PPCKotlinEnum<PPCPPAxis3D *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPAxis3D *x __attribute__((swift_name("x")));
@property (class, readonly) PPCPPAxis3D *y __attribute__((swift_name("y")));
@property (class, readonly) PPCPPAxis3D *z __attribute__((swift_name("z")));
+ (PPCKotlinArray<PPCPPAxis3D *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPAxis3D *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBlurEffectStyle")))
@interface PPCPPBlurEffectStyle : PPCKotlinEnum<PPCPPBlurEffectStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPBlurEffectStyle *none __attribute__((swift_name("none")));
@property (class, readonly) PPCPPBlurEffectStyle *light __attribute__((swift_name("light")));
@property (class, readonly) PPCPPBlurEffectStyle *dark __attribute__((swift_name("dark")));
@property (class, readonly) PPCPPBlurEffectStyle *extraLight __attribute__((swift_name("extraLight")));
@property (class, readonly) PPCPPBlurEffectStyle *materialLight __attribute__((swift_name("materialLight")));
@property (class, readonly) PPCPPBlurEffectStyle *thinMaterialLight __attribute__((swift_name("thinMaterialLight")));
@property (class, readonly) PPCPPBlurEffectStyle *ultrathinMaterialLight __attribute__((swift_name("ultrathinMaterialLight")));
@property (class, readonly) PPCPPBlurEffectStyle *thickMaterialLight __attribute__((swift_name("thickMaterialLight")));
@property (class, readonly) PPCPPBlurEffectStyle *chromeMaterialLight __attribute__((swift_name("chromeMaterialLight")));
@property (class, readonly) PPCPPBlurEffectStyle *materialDark __attribute__((swift_name("materialDark")));
@property (class, readonly) PPCPPBlurEffectStyle *thinMaterialDark __attribute__((swift_name("thinMaterialDark")));
@property (class, readonly) PPCPPBlurEffectStyle *ultrathinMaterialDark __attribute__((swift_name("ultrathinMaterialDark")));
@property (class, readonly) PPCPPBlurEffectStyle *thickMaterialDark __attribute__((swift_name("thickMaterialDark")));
@property (class, readonly) PPCPPBlurEffectStyle *chromeMaterialDark __attribute__((swift_name("chromeMaterialDark")));
+ (PPCKotlinArray<PPCPPBlurEffectStyle *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPBlurEffectStyle *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBorderPosition")))
@interface PPCPPBorderPosition : PPCKotlinEnum<PPCPPBorderPosition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPBorderPosition *inside __attribute__((swift_name("inside")));
@property (class, readonly) PPCPPBorderPosition *center __attribute__((swift_name("center")));
@property (class, readonly) PPCPPBorderPosition *outside __attribute__((swift_name("outside")));
+ (PPCKotlinArray<PPCPPBorderPosition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPBorderPosition *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraPosition")))
@interface PPCPPCameraPosition : PPCKotlinEnum<PPCPPCameraPosition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPCameraPosition *back __attribute__((swift_name("back")));
@property (class, readonly) PPCPPCameraPosition *front __attribute__((swift_name("front")));
+ (PPCKotlinArray<PPCPPCameraPosition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPCameraPosition *> *entries __attribute__((swift_name("entries")));
- (PPCPPCameraPosition *)toggle __attribute__((swift_name("toggle()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDeviceFrameType")))
@interface PPCPPDeviceFrameType : PPCKotlinEnum<PPCPPDeviceFrameType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPDeviceFrameType *none __attribute__((swift_name("none")));
@property (class, readonly) PPCPPDeviceFrameType *iphoneX __attribute__((swift_name("iphoneX")));
@property (class, readonly) PPCPPDeviceFrameType *iphoneXr __attribute__((swift_name("iphoneXr")));
@property (class, readonly) PPCPPDeviceFrameType *iphoneXsMax __attribute__((swift_name("iphoneXsMax")));
@property (class, readonly) PPCPPDeviceFrameType *iphone11 __attribute__((swift_name("iphone11")));
@property (class, readonly) PPCPPDeviceFrameType *iphone11Pro __attribute__((swift_name("iphone11Pro")));
@property (class, readonly) PPCPPDeviceFrameType *iphone11ProMax __attribute__((swift_name("iphone11ProMax")));
@property (class, readonly) PPCPPDeviceFrameType *iphone12Mini __attribute__((swift_name("iphone12Mini")));
@property (class, readonly) PPCPPDeviceFrameType *iphone12Pro __attribute__((swift_name("iphone12Pro")));
@property (class, readonly) PPCPPDeviceFrameType *iphone12ProMax __attribute__((swift_name("iphone12ProMax")));
@property (class, readonly) PPCPPDeviceFrameType *iphone13mini __attribute__((swift_name("iphone13mini")));
@property (class, readonly) PPCPPDeviceFrameType *iphone13pro __attribute__((swift_name("iphone13pro")));
@property (class, readonly) PPCPPDeviceFrameType *iphone13promax __attribute__((swift_name("iphone13promax")));
@property (class, readonly) PPCPPDeviceFrameType *iphone14 __attribute__((swift_name("iphone14")));
@property (class, readonly) PPCPPDeviceFrameType *iphone14plus __attribute__((swift_name("iphone14plus")));
@property (class, readonly) PPCPPDeviceFrameType *iphone14pro __attribute__((swift_name("iphone14pro")));
@property (class, readonly) PPCPPDeviceFrameType *iphone14promax __attribute__((swift_name("iphone14promax")));
@property (class, readonly) PPCPPDeviceFrameType *iphone15 __attribute__((swift_name("iphone15")));
@property (class, readonly) PPCPPDeviceFrameType *iphone15plus __attribute__((swift_name("iphone15plus")));
@property (class, readonly) PPCPPDeviceFrameType *iphone15pro __attribute__((swift_name("iphone15pro")));
@property (class, readonly) PPCPPDeviceFrameType *iphone15promax __attribute__((swift_name("iphone15promax")));
@property (class, readonly) PPCPPDeviceFrameType *iphone16 __attribute__((swift_name("iphone16")));
@property (class, readonly) PPCPPDeviceFrameType *iphone16plus __attribute__((swift_name("iphone16plus")));
@property (class, readonly) PPCPPDeviceFrameType *iphone16pro __attribute__((swift_name("iphone16pro")));
@property (class, readonly) PPCPPDeviceFrameType *iphone16promax __attribute__((swift_name("iphone16promax")));
@property (class, readonly) PPCPPDeviceFrameType *galaxyS8 __attribute__((swift_name("galaxyS8")));
@property (class, readonly) PPCPPDeviceFrameType *galaxyS10 __attribute__((swift_name("galaxyS10")));
@property (class, readonly) PPCPPDeviceFrameType *galaxyS10Plus __attribute__((swift_name("galaxyS10Plus")));
@property (class, readonly) PPCPPDeviceFrameType *galaxyS20 __attribute__((swift_name("galaxyS20")));
@property (class, readonly) PPCPPDeviceFrameType *googlePixel3 __attribute__((swift_name("googlePixel3")));
@property (class, readonly) PPCPPDeviceFrameType *googlePixel4 __attribute__((swift_name("googlePixel4")));
@property (class, readonly) PPCPPDeviceFrameType *googlePixel4Xl __attribute__((swift_name("googlePixel4Xl")));
@property (class, readonly) PPCPPDeviceFrameType *googlePixel5 __attribute__((swift_name("googlePixel5")));
+ (PPCKotlinArray<PPCPPDeviceFrameType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPDeviceFrameType *> *entries __attribute__((swift_name("entries")));
- (BOOL)matchesWithDevice:(PPCPPDeviceInfo *)device __attribute__((swift_name("matchesWith(device:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFillScaleMode")))
@interface PPCPPFillScaleMode : PPCKotlinEnum<PPCPPFillScaleMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPFillScaleMode *fill __attribute__((swift_name("fill")));
@property (class, readonly) PPCPPFillScaleMode *fit __attribute__((swift_name("fit")));
@property (class, readonly) PPCPPFillScaleMode *stretch __attribute__((swift_name("stretch")));
+ (PPCKotlinArray<PPCPPFillScaleMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPFillScaleMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPHorizontalAlign")))
@interface PPCPPHorizontalAlign : PPCKotlinEnum<PPCPPHorizontalAlign *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPHorizontalAlign *left __attribute__((swift_name("left")));
@property (class, readonly) PPCPPHorizontalAlign *center __attribute__((swift_name("center")));
@property (class, readonly) PPCPPHorizontalAlign *right __attribute__((swift_name("right")));
+ (PPCKotlinArray<PPCPPHorizontalAlign *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPHorizontalAlign *> *entries __attribute__((swift_name("entries")));
@property (readonly) float autoResizeMovementFactor __attribute__((swift_name("autoResizeMovementFactor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosVibrateType")))
@interface PPCPPIosVibrateType : PPCKotlinEnum<PPCPPIosVibrateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPIosVibrateType *normal __attribute__((swift_name("normal")));
@property (class, readonly) PPCPPIosVibrateType *selectionChanged __attribute__((swift_name("selectionChanged")));
@property (class, readonly) PPCPPIosVibrateType *notificationSuccess __attribute__((swift_name("notificationSuccess")));
@property (class, readonly) PPCPPIosVibrateType *notificationWarning __attribute__((swift_name("notificationWarning")));
@property (class, readonly) PPCPPIosVibrateType *notificationError __attribute__((swift_name("notificationError")));
@property (class, readonly) PPCPPIosVibrateType *impactHeavy __attribute__((swift_name("impactHeavy")));
@property (class, readonly) PPCPPIosVibrateType *impactMedium __attribute__((swift_name("impactMedium")));
@property (class, readonly) PPCPPIosVibrateType *impactLight __attribute__((swift_name("impactLight")));
@property (class, readonly) PPCPPIosVibrateType *impactRigid __attribute__((swift_name("impactRigid")));
@property (class, readonly) PPCPPIosVibrateType *impactSoft __attribute__((swift_name("impactSoft")));
@property (class, readonly) PPCPPIosVibrateType *none __attribute__((swift_name("none")));
+ (PPCKotlinArray<PPCPPIosVibrateType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPIosVibrateType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLineCap")))
@interface PPCPPLineCap : PPCKotlinEnum<PPCPPLineCap *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPLineCap *butt __attribute__((swift_name("butt")));
@property (class, readonly) PPCPPLineCap *round __attribute__((swift_name("round")));
@property (class, readonly) PPCPPLineCap *square __attribute__((swift_name("square")));
+ (PPCKotlinArray<PPCPPLineCap *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPLineCap *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLineJoin")))
@interface PPCPPLineJoin : PPCKotlinEnum<PPCPPLineJoin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPLineJoin *miter __attribute__((swift_name("miter")));
@property (class, readonly) PPCPPLineJoin *round __attribute__((swift_name("round")));
@property (class, readonly) PPCPPLineJoin *bevel __attribute__((swift_name("bevel")));
+ (PPCKotlinArray<PPCPPLineJoin *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPLineJoin *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsgChannel")))
@interface PPCPPMsgChannel : PPCKotlinEnum<PPCPPMsgChannel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PPCPPMsgChannelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PPCPPMsgChannel *androidBroadcast __attribute__((swift_name("androidBroadcast")));
@property (class, readonly) PPCPPMsgChannel *studio __attribute__((swift_name("studio")));
@property (class, readonly) PPCPPMsgChannel *scene __attribute__((swift_name("scene")));
@property (class, readonly) PPCPPMsgChannel *current __attribute__((swift_name("current")));
@property (class, readonly) PPCPPMsgChannel *outside __attribute__((swift_name("outside")));
@property (class, readonly) PPCPPMsgChannel *component __attribute__((swift_name("component")));
+ (PPCKotlinArray<PPCPPMsgChannel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPMsgChannel *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsgChannel.Companion")))
@interface PPCPPMsgChannelCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPMsgChannelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t ANDROID_BROADCAST_CODE __attribute__((swift_name("ANDROID_BROADCAST_CODE")));
@property (readonly) int32_t COMPONENT_CODE __attribute__((swift_name("COMPONENT_CODE")));
@property (readonly) int32_t CURRENT_CODE __attribute__((swift_name("CURRENT_CODE")));
@property (readonly) int32_t OUTSIDE_CODE __attribute__((swift_name("OUTSIDE_CODE")));
@property (readonly) int32_t SCENE_CODE __attribute__((swift_name("SCENE_CODE")));
@property (readonly) int32_t STUDIO_CODE __attribute__((swift_name("STUDIO_CODE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPathSegmentType")))
@interface PPCPPPathSegmentType : PPCKotlinEnum<PPCPPPathSegmentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPPathSegmentType *moveto __attribute__((swift_name("moveto")));
@property (class, readonly) PPCPPPathSegmentType *lineto __attribute__((swift_name("lineto")));
@property (class, readonly) PPCPPPathSegmentType *curveto __attribute__((swift_name("curveto")));
@property (class, readonly) PPCPPPathSegmentType *quadraticcurve __attribute__((swift_name("quadraticcurve")));
@property (class, readonly) PPCPPPathSegmentType *arccurve __attribute__((swift_name("arccurve")));
@property (class, readonly) PPCPPPathSegmentType *zclose __attribute__((swift_name("zclose")));
@property (class, readonly) PPCPPPathSegmentType *hlineto __attribute__((swift_name("hlineto")));
@property (class, readonly) PPCPPPathSegmentType *vlineto __attribute__((swift_name("vlineto")));
@property (class, readonly) PPCPPPathSegmentType *smoothcurve __attribute__((swift_name("smoothcurve")));
@property (class, readonly) PPCPPPathSegmentType *tquadraticcurve __attribute__((swift_name("tquadraticcurve")));
@property (class, readonly) PPCPPPathSegmentType *rmoveto __attribute__((swift_name("rmoveto")));
@property (class, readonly) PPCPPPathSegmentType *rlineto __attribute__((swift_name("rlineto")));
@property (class, readonly) PPCPPPathSegmentType *rcurveto __attribute__((swift_name("rcurveto")));
@property (class, readonly) PPCPPPathSegmentType *rquadraticcurve __attribute__((swift_name("rquadraticcurve")));
@property (class, readonly) PPCPPPathSegmentType *rarccurve __attribute__((swift_name("rarccurve")));
@property (class, readonly) PPCPPPathSegmentType *rhlineto __attribute__((swift_name("rhlineto")));
@property (class, readonly) PPCPPPathSegmentType *rvlineto __attribute__((swift_name("rvlineto")));
@property (class, readonly) PPCPPPathSegmentType *rsmoothcurve __attribute__((swift_name("rsmoothcurve")));
@property (class, readonly) PPCPPPathSegmentType *rtquadraticcurve __attribute__((swift_name("rtquadraticcurve")));
+ (PPCKotlinArray<PPCPPPathSegmentType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPPathSegmentType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlatformType")))
@interface PPCPPPlatformType : PPCKotlinEnum<PPCPPPlatformType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPPlatformType *ios __attribute__((swift_name("ios")));
@property (class, readonly) PPCPPPlatformType *android __attribute__((swift_name("android")));
@property (class, readonly) PPCPPPlatformType *desktop __attribute__((swift_name("desktop")));
+ (PPCKotlinArray<PPCPPPlatformType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPPlatformType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSensorControlType")))
@interface PPCPPSensorControlType : PPCKotlinEnum<PPCPPSensorControlType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPSensorControlType *start __attribute__((swift_name("start")));
@property (class, readonly) PPCPPSensorControlType *stop __attribute__((swift_name("stop")));
+ (PPCKotlinArray<PPCPPSensorControlType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPSensorControlType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSpeechGender")))
@interface PPCPPSpeechGender : PPCKotlinEnum<PPCPPSpeechGender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPSpeechGender *male __attribute__((swift_name("male")));
@property (class, readonly) PPCPPSpeechGender *female __attribute__((swift_name("female")));
+ (PPCKotlinArray<PPCPPSpeechGender *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPSpeechGender *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextLayerSizeMode")))
@interface PPCPPTextLayerSizeMode : PPCKotlinEnum<PPCPPTextLayerSizeMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPTextLayerSizeMode *autoWidth __attribute__((swift_name("autoWidth")));
@property (class, readonly) PPCPPTextLayerSizeMode *autoHeight __attribute__((swift_name("autoHeight")));
@property (class, readonly) PPCPPTextLayerSizeMode *autoWidthHeight __attribute__((swift_name("autoWidthHeight")));
@property (class, readonly) PPCPPTextLayerSizeMode *fixedSize __attribute__((swift_name("fixedSize")));
+ (PPCKotlinArray<PPCPPTextLayerSizeMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPTextLayerSizeMode *> *entries __attribute__((swift_name("entries")));
- (BOOL)canAutoChangeHeight __attribute__((swift_name("canAutoChangeHeight()")));
- (BOOL)canAutoChangeWidth __attribute__((swift_name("canAutoChangeWidth()")));
- (BOOL)shouldAutoResize __attribute__((swift_name("shouldAutoResize()")));
- (BOOL)shouldWrap __attribute__((swift_name("shouldWrap()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorShapeType")))
@interface PPCPPVectorShapeType : PPCKotlinEnum<PPCPPVectorShapeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPVectorShapeType *rect __attribute__((swift_name("rect")));
@property (class, readonly) PPCPPVectorShapeType *ellipse __attribute__((swift_name("ellipse")));
@property (class, readonly) PPCPPVectorShapeType *line __attribute__((swift_name("line")));
@property (class, readonly) PPCPPVectorShapeType *path __attribute__((swift_name("path")));
@property (class, readonly) PPCPPVectorShapeType *polygon __attribute__((swift_name("polygon")));
@property (class, readonly) PPCPPVectorShapeType *polyline __attribute__((swift_name("polyline")));
+ (PPCKotlinArray<PPCPPVectorShapeType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPVectorShapeType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVerticalAlign")))
@interface PPCPPVerticalAlign : PPCKotlinEnum<PPCPPVerticalAlign *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPVerticalAlign *top __attribute__((swift_name("top")));
@property (class, readonly) PPCPPVerticalAlign *middle __attribute__((swift_name("middle")));
@property (class, readonly) PPCPPVerticalAlign *bottom __attribute__((swift_name("bottom")));
+ (PPCKotlinArray<PPCPPVerticalAlign *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPVerticalAlign *> *entries __attribute__((swift_name("entries")));
@property (readonly) float autoResizeMovementFactor __attribute__((swift_name("autoResizeMovementFactor")));
@end

__attribute__((swift_name("PPEventChannel")))
@interface PPCPPEventChannel<T> : PPCBase
- (instancetype)initWithHandler:(id<PPCPPEventChannelHandler>)handler __attribute__((swift_name("init(handler:)"))) __attribute__((objc_designated_initializer));
- (void)emitEvent:(T _Nullable)event now:(int64_t)now __attribute__((swift_name("emit(event:now:)")));
@end

__attribute__((swift_name("PPEventChannelHandler")))
@protocol PPCPPEventChannelHandler
@required
- (void)handleEvent:(id _Nullable)event now:(int64_t)now __attribute__((swift_name("handle(event:now:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPKeyCode")))
@interface PPCPPKeyCode : PPCKotlinEnum<PPCPPKeyCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PPCPPKeyCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PPCPPKeyCode *back __attribute__((swift_name("back")));
@property (class, readonly) PPCPPKeyCode *volumeUp __attribute__((swift_name("volumeUp")));
@property (class, readonly) PPCPPKeyCode *volumeDown __attribute__((swift_name("volumeDown")));
@property (class, readonly) PPCPPKeyCode *a __attribute__((swift_name("a")));
@property (class, readonly) PPCPPKeyCode *b __attribute__((swift_name("b")));
@property (class, readonly) PPCPPKeyCode *c __attribute__((swift_name("c")));
@property (class, readonly) PPCPPKeyCode *d __attribute__((swift_name("d")));
@property (class, readonly) PPCPPKeyCode *e __attribute__((swift_name("e")));
@property (class, readonly) PPCPPKeyCode *f __attribute__((swift_name("f")));
@property (class, readonly) PPCPPKeyCode *g __attribute__((swift_name("g")));
@property (class, readonly) PPCPPKeyCode *h __attribute__((swift_name("h")));
@property (class, readonly) PPCPPKeyCode *i __attribute__((swift_name("i")));
@property (class, readonly) PPCPPKeyCode *j __attribute__((swift_name("j")));
@property (class, readonly) PPCPPKeyCode *k __attribute__((swift_name("k")));
@property (class, readonly) PPCPPKeyCode *l __attribute__((swift_name("l")));
@property (class, readonly) PPCPPKeyCode *m __attribute__((swift_name("m")));
@property (class, readonly) PPCPPKeyCode *n __attribute__((swift_name("n")));
@property (class, readonly) PPCPPKeyCode *o __attribute__((swift_name("o")));
@property (class, readonly) PPCPPKeyCode *p __attribute__((swift_name("p")));
@property (class, readonly) PPCPPKeyCode *q __attribute__((swift_name("q")));
@property (class, readonly) PPCPPKeyCode *r __attribute__((swift_name("r")));
@property (class, readonly) PPCPPKeyCode *s __attribute__((swift_name("s")));
@property (class, readonly) PPCPPKeyCode *t __attribute__((swift_name("t")));
@property (class, readonly) PPCPPKeyCode *u __attribute__((swift_name("u")));
@property (class, readonly) PPCPPKeyCode *v __attribute__((swift_name("v")));
@property (class, readonly) PPCPPKeyCode *w __attribute__((swift_name("w")));
@property (class, readonly) PPCPPKeyCode *x __attribute__((swift_name("x")));
@property (class, readonly) PPCPPKeyCode *y __attribute__((swift_name("y")));
@property (class, readonly) PPCPPKeyCode *z __attribute__((swift_name("z")));
@property (class, readonly) PPCPPKeyCode *n0 __attribute__((swift_name("n0")));
@property (class, readonly) PPCPPKeyCode *n1 __attribute__((swift_name("n1")));
@property (class, readonly) PPCPPKeyCode *n2 __attribute__((swift_name("n2")));
@property (class, readonly) PPCPPKeyCode *n3 __attribute__((swift_name("n3")));
@property (class, readonly) PPCPPKeyCode *n4 __attribute__((swift_name("n4")));
@property (class, readonly) PPCPPKeyCode *n5 __attribute__((swift_name("n5")));
@property (class, readonly) PPCPPKeyCode *n6 __attribute__((swift_name("n6")));
@property (class, readonly) PPCPPKeyCode *n7 __attribute__((swift_name("n7")));
@property (class, readonly) PPCPPKeyCode *n8 __attribute__((swift_name("n8")));
@property (class, readonly) PPCPPKeyCode *n9 __attribute__((swift_name("n9")));
@property (class, readonly) PPCPPKeyCode *enter __attribute__((swift_name("enter")));
@property (class, readonly) PPCPPKeyCode *space __attribute__((swift_name("space")));
@property (class, readonly) PPCPPKeyCode *tab __attribute__((swift_name("tab")));
@property (class, readonly) PPCPPKeyCode *up __attribute__((swift_name("up")));
@property (class, readonly) PPCPPKeyCode *left __attribute__((swift_name("left")));
@property (class, readonly) PPCPPKeyCode *right __attribute__((swift_name("right")));
@property (class, readonly) PPCPPKeyCode *down __attribute__((swift_name("down")));
@property (class, readonly) PPCPPKeyCode *backspace __attribute__((swift_name("backspace")));
@property (class, readonly) PPCPPKeyCode *esc __attribute__((swift_name("esc")));
+ (PPCKotlinArray<PPCPPKeyCode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPKeyCode *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *stringValue __attribute__((swift_name("stringValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPKeyCode.Companion")))
@interface PPCPPKeyCodeCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPKeyCodeCompanion *shared __attribute__((swift_name("shared")));
- (PPCPPKeyCode * _Nullable)fromStringStringValue:(NSString *)stringValue __attribute__((swift_name("fromString(stringValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsg")))
@interface PPCPPMsg : PPCBase
- (instancetype)initWithMessageId:(NSString *)messageId value:(NSString * _Nullable)value __attribute__((swift_name("init(messageId:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPMsgCompanion *companion __attribute__((swift_name("companion")));
- (void)toJSONOut:(id<PPCPPJson>)out __attribute__((swift_name("toJSON(out:)")));
@property (readonly) NSString *messageId __attribute__((swift_name("messageId")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMsg.Companion")))
@interface PPCPPMsgCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPMsgCompanion *shared __attribute__((swift_name("shared")));
- (PPCPPMsg *)fromJSONJson:(id<PPCPPJson>)json __attribute__((swift_name("fromJSON(json:)")));
@end

__attribute__((swift_name("PPPiePlayerEvent")))
@interface PPCPPPiePlayerEvent : PPCBase
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayerEvent.TextInputFocusedIn")))
@interface PPCPPPiePlayerEventTextInputFocusedIn : PPCPPPiePlayerEvent
- (instancetype)initWithLayer:(PPCPPTextInputLayer *)layer __attribute__((swift_name("init(layer:)"))) __attribute__((objc_designated_initializer));
- (PPCPPPiePlayerEventTextInputFocusedIn *)doCopyLayer:(PPCPPTextInputLayer *)layer __attribute__((swift_name("doCopy(layer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCPPTextInputLayer *layer __attribute__((swift_name("layer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayerEvent.TextInputFocusedOut")))
@interface PPCPPPiePlayerEventTextInputFocusedOut : PPCPPPiePlayerEvent
- (instancetype)initWithLayer:(PPCPPTextInputLayer *)layer __attribute__((swift_name("init(layer:)"))) __attribute__((objc_designated_initializer));
- (PPCPPPiePlayerEventTextInputFocusedOut *)doCopyLayer:(PPCPPTextInputLayer *)layer __attribute__((swift_name("doCopy(layer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCPPTextInputLayer *layer __attribute__((swift_name("layer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSensor")))
@interface PPCPPSensor : PPCKotlinEnum<PPCPPSensor *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPSensor *compass __attribute__((swift_name("compass")));
@property (class, readonly) PPCPPSensor *tiltX __attribute__((swift_name("tiltX")));
@property (class, readonly) PPCPPSensor *tiltY __attribute__((swift_name("tiltY")));
@property (class, readonly) PPCPPSensor *tiltZ __attribute__((swift_name("tiltZ")));
@property (class, readonly) PPCPPSensor *sound __attribute__((swift_name("sound")));
@property (class, readonly) PPCPPSensor *proximity __attribute__((swift_name("proximity")));
@property (class, readonly) PPCPPSensor *light __attribute__((swift_name("light")));
@property (class, readonly) PPCPPSensor *rotary __attribute__((swift_name("rotary")));
+ (PPCKotlinArray<PPCPPSensor *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPSensor *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPSensorListener")))
@protocol PPCPPSensorListener
@required
- (void)onSensorValueSensor:(PPCPPSensor *)sensor value:(float)value __attribute__((swift_name("onSensorValue(sensor:value:)")));
@end

__attribute__((swift_name("PPSensorManager")))
@protocol PPCPPSensorManager
@required
- (void)disableSensors __attribute__((swift_name("disableSensors()")));
- (void)enableSensorsSensors:(NSSet<PPCPPSensor *> *)sensors listener:(id<PPCPPSensorListener>)listener __attribute__((swift_name("enableSensors(sensors:listener:)")));
@end

__attribute__((swift_name("PPSpeechInterface")))
@protocol PPCPPSpeechInterface
@required
- (void)setListenerListener:(id<PPCPPSpeechInterfaceListener> _Nullable)listener __attribute__((swift_name("setListener(listener:)")));
- (void)startSpeechText:(NSString *)text language:(NSString *)language gender:(PPCPPSpeechGender *)gender pitch:(float)pitch speed:(float)speed __attribute__((swift_name("startSpeech(text:language:gender:pitch:speed:)")));
- (void)stopSpeech __attribute__((swift_name("stopSpeech()")));
@end

__attribute__((swift_name("PPSpeechInterfaceListener")))
@protocol PPCPPSpeechInterfaceListener
@required
- (void)onEnd __attribute__((swift_name("onEnd()")));
@end

__attribute__((swift_name("PPTouchEvent")))
@interface PPCPPTouchEvent : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addMovementPointerId:(int32_t)pointerId x:(float)x y:(float)y time:(int64_t)time force:(float)force __attribute__((swift_name("addMovement(pointerId:x:y:time:force:)")));
- (void)addPointerPointerId:(int32_t)pointerId x:(float)x y:(float)y time:(int64_t)time force:(float)force __attribute__((swift_name("addPointer(pointerId:x:y:time:force:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (void)enableSpanTracking __attribute__((swift_name("enableSpanTracking()")));
- (PPCPPPoint * _Nullable)getPointerPointerId:(int32_t)pointerId __attribute__((swift_name("getPointer(pointerId:)")));
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
@property (readonly) PPCPPPoint * _Nullable focus __attribute__((swift_name("focus")));
@property (readonly) float force __attribute__((swift_name("force")));
@property (readonly) PPCPPTouchEventAction * _Nullable lastAction __attribute__((swift_name("lastAction")));
@property (readonly) int64_t lastActionTime __attribute__((swift_name("lastActionTime")));
@property (readonly) int32_t pointerCount __attribute__((swift_name("pointerCount")));
@property (readonly) float span __attribute__((swift_name("span")));
@property (readonly) PPCPPPoint *velocity __attribute__((swift_name("velocity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTouchEvent.Action")))
@interface PPCPPTouchEventAction : PPCKotlinEnum<PPCPPTouchEventAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPTouchEventAction *down __attribute__((swift_name("down")));
@property (class, readonly) PPCPPTouchEventAction *up __attribute__((swift_name("up")));
@property (class, readonly) PPCPPTouchEventAction *move __attribute__((swift_name("move")));
@property (class, readonly) PPCPPTouchEventAction *cancel __attribute__((swift_name("cancel")));
+ (PPCKotlinArray<PPCPPTouchEventAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPTouchEventAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPTouchSessionListener")))
@protocol PPCPPTouchSessionListener
@required
- (void)onTouchSessionEndedNow:(int64_t)now eventConsumed:(BOOL)eventConsumed __attribute__((swift_name("onTouchSessionEnded(now:eventConsumed:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVelocityTracker")))
@interface PPCPPVelocityTracker : PPCBase
- (instancetype)initWithPoint:(PPCPPPoint *)point now:(int64_t)now T:(double)T __attribute__((swift_name("init(point:now:T:)"))) __attribute__((objc_designated_initializer));
- (PPCPPPoint *)getVelocity __attribute__((swift_name("getVelocity()")));
- (void)updatePoint:(PPCPPPoint *)point now:(int64_t)now __attribute__((swift_name("update(point:now:)")));
@end

__attribute__((swift_name("PPVoiceInterface")))
@protocol PPCPPVoiceInterface
@required
- (void)setListenerListener_:(id<PPCPPVoiceInterfaceListener> _Nullable)listener __attribute__((swift_name("setListener(listener_:)")));
- (void)startRecognitionContinuous:(BOOL)continuous language:(NSString *)language __attribute__((swift_name("startRecognition(continuous:language:)")));
- (void)stopRecognition __attribute__((swift_name("stopRecognition()")));
@end

__attribute__((swift_name("PPVoiceInterfaceListener")))
@protocol PPCPPVoiceInterfaceListener
@required
- (void)onChangeTranscript:(NSString *)transcript __attribute__((swift_name("onChange(transcript:)")));
- (void)onEndTranscript:(NSString *)transcript __attribute__((swift_name("onEnd(transcript:)")));
@end

__attribute__((swift_name("FormulaObserver")))
@protocol PPCFormulaObserver
@required
- (void)reportErrorError:(PPCPPExprEvalError *)error __attribute__((swift_name("reportError(error:)")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDataType")))
@interface PPCPPDataType : PPCKotlinEnum<PPCPPDataType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPDataType *string __attribute__((swift_name("string")));
@property (class, readonly) PPCPPDataType *number __attribute__((swift_name("number")));
@property (class, readonly) PPCPPDataType *color __attribute__((swift_name("color")));
@property (class, readonly) PPCPPDataType *layer __attribute__((swift_name("layer")));
+ (PPCKotlinArray<PPCPPDataType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPDataType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPEngineObserver")))
@protocol PPCPPEngineObserver
@required
- (void)onEvalErrorError:(PPCPPExprEvalError *)error __attribute__((swift_name("onEvalError(error:)")));
- (void)onFixedSceneChangeArgs:(PPCPPSceneChangeArgs *)args __attribute__((swift_name("onFixedSceneChange(args:)")));
- (void)onPlayEventEvent:(PPCPPPlayEvent *)event __attribute__((swift_name("onPlayEvent(event:)")));
- (void)onSceneChangeArgs:(PPCPPSceneChangeArgs *)args __attribute__((swift_name("onSceneChange(args:)")));
@end

__attribute__((swift_name("PPExpr")))
@interface PPCPPExpr : PPCBase
- (instancetype)initWithDataType:(PPCPPDataType *)dataType observer:(id<PPCFormulaObserver> _Nullable)observer __attribute__((swift_name("init(dataType:observer:)"))) __attribute__((objc_designated_initializer));
- (PPCPPColor * _Nullable)evalAsColor __attribute__((swift_name("evalAsColor()")));
- (id<PPCPPExprLayer> _Nullable)evalAsLayer __attribute__((swift_name("evalAsLayer()")));
- (PPCDouble * _Nullable)evalAsNumber __attribute__((swift_name("evalAsNumber()")));
- (NSString * _Nullable)evalAsString __attribute__((swift_name("evalAsString()")));
- (void)forEachFn:(void (^)(PPCPPExpr *))fn __attribute__((swift_name("forEach(fn:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)reportErrorError:(PPCPPExprEvalError *)error __attribute__((swift_name("reportError(error:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PPCPPColor * _Nullable)unsupportedEvalAsColor __attribute__((swift_name("unsupportedEvalAsColor()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PPCPPExprLayer> _Nullable)unsupportedEvalAsLayer __attribute__((swift_name("unsupportedEvalAsLayer()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PPCDouble * _Nullable)unsupportedEvalAsNumber __attribute__((swift_name("unsupportedEvalAsNumber()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString * _Nullable)unsupportedEvalAsString __attribute__((swift_name("unsupportedEvalAsString()")));
@property (readonly) PPCPPDataType *dataType __attribute__((swift_name("dataType")));
@property (readonly) id<PPCFormulaObserver> _Nullable observer __attribute__((swift_name("observer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprEvalError")))
@interface PPCPPExprEvalError : PPCBase
- (instancetype)initWithMessage:(NSString *)message code:(NSString *)code args:(PPCKotlinArray<NSString *> *)args __attribute__((swift_name("init(message:code:args:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPExprEvalErrorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PPCKotlinArray<NSString *> *args __attribute__((swift_name("args")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property NSString * _Nullable conditionId __attribute__((swift_name("conditionId")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property NSString * _Nullable responseId __attribute__((swift_name("responseId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprEvalError.Companion")))
@interface PPCPPExprEvalErrorCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPExprEvalErrorCompanion *shared __attribute__((swift_name("shared")));
- (PPCPPExprEvalError *)castingColorToLayer __attribute__((swift_name("castingColorToLayer()")));
- (PPCPPExprEvalError *)castingColorToNumber __attribute__((swift_name("castingColorToNumber()")));
- (PPCPPExprEvalError *)castingLayerToColor __attribute__((swift_name("castingLayerToColor()")));
- (PPCPPExprEvalError *)castingLayerToNumber __attribute__((swift_name("castingLayerToNumber()")));
- (PPCPPExprEvalError *)castingLayerToString __attribute__((swift_name("castingLayerToString()")));
- (PPCPPExprEvalError *)castingNumberToColor __attribute__((swift_name("castingNumberToColor()")));
- (PPCPPExprEvalError *)castingNumberToLayer __attribute__((swift_name("castingNumberToLayer()")));
- (PPCPPExprEvalError *)castingStringToColorValue:(NSString *)value __attribute__((swift_name("castingStringToColor(value:)")));
- (PPCPPExprEvalError *)castingStringToLayer __attribute__((swift_name("castingStringToLayer()")));
- (PPCPPExprEvalError *)castingStringToNumberValue:(NSString *)value __attribute__((swift_name("castingStringToNumber(value:)")));
- (PPCPPExprEvalError *)colorFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("colorFunctionError(functionName:)")));
- (PPCPPExprEvalError *)layerFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("layerFunctionError(functionName:)")));
- (PPCPPExprEvalError *)negateColor __attribute__((swift_name("negateColor()")));
- (PPCPPExprEvalError *)noPropertyLayerName:(NSString *)layerName propertyName:(NSString *)propertyName __attribute__((swift_name("noProperty(layerName:propertyName:)")));
- (PPCPPExprEvalError *)numberFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("numberFunctionError(functionName:)")));
- (PPCPPExprEvalError *)stringFunctionErrorFunctionName:(NSString *)functionName __attribute__((swift_name("stringFunctionError(functionName:)")));
- (PPCPPExprEvalError *)unexpected __attribute__((swift_name("unexpected()")));
@end

__attribute__((swift_name("PPExprLayer")))
@protocol PPCPPExprLayer
@required
- (PPCPPColorProperty * _Nullable)getColorPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getColorPropertyByName(propertyName:)")));
- (PPCPPFloatProperty * _Nullable)getFloatPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getFloatPropertyByName(propertyName:)")));
- (id<PPCPPObservableValueProvider> _Nullable)getObservableValueProvider __attribute__((swift_name("getObservableValueProvider()")));
- (id<PPCPPExprLayer> _Nullable)getParent __attribute__((swift_name("getParent()")));
- (PPCPPStringProperty * _Nullable)getStringPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getStringPropertyByName(propertyName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPNumberConstantExpr")))
@interface PPCPPNumberConstantExpr : PPCPPExpr
- (instancetype)initWithNumberValue:(float)numberValue observer:(id<PPCFormulaObserver> _Nullable)observer __attribute__((swift_name("init(numberValue:observer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDataType:(PPCPPDataType *)dataType observer:(id<PPCFormulaObserver> _Nullable)observer __attribute__((swift_name("init(dataType:observer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PPCPPColor * _Nullable)evalAsColor __attribute__((swift_name("evalAsColor()")));
- (id<PPCPPExprLayer> _Nullable)evalAsLayer __attribute__((swift_name("evalAsLayer()")));
- (PPCDouble * _Nullable)evalAsNumber __attribute__((swift_name("evalAsNumber()")));
- (NSString * _Nullable)evalAsString __attribute__((swift_name("evalAsString()")));
- (void)forEachFn:(void (^)(PPCPPExpr *))fn __attribute__((swift_name("forEach(fn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneChangeArgs")))
@interface PPCPPSceneChangeArgs : PPCBase
- (instancetype)initWithScene:(PPCPPScene *)scene isAdded:(BOOL)isAdded isTopScene:(BOOL)isTopScene isTransition:(BOOL)isTransition __attribute__((swift_name("init(scene:isAdded:isTopScene:isTransition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithId:(NSString *)id name:(NSString *)name isAdded:(BOOL)isAdded isTopScene:(BOOL)isTopScene isTransition:(BOOL)isTransition __attribute__((swift_name("init(id:name:isAdded:isTopScene:isTransition:)"))) __attribute__((objc_designated_initializer));
- (PPCPPSceneChangeArgs *)doCopyId:(NSString *)id name:(NSString *)name isAdded:(BOOL)isAdded isTopScene:(BOOL)isTopScene isTransition:(BOOL)isTransition __attribute__((swift_name("doCopy(id:name:isAdded:isTopScene:isTransition:)")));
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
@protocol PPCPPJson
@required
- (BOOL)hasKey:(NSString *)key __attribute__((swift_name("has(key:)")));
- (NSSet<NSString *> *)keySet __attribute__((swift_name("keySet()")));
- (id _Nullable)optKey:(NSString *)key __attribute__((swift_name("opt(key:)")));
- (id<PPCPPJson> _Nullable)optObjectKey:(NSString *)key __attribute__((swift_name("optObject(key:)")));
- (NSArray<id<PPCPPJson>> * _Nullable)optObjectArrayKey:(NSString *)key __attribute__((swift_name("optObjectArray(key:)")));
- (NSString * _Nullable)optStringKey:(NSString *)key __attribute__((swift_name("optString(key:)")));
- (NSArray<NSString *> * _Nullable)optStringArrayKey:(NSString *)key __attribute__((swift_name("optStringArray(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putNumberKey:(NSString *)key value:(id)value __attribute__((swift_name("putNumber(key:value:)")));
- (void)putObjectArrayKey:(NSString *)key value:(NSArray<id<PPCPPJson>> *)value __attribute__((swift_name("putObjectArray(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@end

__attribute__((swift_name("PPLayer")))
@interface PPCPPLayer : PPCBase <PPCPPExprLayer>
@property (class, readonly, getter=companion) PPCPPLayerCompanion *companion __attribute__((swift_name("companion")));
- (void)addObserverObserver:(id<PPCPPLayerObserver>)observer __attribute__((swift_name("addObserver(observer:)")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (void)forEachPropertyFn:(void (^)(PPCPPProperty<id> *))fn __attribute__((swift_name("forEachProperty(fn:)")));
- (float)getBorderCenterOffsetScaleFactor:(float)scaleFactor __attribute__((swift_name("getBorderCenterOffset(scaleFactor:)")));
- (int32_t)getBottomScaleFactor:(float)scaleFactor __attribute__((swift_name("getBottom(scaleFactor:)")));
- (PPCPPColorProperty * _Nullable)getColorPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getColorPropertyByName(propertyName:)")));
- (PPCPPFloatProperty * _Nullable)getFloatPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getFloatPropertyByName(propertyName:)")));
- (float)getInsideBorderWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getInsideBorderWidth(scaleFactor:)")));
- (int32_t)getIntHeightScaleFactor:(float)scaleFactor __attribute__((swift_name("getIntHeight(scaleFactor:)")));
- (int32_t)getIntWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getIntWidth(scaleFactor:)")));
- (int32_t)getLeftScaleFactor:(float)scaleFactor __attribute__((swift_name("getLeft(scaleFactor:)")));
- (id<PPCPPObservableValueProvider> _Nullable)getObservableValueProvider __attribute__((swift_name("getObservableValueProvider()")));
- (float)getOutsideBorderWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getOutsideBorderWidth(scaleFactor:)")));
- (id<PPCPPExprLayer> _Nullable)getParent __attribute__((swift_name("getParent()")));
- (void)getPositionOut:(PPCPPPoint *)out __attribute__((swift_name("getPosition(out:)")));
- (PPCPPProperty<id> * _Nullable)getPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getPropertyByName(propertyName:)")));
- (float)getRadiusFactor __attribute__((swift_name("getRadiusFactor()")));
- (float)getRenderBorderWidthScaleFactor:(float)scaleFactor __attribute__((swift_name("getRenderBorderWidth(scaleFactor:)")));
- (float)getRenderRadiusScaleFactor:(float)scaleFactor __attribute__((swift_name("getRenderRadius(scaleFactor:)")));
- (int32_t)getRightScaleFactor:(float)scaleFactor __attribute__((swift_name("getRight(scaleFactor:)")));
- (PPCPPStringProperty * _Nullable)getStringPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getStringPropertyByName(propertyName:)")));
- (int32_t)getTopScaleFactor:(float)scaleFactor __attribute__((swift_name("getTop(scaleFactor:)")));
- (BOOL)hasActiveResponses __attribute__((swift_name("hasActiveResponses()")));
- (BOOL)hasMoveResponse __attribute__((swift_name("hasMoveResponse()")));
- (BOOL)hasParentScaleResponse __attribute__((swift_name("hasParentScaleResponse()")));
- (BOOL)hasRotateResponse __attribute__((swift_name("hasRotateResponse()")));
- (BOOL)hasScaleResponse __attribute__((swift_name("hasScaleResponse()")));
- (BOOL)hasTouchTriggers __attribute__((swift_name("hasTouchTriggers()")));
- (BOOL)includesPointPointInParent:(PPCPPPoint *)pointInParent __attribute__((swift_name("includesPoint(pointInParent:)")));
- (BOOL)includesSelfOriginPointPoint:(PPCPPPoint *)point __attribute__((swift_name("includesSelfOriginPoint(point:)")));
- (BOOL)is3DRotatable __attribute__((swift_name("is3DRotatable()")));
- (BOOL)isAbsolutePositioned __attribute__((swift_name("isAbsolutePositioned()")));
- (BOOL)isDirty __attribute__((swift_name("isDirty()")));
- (BOOL)isInterestedWithTouchEventPointInParent:(PPCPPPoint *)pointInParent __attribute__((swift_name("isInterestedWithTouchEvent(pointInParent:)")));
- (BOOL)isLayerUpdated __attribute__((swift_name("isLayerUpdated()")));
- (BOOL)isTouchable __attribute__((swift_name("isTouchable()")));
- (void)moveAnchorNewAnchor:(PPCPPPoint *)newAnchor __attribute__((swift_name("moveAnchor(newAnchor:)")));
- (void)notifyLayerModified __attribute__((swift_name("notifyLayerModified()")));
- (void)notifyOrderChange __attribute__((swift_name("notifyOrderChange()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)optimizeInteractions __attribute__((swift_name("optimizeInteractions()")));
- (BOOL)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)registerPropertyProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("registerProperty(property:)")));
- (void)removeObserverObserver:(id<PPCPPLayerObserver>)observer __attribute__((swift_name("removeObserver(observer:)")));
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
- (PPCPPPoint *)translateAbsPointToSelfAbsPoint:(PPCPPPoint *)absPoint applyScroll:(BOOL)applyScroll __attribute__((swift_name("translateAbsPointToSelf(absPoint:applyScroll:)")));
- (PPCPPPoint *)translateParentPointToSelfPoint:(PPCPPPoint *)point applyScroll:(BOOL)applyScroll __attribute__((swift_name("translateParentPointToSelf(point:applyScroll:)")));
- (void)unsetDirty __attribute__((swift_name("unsetDirty()")));
@property PPCPPLayerAlias * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) NSArray<PPCPPContainerLayer *> *ancestors __attribute__((swift_name("ancestors")));
@property float anchorX __attribute__((swift_name("anchorX")));
@property float anchorY __attribute__((swift_name("anchorY")));
@property (readonly) PPCPPColorProperty *borderColor __attribute__((swift_name("borderColor")));
@property (readonly) PPCPPFloatProperty *borderOpacity __attribute__((swift_name("borderOpacity")));
@property PPCPPBorderPosition *borderPosition __attribute__((swift_name("borderPosition")));
@property (readonly) PPCPPFloatProperty *borderWidth __attribute__((swift_name("borderWidth")));
@property PPCPPLayerLayoutBBox *cachedBBox __attribute__((swift_name("cachedBBox")));
@property (readonly) PPCPPCorners<PPCPPFloatProperty *> *cornerRadius __attribute__((swift_name("cornerRadius")));
@property (readonly) PPCMutableSet<PPCPPLayerProperty *> *dynamicProperties __attribute__((swift_name("dynamicProperties")));
@property (readonly) PPCPPColorProperty *fillColor __attribute__((swift_name("fillColor")));
@property (readonly) int32_t fillColorWithOpacity __attribute__((swift_name("fillColorWithOpacity")));
@property (readonly) PPCPPFloatProperty *fillImageRate __attribute__((swift_name("fillImageRate")));
@property (readonly) PPCPPFloatProperty *fillOpacity __attribute__((swift_name("fillOpacity")));
@property NSString * _Nullable fillResourceId __attribute__((swift_name("fillResourceId")));
@property PPCPPFillScaleMode *fillScaleMode __attribute__((swift_name("fillScaleMode")));
@property (readonly) PPCPPFloatProperty *fillSolidRate __attribute__((swift_name("fillSolidRate")));
@property BOOL fixAspectRatio __attribute__((swift_name("fixAspectRatio")));
@property BOOL fixBottom __attribute__((swift_name("fixBottom")));
@property BOOL fixHeight __attribute__((swift_name("fixHeight")));
@property BOOL fixLeft __attribute__((swift_name("fixLeft")));
@property BOOL fixRight __attribute__((swift_name("fixRight")));
@property BOOL fixTop __attribute__((swift_name("fixTop")));
@property BOOL fixWidth __attribute__((swift_name("fixWidth")));
@property (readonly) PPCPPFloatProperty *height __attribute__((swift_name("height")));
@property (readonly) PPCPPFloatProperty *highlightOpacity __attribute__((swift_name("highlightOpacity")));
@property (readonly) PPCPPHitArea *hitArea __attribute__((swift_name("hitArea")));
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
@property PPCPPShapeLayer * _Nullable maskLayer __attribute__((swift_name("maskLayer")));
@property (readonly) float maxRadius __attribute__((swift_name("maxRadius")));
@property (readonly) float mergedOpacity __attribute__((swift_name("mergedOpacity")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) NSString *nsId __attribute__((swift_name("nsId")));
@property (readonly) PPCPPFloatProperty *opacity __attribute__((swift_name("opacity")));
@property PPCPPContainerLayer * _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) PPCPPPoint *position __attribute__((swift_name("position")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<PPCPPPropertyObserver> propertyObserver __attribute__((swift_name("propertyObserver")));
@property PPCPPAxis3D * _Nullable r3Axis __attribute__((swift_name("r3Axis")));
@property float r3Depth __attribute__((swift_name("r3Depth")));
@property float r3PivotX __attribute__((swift_name("r3PivotX")));
@property float r3PivotY __attribute__((swift_name("r3PivotY")));
@property (readonly) PPCPPFloatProperty *radius __attribute__((swift_name("radius")));
@property (readonly) PPCPPFloatProperty *radiusBottomLeft __attribute__((swift_name("radiusBottomLeft")));
@property (readonly) PPCPPFloatProperty *radiusBottomRight __attribute__((swift_name("radiusBottomRight")));
@property (readonly) PPCPPFloatProperty *radiusTopLeft __attribute__((swift_name("radiusTopLeft")));
@property (readonly) PPCPPFloatProperty *radiusTopRight __attribute__((swift_name("radiusTopRight")));
@property (readonly) PPCPPFloatProperty *rotation __attribute__((swift_name("rotation")));
@property (readonly) PPCPPFloatProperty *rotation3d __attribute__((swift_name("rotation3d")));
@property (readonly) PPCPPFloatProperty *rotation3dX __attribute__((swift_name("rotation3dX")));
@property (readonly) PPCPPFloatProperty *rotation3dY __attribute__((swift_name("rotation3dY")));
@property PPCInt * _Nullable savedIndexByLayerOrder __attribute__((swift_name("savedIndexByLayerOrder")));
@property (readonly) PPCPPFloatProperty *scaleX __attribute__((swift_name("scaleX")));
@property (readonly) PPCPPFloatProperty *scaleY __attribute__((swift_name("scaleY")));
@property (readonly) PPCPPFloatProperty *shadowBlur __attribute__((swift_name("shadowBlur")));
@property (readonly) PPCPPColorProperty *shadowColor __attribute__((swift_name("shadowColor")));
@property (readonly) BOOL shadowEnabled __attribute__((swift_name("shadowEnabled")));
@property (readonly) PPCPPFloatProperty *shadowOffsetX __attribute__((swift_name("shadowOffsetX")));
@property (readonly) PPCPPFloatProperty *shadowOffsetY __attribute__((swift_name("shadowOffsetY")));
@property (readonly) PPCPPFloatProperty *shadowOpacity __attribute__((swift_name("shadowOpacity")));
@property (readonly) PPCPPFloatProperty *shadowSpread __attribute__((swift_name("shadowSpread")));
@property (readonly) float top __attribute__((swift_name("top")));
@property (readonly) PPCPPPoint *topLeft __attribute__((swift_name("topLeft")));
@property (readonly) PPCPPLayerType *type __attribute__((swift_name("type")));
@property (readonly) PPCPPFloatProperty *width __attribute__((swift_name("width")));
@property (readonly) PPCPPFloatProperty *x __attribute__((swift_name("x")));
@property (readonly) PPCPPFloatProperty *y __attribute__((swift_name("y")));
@end

__attribute__((swift_name("AbstractMediaLayer")))
@interface PPCAbstractMediaLayer : PPCPPLayer
- (BOOL)allowAutoStart __attribute__((swift_name("allowAutoStart()")));
- (BOOL)canAutoPlay __attribute__((swift_name("canAutoPlay()")));
- (void)clearCommands __attribute__((swift_name("clearCommands()")));
- (void)clearTickTimes __attribute__((swift_name("clearTickTimes()")));
- (PPCPPMediaCommand * _Nullable)dequeueCommand __attribute__((swift_name("dequeueCommand()")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (NSString *)getMediaResourceUrl __attribute__((swift_name("getMediaResourceUrl()")));
- (BOOL)isSameTick __attribute__((swift_name("isSameTick()")));
- (BOOL)needsAutoPlay __attribute__((swift_name("needsAutoPlay()")));
- (void)notifyPlayCompleted __attribute__((swift_name("notifyPlayCompleted()")));
- (void)resetMediaState __attribute__((swift_name("resetMediaState()")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)runCommandCommand:(PPCPPMediaCommand *)command __attribute__((swift_name("runCommand(command:)")));
- (void)setCanAutoPlayValue:(BOOL)value __attribute__((swift_name("setCanAutoPlay(value:)")));
- (void)setMediaResourceUrlValue:(NSString *)value __attribute__((swift_name("setMediaResourceUrl(value:)")));
- (void)setPlayTickNow:(int64_t)now __attribute__((swift_name("setPlayTick(now:)")));
- (void)setResetTickNow:(int64_t)now __attribute__((swift_name("setResetTick(now:)")));
@property (readonly) PPCPPFloatProperty *currentTime __attribute__((swift_name("currentTime")));
@property (readonly) NSString *initialResourceUrl __attribute__((swift_name("initialResourceUrl")));
@property BOOL isPlaying __attribute__((swift_name("isPlaying")));
@property BOOL isRepeating __attribute__((swift_name("isRepeating")));
@property PPCPPMessageBus * _Nullable scheduler __attribute__((swift_name("scheduler")));
@property (readonly) PPCPPFloatProperty *totalTime __attribute__((swift_name("totalTime")));
@property (readonly) PPCPPFloatProperty *volume __attribute__((swift_name("volume")));
@end

__attribute__((swift_name("AbstractTextLayer")))
@interface PPCAbstractTextLayer : PPCPPLayer
- (PPCPPStringProperty * _Nullable)getStringPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getStringPropertyByName(propertyName:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)saveInitialState __attribute__((swift_name("saveInitialState()")));
@property float paddingBottom __attribute__((swift_name("paddingBottom")));
@property float paddingLeft __attribute__((swift_name("paddingLeft")));
@property float paddingRight __attribute__((swift_name("paddingRight")));
@property float paddingTop __attribute__((swift_name("paddingTop")));
@property (readonly) PPCPPTextAttributes *textAttributes __attribute__((swift_name("textAttributes")));
@property (readonly) PPCPPColorProperty *textColor __attribute__((swift_name("textColor")));
@property (readonly) PPCPPFloatProperty *textOpacity __attribute__((swift_name("textOpacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPAudioLayer")))
@interface PPCPPAudioLayer : PPCAbstractMediaLayer
- (BOOL)isTouchable __attribute__((swift_name("isTouchable()")));
@property (readonly) BOOL autoStart __attribute__((swift_name("autoStart")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraLayer")))
@interface PPCPPCameraLayer : PPCPPLayer
- (void)changeQrScannerPropertiesIsQr:(BOOL)isQr qrValue:(NSString *)qrValue qrX:(float)qrX qrY:(float)qrY qrWidth:(float)qrWidth qrHeight:(float)qrHeight __attribute__((swift_name("changeQrScannerProperties(isQr:qrValue:qrX:qrY:qrWidth:qrHeight:)")));
- (void)clearCommands __attribute__((swift_name("clearCommands()")));
- (PPCPPCameraLayerCommand * _Nullable)dequeueCommand __attribute__((swift_name("dequeueCommand()")));
- (void)openUrlData:(NSString *)data __attribute__((swift_name("openUrl(data:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
@property (readonly) PPCPPCameraPosition * _Nullable cameraPosition __attribute__((swift_name("cameraPosition")));
@property BOOL qrScanner __attribute__((swift_name("qrScanner")));
@property PPCBoolean * _Nullable qrScannerRedirection __attribute__((swift_name("qrScannerRedirection")));
@property (readonly) BOOL started __attribute__((swift_name("started")));
@end

__attribute__((swift_name("PPCameraLayerCommand")))
@interface PPCPPCameraLayerCommand : PPCBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraLayerStartCommand")))
@interface PPCPPCameraLayerStartCommand : PPCPPCameraLayerCommand
- (instancetype)initWithPosition:(PPCPPCameraPosition *)position __attribute__((swift_name("init(position:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCPPCameraPosition *position __attribute__((swift_name("position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPCameraLayerStopCommand")))
@interface PPCPPCameraLayerStopCommand : PPCPPCameraLayerCommand
- (instancetype)initWithShowBlack:(BOOL)showBlack __attribute__((swift_name("init(showBlack:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL showBlack __attribute__((swift_name("showBlack")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPChangeTarget")))
@interface PPCPPChangeTarget : PPCBase
- (instancetype)initWithLayerId:(NSString *)layerId property:(PPCPPLayerProperty *)property __attribute__((swift_name("init(layerId:property:)"))) __attribute__((objc_designated_initializer));
- (PPCPPChangeTarget *)doCopyLayerId:(NSString *)layerId property:(PPCPPLayerProperty *)property __attribute__((swift_name("doCopy(layerId:property:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) PPCPPLayerProperty *property __attribute__((swift_name("property")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPContainerLayer")))
@interface PPCPPContainerLayer : PPCPPLayer
- (void)addChildLayerChildLayer:(PPCPPLayer *)childLayer __attribute__((swift_name("addChildLayer(childLayer:)")));
- (void)addChildLayerIndex:(int32_t)index layer:(PPCPPLayer *)layer __attribute__((swift_name("addChildLayer(index:layer:)")));
- (NSArray<PPCPPLayer *> *)collectAllDescendants __attribute__((swift_name("collectAllDescendants()")));
- (BOOL)containVideoLayer __attribute__((swift_name("containVideoLayer()")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (void)forEachLayerCallback:(void (^)(PPCPPLayer *))callback __attribute__((swift_name("forEachLayer(callback:)")));
- (PPCKotlinArray<PPCPPLayer *> *)getAllLayers __attribute__((swift_name("getAllLayers()")));
- (NSArray<PPCPPLayer *> *)getChildren __attribute__((swift_name("getChildren()")));
- (PPCPPFloatProperty * _Nullable)getFloatPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getFloatPropertyByName(propertyName:)")));
- (float)getHorizontalTotalPadding __attribute__((swift_name("getHorizontalTotalPadding()")));
- (PPCPPProperty<id> * _Nullable)getPropertyByNamePropertyName:(NSString *)propertyName __attribute__((swift_name("getPropertyByName(propertyName:)")));
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
@property PPCInt * _Nullable counterAxisSpacing __attribute__((swift_name("counterAxisSpacing")));
@property BOOL isClipChildren __attribute__((swift_name("isClipChildren")));
@property int32_t itemSpacing __attribute__((swift_name("itemSpacing")));
@property float paddingBottom __attribute__((swift_name("paddingBottom")));
@property float paddingLeft __attribute__((swift_name("paddingLeft")));
@property float paddingRight __attribute__((swift_name("paddingRight")));
@property float paddingTop __attribute__((swift_name("paddingTop")));
@property BOOL scrollEnabled __attribute__((swift_name("scrollEnabled")));
@property (readonly) PPCPPFloatProperty * _Nullable scrollOffset __attribute__((swift_name("scrollOffset")));
@property (readonly) PPCPPLayerProperty * _Nullable scrollOffsetKey __attribute__((swift_name("scrollOffsetKey")));
@property (readonly) PPCPPFloatProperty *scrollX __attribute__((swift_name("scrollX")));
@property (readonly) PPCPPFloatProperty *scrollY __attribute__((swift_name("scrollY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPHitArea")))
@interface PPCPPHitArea : PPCBase
- (instancetype)initWithExtendAbove:(float)extendAbove extendBelow:(float)extendBelow extendLeft:(float)extendLeft extendRight:(float)extendRight __attribute__((swift_name("init(extendAbove:extendBelow:extendLeft:extendRight:)"))) __attribute__((objc_designated_initializer));
- (BOOL)hasExtension __attribute__((swift_name("hasExtension()")));
- (BOOL)isPointIncludedInPoint:(PPCPPPoint *)point width:(float)width height:(float)height __attribute__((swift_name("isPointIncludedIn(point:width:height:)")));
- (void)setExtendValuesExtendAbove:(float)extendAbove extendBelow:(float)extendBelow extendLeft:(float)extendLeft extendRight:(float)extendRight __attribute__((swift_name("setExtendValues(extendAbove:extendBelow:extendLeft:extendRight:)")));
@property float extendAbove __attribute__((swift_name("extendAbove")));
@property float extendBelow __attribute__((swift_name("extendBelow")));
@property float extendLeft __attribute__((swift_name("extendLeft")));
@property float extendRight __attribute__((swift_name("extendRight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPImageLayer")))
@interface PPCPPImageLayer : PPCPPLayer
- (NSString *)getMediaResourceUrl __attribute__((swift_name("getMediaResourceUrl()")));
- (void)setMediaResourceUrlValue:(NSString *)value __attribute__((swift_name("setMediaResourceUrl(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosEffectLayer")))
@interface PPCPPIosEffectLayer : PPCPPLayer
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)updateStyleBlurStyle:(PPCPPBlurEffectStyle *)blurStyle duration:(int64_t)duration __attribute__((swift_name("updateStyle(blurStyle:duration:)")));
@property (readonly) PPCPPBlurEffectStyle *blurStyle __attribute__((swift_name("blurStyle")));
@property (readonly) int64_t styleDuration __attribute__((swift_name("styleDuration")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayer.Companion")))
@interface PPCPPLayerCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPLayerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t LAYOUT_COORDINATE_SYSTEM_SCALE __attribute__((swift_name("LAYOUT_COORDINATE_SYSTEM_SCALE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayer.LayoutBBox")))
@interface PPCPPLayerLayoutBBox : PPCBase
- (instancetype)initWithMinX:(int32_t)minX minY:(int32_t)minY maxX:(int32_t)maxX maxY:(int32_t)maxY __attribute__((swift_name("init(minX:minY:maxX:maxY:)"))) __attribute__((objc_designated_initializer));
- (PPCPPLayerLayoutBBox *)doCopyMinX:(int32_t)minX minY:(int32_t)minY maxX:(int32_t)maxX maxY:(int32_t)maxY __attribute__((swift_name("doCopy(minX:minY:maxX:maxY:)")));
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
@protocol PPCPPLayerObserver
@required
- (void)onChildOrderModifiedLayer:(PPCPPLayer *)layer __attribute__((swift_name("onChildOrderModified(layer:)")));
- (void)onLayerEndChangeLayer:(PPCPPLayer *)layer __attribute__((swift_name("onLayerEndChange(layer:)")));
- (void)onLayerModifiedLayer:(PPCPPLayer *)layer __attribute__((swift_name("onLayerModified(layer:)")));
- (void)onLayerWillChangeLayer:(PPCPPLayer *)layer __attribute__((swift_name("onLayerWillChange(layer:)")));
- (void)onMaskLayerChangedLayer:(PPCPPLayer *)layer __attribute__((swift_name("onMaskLayerChanged(layer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerAlias")))
@interface PPCPPLayerAlias : PPCBase
- (instancetype)initWithNamespace:(NSString *)namespace_ nsId:(NSString *)nsId name:(NSString *)name __attribute__((swift_name("init(namespace:nsId:name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) NSString *nsId __attribute__((swift_name("nsId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerType")))
@interface PPCPPLayerType : PPCKotlinEnum<PPCPPLayerType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPLayerType *image __attribute__((swift_name("image")));
@property (class, readonly) PPCPPLayerType *rect __attribute__((swift_name("rect")));
@property (class, readonly) PPCPPLayerType *oval __attribute__((swift_name("oval")));
@property (class, readonly) PPCPPLayerType *container __attribute__((swift_name("container")));
@property (class, readonly) PPCPPLayerType *text __attribute__((swift_name("text")));
@property (class, readonly) PPCPPLayerType *textInput __attribute__((swift_name("textInput")));
@property (class, readonly) PPCPPLayerType *video __attribute__((swift_name("video")));
@property (class, readonly) PPCPPLayerType *lottie __attribute__((swift_name("lottie")));
@property (class, readonly) PPCPPLayerType *audio __attribute__((swift_name("audio")));
@property (class, readonly) PPCPPLayerType *shape __attribute__((swift_name("shape")));
@property (class, readonly) PPCPPLayerType *camera __attribute__((swift_name("camera")));
@property (class, readonly) PPCPPLayerType *iosEffect __attribute__((swift_name("iosEffect")));
@property (class, readonly) PPCPPLayerType *component __attribute__((swift_name("component")));
+ (PPCKotlinArray<PPCPPLayerType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPLayerType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLottieLayer")))
@interface PPCPPLottieLayer : PPCAbstractMediaLayer
@property (readonly) BOOL autoStart __attribute__((swift_name("autoStart")));
@end

__attribute__((swift_name("PPMediaCommand")))
@interface PPCPPMediaCommand : PPCBase
@property (class, readonly, getter=companion) PPCPPMediaCommandCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaChangeCommand")))
@interface PPCPPMediaChangeCommand : PPCPPMediaCommand
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaCommand.Companion")))
@interface PPCPPMediaCommandCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPMediaCommandCompanion *shared __attribute__((swift_name("shared")));
- (PPCPPMediaCommand * _Nullable)deserializeStr:(NSString *)str __attribute__((swift_name("deserialize(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaPauseCommand")))
@interface PPCPPMediaPauseCommand : PPCPPMediaCommand
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaPlayCommand")))
@interface PPCPPMediaPlayCommand : PPCPPMediaCommand
- (instancetype)initWithRepeating:(BOOL)repeating __attribute__((swift_name("init(repeating:)"))) __attribute__((objc_designated_initializer));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL repeating __attribute__((swift_name("repeating")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaSeekCommand")))
@interface PPCPPMediaSeekCommand : PPCPPMediaCommand
- (instancetype)initWithSeekTime:(int32_t)seekTime __attribute__((swift_name("init(seekTime:)"))) __attribute__((objc_designated_initializer));
- (NSString *)serialize __attribute__((swift_name("serialize()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t seekTime __attribute__((swift_name("seekTime")));
@end

__attribute__((swift_name("PPShapeLayer")))
@interface PPCPPShapeLayer : PPCPPLayer

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
@property BOOL isMask __attribute__((swift_name("isMask")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPOvalLayer")))
@interface PPCPPOvalLayer : PPCPPShapeLayer
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlayState")))
@interface PPCPPPlayState : PPCBase
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
@interface PPCPPRectLayer : PPCPPShapeLayer
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextAttributes")))
@interface PPCPPTextAttributes : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PPCPPTextAttributesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)doCopyFromOther:(PPCPPTextAttributes *)other __attribute__((swift_name("doCopyFrom(other:)")));
- (PPCFloat * _Nullable)getFontSizeScaleFactor:(float)scaleFactor __attribute__((swift_name("getFontSize(scaleFactor:)")));
@property BOOL autoLineHeight __attribute__((swift_name("autoLineHeight")));
@property NSString * _Nullable font __attribute__((swift_name("font")));
@property PPCFloat * _Nullable fontSize __attribute__((swift_name("fontSize")));
@property NSString * _Nullable initialText __attribute__((swift_name("initialText")));
@property PPCFloat * _Nullable letterSpacing __attribute__((swift_name("letterSpacing")));
@property PPCFloat * _Nullable lineHeight __attribute__((swift_name("lineHeight")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property PPCPPHorizontalAlign * _Nullable textAlign __attribute__((swift_name("textAlign")));
@property PPCPPVerticalAlign * _Nullable verticalAlign __attribute__((swift_name("verticalAlign")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextAttributes.Companion")))
@interface PPCPPTextAttributesCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPTextAttributesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *DEFAULT_FONT_BOLD __attribute__((swift_name("DEFAULT_FONT_BOLD")));
@property (readonly) NSString *DEFAULT_FONT_DEBUG __attribute__((swift_name("DEFAULT_FONT_DEBUG")));
@property (readonly) NSString *DEFAULT_FONT_REGULAR __attribute__((swift_name("DEFAULT_FONT_REGULAR")));
@property (readonly) NSString *DEFAULT_FONT_SEMI_BOLD __attribute__((swift_name("DEFAULT_FONT_SEMI_BOLD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer")))
@interface PPCPPTextInputLayer : PPCAbstractTextLayer
- (void)addFocusRequestListenerFocusRequestListener:(id<PPCPPTextInputLayerFocusRequestListener>)focusRequestListener __attribute__((swift_name("addFocusRequestListener(focusRequestListener:)")));
- (void)addFocusStateListenerFocusStateListener:(id<PPCPPTextInputLayerFocusStateListener>)focusStateListener __attribute__((swift_name("addFocusStateListener(focusStateListener:)")));
- (void)applySizeFromRendererTextRenderHeight:(float)textRenderHeight now:(int64_t)now __attribute__((swift_name("applySizeFromRenderer(textRenderHeight:now:)")));
- (void)notifyFocusStateFocused:(BOOL)focused now:(int64_t)now __attribute__((swift_name("notifyFocusState(focused:now:)")));
- (void)notifyReturnKeyPressedNow:(int64_t)now __attribute__((swift_name("notifyReturnKeyPressed(now:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)removeFocusRequestListenerFocusRequestListener:(id<PPCPPTextInputLayerFocusRequestListener>)focusRequestListener __attribute__((swift_name("removeFocusRequestListener(focusRequestListener:)")));
- (void)requestFocusFocus:(BOOL)focus replayMode:(BOOL)replayMode __attribute__((swift_name("requestFocus(focus:replayMode:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)saveInitialState __attribute__((swift_name("saveInitialState()")));
@property BOOL autoHeight __attribute__((swift_name("autoHeight")));
@property BOOL focusOutOnTapOutside __attribute__((swift_name("focusOutOnTapOutside")));
@property BOOL initialFocus __attribute__((swift_name("initialFocus")));
@property BOOL isAutoFocusOut __attribute__((swift_name("isAutoFocusOut")));
@property PPCPPTextInputLayerKeyboardLook *keyboardLook __attribute__((swift_name("keyboardLook")));
@property PPCPPTextInputLayerKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@property PPCFloat * _Nullable maxHeight __attribute__((swift_name("maxHeight")));
@property float minHeight __attribute__((swift_name("minHeight")));
@property BOOL multiLine __attribute__((swift_name("multiLine")));
@property PPCPPColor *placeHolderColor __attribute__((swift_name("placeHolderColor")));
@property float placeHolderOpacity __attribute__((swift_name("placeHolderOpacity")));
@property NSString *placeHolderText __attribute__((swift_name("placeHolderText")));
@property PPCPPTextInputLayerReturnKeyType *returnKeyType __attribute__((swift_name("returnKeyType")));
@end

__attribute__((swift_name("PPTextInputLayerFocusRequestListener")))
@protocol PPCPPTextInputLayerFocusRequestListener
@required
- (void)onFocusRequestedLayer:(PPCPPTextInputLayer *)layer focus:(BOOL)focus replayMode:(BOOL)replayMode __attribute__((swift_name("onFocusRequested(layer:focus:replayMode:)")));
@end

__attribute__((swift_name("PPTextInputLayerFocusStateListener")))
@protocol PPCPPTextInputLayerFocusStateListener
@required
- (void)onFocusStateChangedLayer:(PPCPPTextInputLayer *)layer focused:(BOOL)focused now:(int64_t)now __attribute__((swift_name("onFocusStateChanged(layer:focused:now:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer.KeyboardLook")))
@interface PPCPPTextInputLayerKeyboardLook : PPCKotlinEnum<PPCPPTextInputLayerKeyboardLook *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPTextInputLayerKeyboardLook *dark __attribute__((swift_name("dark")));
@property (class, readonly) PPCPPTextInputLayerKeyboardLook *light __attribute__((swift_name("light")));
+ (PPCKotlinArray<PPCPPTextInputLayerKeyboardLook *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPTextInputLayerKeyboardLook *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer.KeyboardType")))
@interface PPCPPTextInputLayerKeyboardType : PPCKotlinEnum<PPCPPTextInputLayerKeyboardType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPTextInputLayerKeyboardType *text __attribute__((swift_name("text")));
@property (class, readonly) PPCPPTextInputLayerKeyboardType *url __attribute__((swift_name("url")));
@property (class, readonly) PPCPPTextInputLayerKeyboardType *email __attribute__((swift_name("email")));
@property (class, readonly) PPCPPTextInputLayerKeyboardType *number __attribute__((swift_name("number")));
@property (class, readonly) PPCPPTextInputLayerKeyboardType *textPassword __attribute__((swift_name("textPassword")));
@property (class, readonly) PPCPPTextInputLayerKeyboardType *numberPassword __attribute__((swift_name("numberPassword")));
+ (PPCKotlinArray<PPCPPTextInputLayerKeyboardType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPTextInputLayerKeyboardType *> *entries __attribute__((swift_name("entries")));
@property (readonly) BOOL isPassword __attribute__((swift_name("isPassword")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextInputLayer.ReturnKeyType")))
@interface PPCPPTextInputLayerReturnKeyType : PPCKotlinEnum<PPCPPTextInputLayerReturnKeyType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPTextInputLayerReturnKeyType *done __attribute__((swift_name("done")));
@property (class, readonly) PPCPPTextInputLayerReturnKeyType *go __attribute__((swift_name("go")));
@property (class, readonly) PPCPPTextInputLayerReturnKeyType *next __attribute__((swift_name("next")));
@property (class, readonly) PPCPPTextInputLayerReturnKeyType *send __attribute__((swift_name("send")));
@property (class, readonly) PPCPPTextInputLayerReturnKeyType *search __attribute__((swift_name("search")));
@property (class, readonly) PPCPPTextInputLayerReturnKeyType *theNewLine __attribute__((swift_name("theNewLine")));
+ (PPCKotlinArray<PPCPPTextInputLayerReturnKeyType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPTextInputLayerReturnKeyType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPTextLayer")))
@interface PPCPPTextLayer : PPCAbstractTextLayer
- (void)applySizeFromRendererTextRenderWidth:(float)textRenderWidth textRenderHeight:(float)textRenderHeight now:(int64_t)now __attribute__((swift_name("applySizeFromRenderer(textRenderWidth:textRenderHeight:now:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onPropertyModifiedProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)resetNonPropertiesDuration:(int64_t)duration __attribute__((swift_name("resetNonProperties(duration:)")));
- (void)saveInitialState __attribute__((swift_name("saveInitialState()")));
@property BOOL guessInitialWidth __attribute__((swift_name("guessInitialWidth")));
@property float renderHeight __attribute__((swift_name("renderHeight")));
@property float renderWidth __attribute__((swift_name("renderWidth")));
@property PPCPPTextLayerSizeMode *sizeMode __attribute__((swift_name("sizeMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorShapeLayer")))
@interface PPCPPVectorShapeLayer : PPCPPShapeLayer
@property PPCPPLineCap *lineCap __attribute__((swift_name("lineCap")));
@property PPCPPLineJoin *lineJoin __attribute__((swift_name("lineJoin")));
@property (readonly) NSMutableArray<PPCPPVectorShape *> *shapes __attribute__((swift_name("shapes")));
@property float viewBoxHeight __attribute__((swift_name("viewBoxHeight")));
@property float viewBoxWidth __attribute__((swift_name("viewBoxWidth")));
@property float viewBoxX __attribute__((swift_name("viewBoxX")));
@property float viewBoxY __attribute__((swift_name("viewBoxY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVideoLayer")))
@interface PPCPPVideoLayer : PPCAbstractMediaLayer
- (NSString *)getThumbnailUrl __attribute__((swift_name("getThumbnailUrl()")));
@property (readonly) BOOL autoStart __attribute__((swift_name("autoStart")));
@property (readonly) NSString *thumbnailId __attribute__((swift_name("thumbnailId")));
@end

__attribute__((swift_name("PPVectorShape")))
@interface PPCPPVectorShape : PPCBase
@property (readonly) BOOL fillable __attribute__((swift_name("fillable")));
@property (readonly) PPCPPVectorShapeType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorEllipse")))
@interface PPCPPVectorEllipse : PPCPPVectorShape
@property (readonly) float cx __attribute__((swift_name("cx")));
@property (readonly) float cy __attribute__((swift_name("cy")));
@property (readonly) float rx __attribute__((swift_name("rx")));
@property (readonly) float ry __attribute__((swift_name("ry")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorLine")))
@interface PPCPPVectorLine : PPCPPVectorShape
@property (readonly) float x1 __attribute__((swift_name("x1")));
@property (readonly) float x2 __attribute__((swift_name("x2")));
@property (readonly) float y1 __attribute__((swift_name("y1")));
@property (readonly) float y2 __attribute__((swift_name("y2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorPath")))
@interface PPCPPVectorPath : PPCPPVectorShape
@property (readonly) NSString *d __attribute__((swift_name("d")));
@property (readonly) NSMutableArray<PPCPPPathSegmentData *> *segmentData __attribute__((swift_name("segmentData")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorPolygon")))
@interface PPCPPVectorPolygon : PPCPPVectorShape
@property (readonly) NSMutableArray<PPCPPPoint *> *points __attribute__((swift_name("points")));
@property (readonly) NSString *pointsString __attribute__((swift_name("pointsString")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorPolyline")))
@interface PPCPPVectorPolyline : PPCPPVectorShape
@property (readonly) NSMutableArray<PPCPPPoint *> *points __attribute__((swift_name("points")));
@property (readonly) NSString *pointsString __attribute__((swift_name("pointsString")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVectorRect")))
@interface PPCPPVectorRect : PPCPPVectorShape
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float rx __attribute__((swift_name("rx")));
@property (readonly) float ry __attribute__((swift_name("ry")));
@property (readonly) float width __attribute__((swift_name("width")));
@property (readonly) float x __attribute__((swift_name("x")));
@property (readonly) float y __attribute__((swift_name("y")));
@end

__attribute__((swift_name("PPMessage")))
@interface PPCPPMessage : PPCBase
@property (class, readonly, getter=companion) PPCPPMessageCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)computeDuration __attribute__((swift_name("computeDuration()")));
- (BOOL)shouldStopForLayerLayerId:(NSString *)layerId __attribute__((swift_name("shouldStopForLayer(layerId:)")));
- (BOOL)shouldStopForVariableVariable:(PPCPPVar<id> *)variable __attribute__((swift_name("shouldStopForVariable(variable:)")));
@property int64_t duration __attribute__((swift_name("duration")));
@property PPCInt * _Nullable expiresAfter __attribute__((swift_name("expiresAfter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMessage.Companion")))
@interface PPCPPMessageCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPMessageCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PPTask")))
@interface PPCPPTask : PPCPPMessage
- (instancetype)initWithLayerIdToStop:(NSString * _Nullable)layerIdToStop variableNameToStop:(NSString * _Nullable)variableNameToStop expires:(BOOL)expires __attribute__((swift_name("init(layerIdToStop:variableNameToStop:expires:)"))) __attribute__((objc_designated_initializer));
- (void)runNow:(int64_t)now __attribute__((swift_name("run(now:)")));
- (BOOL)shouldStopForLayerLayerId:(NSString *)layerId __attribute__((swift_name("shouldStopForLayer(layerId:)")));
- (BOOL)shouldStopForVariableVariable:(PPCPPVar<id> *)variable __attribute__((swift_name("shouldStopForVariable(variable:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceDesc")))
@interface PPCDeviceDesc : PPCBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name type:(NSString *)type width:(int32_t)width height:(int32_t)height density:(float)density platformType:(NSString *)platformType orientation:(NSString *)orientation framePathOrigin:(NSString * _Nullable)framePathOrigin framePathLandscapeOrigin:(NSString * _Nullable)framePathLandscapeOrigin framePath:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)framePath frameBgPath:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPath framePathLandscape:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)framePathLandscape frameBgPathLandscape:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPathLandscape __attribute__((swift_name("init(id:name:type:width:height:density:platformType:orientation:framePathOrigin:framePathLandscapeOrigin:framePath:frameBgPath:framePathLandscape:frameBgPathLandscape:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCDeviceDescCompanion *companion __attribute__((swift_name("companion")));
- (PPCDeviceDesc *)doCopyId:(NSString *)id name:(NSString *)name type:(NSString *)type width:(int32_t)width height:(int32_t)height density:(float)density platformType:(NSString *)platformType orientation:(NSString *)orientation framePathOrigin:(NSString * _Nullable)framePathOrigin framePathLandscapeOrigin:(NSString * _Nullable)framePathLandscapeOrigin framePath:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)framePath frameBgPath:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPath framePathLandscape:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)framePathLandscape frameBgPathLandscape:(PPCKotlinx_serialization_jsonJsonElement * _Nullable)frameBgPathLandscape __attribute__((swift_name("doCopy(id:name:type:width:height:density:platformType:orientation:framePathOrigin:framePathLandscapeOrigin:framePath:frameBgPath:framePathLandscape:frameBgPathLandscape:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) PPCKotlinx_serialization_jsonJsonElement * _Nullable frameBgPath __attribute__((swift_name("frameBgPath")));
@property (readonly) PPCKotlinx_serialization_jsonJsonElement * _Nullable frameBgPathLandscape __attribute__((swift_name("frameBgPathLandscape")));
@property (readonly) PPCKotlinx_serialization_jsonJsonElement * _Nullable framePath __attribute__((swift_name("framePath")));
@property (readonly) PPCKotlinx_serialization_jsonJsonElement * _Nullable framePathLandscape __attribute__((swift_name("framePathLandscape")));
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
@interface PPCDeviceDescCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCDeviceDescCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceFrameHelper")))
@interface PPCDeviceFrameHelper : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deviceFrameHelper __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCDeviceFrameHelper *shared __attribute__((swift_name("shared")));
- (void)setDeviceFrameEnabledValue:(BOOL)value fixedScenes:(NSMutableArray<PPCPPScene *> *)fixedScenes __attribute__((swift_name("setDeviceFrameEnabled(value:fixedScenes:)")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePreset")))
@interface PPCDevicePreset : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)devicePreset __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCDevicePreset *shared __attribute__((swift_name("shared")));
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
@interface PPCPPFont : PPCBase
- (NSString *)getDisplayName __attribute__((swift_name("getDisplayName()")));
- (PPCPPFont *)replaceFamilyFamily:(NSString *)family __attribute__((swift_name("replaceFamily(family:)")));
@property (readonly) NSString * _Nullable family __attribute__((swift_name("family")));
@property (readonly) NSString * _Nullable postscriptName __attribute__((swift_name("postscriptName")));
@property (readonly) float preferredLineHeight __attribute__((swift_name("preferredLineHeight")));
@property (readonly) NSString * _Nullable style __attribute__((swift_name("style")));
@property (readonly) NSString * _Nullable subfamily __attribute__((swift_name("subfamily")));
@property (readonly) NSString * _Nullable weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter")))
@interface PPCPPLayerViewSplitter : PPCBase
- (instancetype)initWithScene:(PPCPPScene *)scene splittingLayerIds:(id)splittingLayerIds __attribute__((swift_name("init(scene:splittingLayerIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPLayerViewSplitterCompanion *companion __attribute__((swift_name("companion")));
- (void)update __attribute__((swift_name("update()")));
@property (readonly) NSMutableArray<PPCPPLayerViewSplitterGroup *> *groups __attribute__((swift_name("groups")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter.Companion")))
@interface PPCPPLayerViewSplitterCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPLayerViewSplitterCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PPLayerViewSplitter.Group")))
@interface PPCPPLayerViewSplitterGroup : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter.NormalLayersGroup")))
@interface PPCPPLayerViewSplitterNormalLayersGroup : PPCPPLayerViewSplitterGroup
- (instancetype)initWithLayers:(NSArray<PPCPPLayer *> *)layers __attribute__((swift_name("init(layers:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSArray<PPCPPLayer *> *layers __attribute__((swift_name("layers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerViewSplitter.SplittingLayer")))
@interface PPCPPLayerViewSplitterSplittingLayer : PPCPPLayerViewSplitterGroup
- (instancetype)initWithLayer:(PPCPPLayer *)layer __attribute__((swift_name("init(layer:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) PPCPPLayer *layer __attribute__((swift_name("layer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieModel")))
@interface PPCPPPieModel : PPCBase
- (instancetype)initWithDeviceInfo:(PPCPPDeviceInfo *)deviceInfo observer:(id<PPCPPEngineObserver> _Nullable)observer fonts:(NSDictionary<NSString *, PPCPPFont *> *)fonts __attribute__((swift_name("init(deviceInfo:observer:fonts:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPPieModelCompanion *companion __attribute__((swift_name("companion")));
- (float)computeScaleFactorWidth:(float)width height:(float)height __attribute__((swift_name("computeScaleFactor(width:height:)")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (NSArray<PPCPPVar<id> *> *)getContextVariables __attribute__((swift_name("getContextVariables()")));
- (PPCPPFont * _Nullable)getFontPostscriptName:(NSString *)postscriptName __attribute__((swift_name("getFont(postscriptName:)")));
- (id)getFonts __attribute__((swift_name("getFonts()")));
- (NSDictionary<NSString *, PPCPPFont *> *)getFontsMap __attribute__((swift_name("getFontsMap()")));
- (NSArray<PPCPPVar<id> *> *)getGlobalVariables __attribute__((swift_name("getGlobalVariables()")));
- (PPCPPScene * _Nullable)getSceneByIdSceneId:(NSString * _Nullable)sceneId __attribute__((swift_name("getSceneById(sceneId:)")));
- (NSArray<PPCPPVar<id> *> *)getSceneVariables __attribute__((swift_name("getSceneVariables()")));
- (BOOL)hasVideoLayer __attribute__((swift_name("hasVideoLayer()")));
- (void)hideSceneScene:(PPCPPScene *)scene isTransition:(BOOL)isTransition __attribute__((swift_name("hideScene(scene:isTransition:)")));
- (void)doInitContextContext:(PPCPPPieContext *)context __attribute__((swift_name("doInitContext(context:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)showFixedSceneScene:(PPCPPScene *)scene isTransition:(BOOL)isTransition __attribute__((swift_name("showFixedScene(scene:isTransition:)")));
- (void)showSceneScene:(PPCPPScene *)scene top:(BOOL)top isTransition:(BOOL)isTransition __attribute__((swift_name("showScene(scene:top:isTransition:)")));
- (void)toggleVariableVisibilityVarName:(NSString *)varName updateLayerVisibility:(void (^ _Nullable)(NSString *, PPCBoolean *))updateLayerVisibility __attribute__((swift_name("toggleVariableVisibility(varName:updateLayerVisibility:)")));
@property (readonly) NSDictionary<NSString *, PPCPPLayerType *> *allResourceIds __attribute__((swift_name("allResourceIds")));
@property (readonly) NSSet<NSString *> *allThumbnailIds __attribute__((swift_name("allThumbnailIds")));
@property int32_t baseModelVersion __attribute__((swift_name("baseModelVersion")));
@property (readonly) PPCPPDeviceInfo *deviceInfo __attribute__((swift_name("deviceInfo")));
@property (readonly) NSMutableArray<PPCPPScene *> *fixedScenes __attribute__((swift_name("fixedScenes")));
@property (readonly) NSDictionary<NSString *, PPCPPFont *> *fonts __attribute__((swift_name("fonts")));
@property float height __attribute__((swift_name("height")));
@property (readonly) PPCPPScene *initialScene __attribute__((swift_name("initialScene")));
@property NSString * _Nullable initialSceneId __attribute__((swift_name("initialSceneId")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property int32_t modelVersion __attribute__((swift_name("modelVersion")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) id<PPCPPEngineObserver> _Nullable observer __attribute__((swift_name("observer")));
@property (readonly) BOOL requiresMicPermission __attribute__((swift_name("requiresMicPermission")));
@property (readonly) NSMutableArray<PPCPPScene *> *scenes __attribute__((swift_name("scenes")));
@property NSString * _Nullable selectedSceneId __attribute__((swift_name("selectedSceneId")));
@property PPCPPScene * _Nullable statusBarScene __attribute__((swift_name("statusBarScene")));
@property (readonly) NSSet<NSString *> *usedFontNames __attribute__((swift_name("usedFontNames")));
@property float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieModel.Companion")))
@interface PPCPPPieModelCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPPieModelCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MODEL_VERSION __attribute__((swift_name("MODEL_VERSION")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlayControlGestureOptions")))
@interface PPCPPPlayControlGestureOptions : PPCBase
- (instancetype)initWithTwoFingerDoubleTapEnabled:(BOOL)twoFingerDoubleTapEnabled threeFingerTapEnabled:(BOOL)threeFingerTapEnabled shakeEnabled:(BOOL)shakeEnabled __attribute__((swift_name("init(twoFingerDoubleTapEnabled:threeFingerTapEnabled:shakeEnabled:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL shakeEnabled __attribute__((swift_name("shakeEnabled")));
@property (readonly) BOOL threeFingerTapEnabled __attribute__((swift_name("threeFingerTapEnabled")));
@property (readonly) BOOL twoFingerDoubleTapEnabled __attribute__((swift_name("twoFingerDoubleTapEnabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPScene")))
@interface PPCPPScene : PPCBase
- (NSSet<NSString *> *)consumeModifiedLayerIdsIncludeMaskedLayers:(BOOL)includeMaskedLayers __attribute__((swift_name("consumeModifiedLayerIds(includeMaskedLayers:)")));
- (NSSet<PPCPPContainerLayer *> *)consumeReorderedParentLayers __attribute__((swift_name("consumeReorderedParentLayers()")));
- (void)destroy __attribute__((swift_name("destroy()")));
- (void)forEachLayerFn:(void (^)(PPCPPLayer *))fn __attribute__((swift_name("forEachLayer(fn:)")));
- (PPCPPLayer * _Nullable)getLayerByIdId:(NSString * _Nullable)id __attribute__((swift_name("getLayerById(id:)")));
- (BOOL)handleKeyEventKeyCode:(PPCPPKeyCode *)keyCode now:(int64_t)now __attribute__((swift_name("handleKeyEvent(keyCode:now:)")));
- (void)handleReceivedMessageChannel:(PPCPPMsgChannel *)channel scope:(NSString * _Nullable)scope messageId:(NSString *)messageId value:(NSString * _Nullable)value now:(int64_t)now __attribute__((swift_name("handleReceivedMessage(channel:scope:messageId:value:now:)")));
- (void)handleShakeEventNow:(int64_t)now __attribute__((swift_name("handleShakeEvent(now:)")));
- (BOOL)hasAutoLayoutEnabledChild __attribute__((swift_name("hasAutoLayoutEnabledChild()")));
- (void)doInitContextPieContext:(PPCPPPieContext *)pieContext __attribute__((swift_name("doInitContext(pieContext:)")));
- (BOOL)is3DRotatingLayerLayerId:(NSString *)layerId __attribute__((swift_name("is3DRotatingLayer(layerId:)")));
- (void)prepareTransitionNow:(int64_t)now __attribute__((swift_name("prepareTransition(now:)")));
- (void)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetMediaState __attribute__((swift_name("resetMediaState()")));
- (void)startNow:(int64_t)now includePreTransition:(BOOL)includePreTransition __attribute__((swift_name("start(now:includePreTransition:)")));
@property (readonly) NSSet<PPCPPChangeTarget *> *changeTargets __attribute__((swift_name("changeTargets")));
@property (readonly, getter=doCopy) PPCPPScene * _Nullable (^copy)(void) __attribute__((swift_name("copy")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isOpaque __attribute__((swift_name("isOpaque")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSSet<NSString *> *nextSceneIds __attribute__((swift_name("nextSceneIds")));
@property (readonly) NSDictionary<NSString *, PPCPPLayerType *> *requiredMediaResourceIds __attribute__((swift_name("requiredMediaResourceIds")));
@property (readonly) PPCPPContainerLayer * _Nullable rootLayer __attribute__((swift_name("rootLayer")));
@property (readonly) NSString * _Nullable thumbnailId __attribute__((swift_name("thumbnailId")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprParseError")))
@interface PPCPPExprParseError : PPCBase
- (instancetype)initWithPosition:(int32_t)position code:(NSString *)code args:(PPCKotlinArray<NSString *> *)args message:(NSString *)message __attribute__((swift_name("init(position:code:args:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPExprParseErrorCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PPCKotlinArray<NSString *> *args __attribute__((swift_name("args")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPExprParseError.Companion")))
@interface PPCPPExprParseErrorCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPExprParseErrorCompanion *shared __attribute__((swift_name("shared")));
- (PPCPPExprParseError *)errorPosition:(int32_t)position code:(NSString *)code args:(PPCKotlinArray<NSString *> *)args __attribute__((swift_name("error(position:code:args:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPClock")))
@interface PPCPPClock : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addObserverObserver:(id<PPCPPClockObserver>)observer __attribute__((swift_name("addObserver(observer:)")));
- (BOOL)isPaused __attribute__((swift_name("isPaused()")));
- (void)pause __attribute__((swift_name("pause()")));
- (void)removeObserverObserver:(id<PPCPPClockObserver>)observer __attribute__((swift_name("removeObserver(observer:)")));
- (void)resetTime:(int32_t)time __attribute__((swift_name("reset(time:)")));
- (void)resetTime_:(int64_t)time __attribute__((swift_name("reset(time_:)")));
- (void)resume __attribute__((swift_name("resume()")));
- (int64_t)tick __attribute__((swift_name("tick()")));
@property (readonly) int64_t now __attribute__((swift_name("now")));
@property (readonly) int32_t nowToInt __attribute__((swift_name("nowToInt")));
@property double scale __attribute__((swift_name("scale")));
@end

__attribute__((swift_name("PPClockObserver")))
@protocol PPCPPClockObserver
@required
- (void)onClockScaleChangeScale:(double)scale __attribute__((swift_name("onClockScaleChange(scale:)")));
- (void)onPause __attribute__((swift_name("onPause()")));
- (void)onResumeClockScale:(double)clockScale __attribute__((swift_name("onResume(clockScale:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMessageBus")))
@interface PPCPPMessageBus : PPCBase
- (instancetype)initWithTaskRunner:(id<PPCPPMessageBusTaskRunner>)taskRunner __attribute__((swift_name("init(taskRunner:)"))) __attribute__((objc_designated_initializer));
- (void)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)removeMessageMsg:(PPCPPMessage *)msg __attribute__((swift_name("removeMessage(msg:)")));
- (void)removeMessageOfLayerLayerId:(NSString *)layerId removingTaskNo:(int32_t)removingTaskNo __attribute__((swift_name("removeMessageOfLayer(layerId:removingTaskNo:)")));
- (void)removeMessageOfVariableVariable:(PPCPPVar<id> *)variable removingTaskNo:(int32_t)removingTaskNo __attribute__((swift_name("removeMessageOfVariable(variable:removingTaskNo:)")));
- (void)removeRealClockTaskMsg:(PPCPPMessage *)msg __attribute__((swift_name("removeRealClockTask(msg:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (int32_t)scheduleRealClockTaskMessage:(PPCPPMessage *)message delay:(int32_t)delay __attribute__((swift_name("scheduleRealClockTask(message:delay:)")));
- (int32_t)sendMessage:(PPCPPMessage *)message repeatDef:(PPCPPRepeatDef * _Nullable)repeatDef delay:(int64_t)delay startCallback:(void (^ _Nullable)(PPCLong *, PPCInt *))startCallback __attribute__((swift_name("send(message:repeatDef:delay:startCallback:)")));
@end

__attribute__((swift_name("PPMessageBusTaskRunner")))
@protocol PPCPPMessageBusTaskRunner
@required
- (void)onMessageMessage:(PPCPPMessage *)message now:(int64_t)now __attribute__((swift_name("onMessage(message:now:)")));
@end

__attribute__((swift_name("PPOnMessageListener")))
@protocol PPCPPOnMessageListener
@required
- (void)onMessageChannel:(PPCPPMsgChannel *)channel messageId:(NSString *)messageId value:(NSString * _Nullable)value __attribute__((swift_name("onMessage(channel:messageId:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieContext")))
@interface PPCPPPieContext : PPCBase
- (instancetype)initWithDensity:(float)density replayMode:(BOOL)replayMode __attribute__((swift_name("init(density:replayMode:)"))) __attribute__((objc_designated_initializer));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) BOOL replayMode __attribute__((swift_name("replayMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayer")))
@interface PPCPPPiePlayer : PPCBase
- (instancetype)initWithPie:(PPCPPPieModel *)pie initialScene:(PPCPPScene *)initialScene clock:(PPCPPClock *)clock playerDelegate:(id<PPCPlayerDelegate>)playerDelegate hotspotHintsEnabled:(BOOL)hotspotHintsEnabled sensorManager:(id<PPCPPSensorManager>)sensorManager voiceInterface:(id<PPCPPVoiceInterface> _Nullable)voiceInterface speechInterface:(id<PPCPPSpeechInterface> _Nullable)speechInterface record:(BOOL)record broadcast:(BOOL)broadcast forceDisableWatermark:(BOOL)forceDisableWatermark __attribute__((swift_name("init(pie:initialScene:clock:playerDelegate:hotspotHintsEnabled:sensorManager:voiceInterface:speechInterface:record:broadcast:forceDisableWatermark:)"))) __attribute__((objc_designated_initializer));
- (void)focusOutCurrentNow:(int64_t)now __attribute__((swift_name("focusOutCurrent(now:)")));
- (PPCPPPieRecord * _Nullable)getRecord __attribute__((swift_name("getRecord()")));
- (PPCPPScene * _Nullable)getRunningScene __attribute__((swift_name("getRunningScene()")));
- (BOOL)handleKeyDownKeyCode:(PPCPPKeyCode *)keyCode __attribute__((swift_name("handleKeyDown(keyCode:)")));
- (void)handleKeyboardShown:(BOOL)shown keyboardHeight:(int32_t)keyboardHeight now:(int64_t)now __attribute__((swift_name("handleKeyboard(shown:keyboardHeight:now:)")));
- (void)handleMessageMessageId:(NSString *)messageId channel:(PPCPPMsgChannel *)channel value:(NSString * _Nullable)value __attribute__((swift_name("handleMessage(messageId:channel:value:)")));
- (void)handleMouseMoveMouseX:(float)mouseX mouseY:(float)mouseY __attribute__((swift_name("handleMouseMove(mouseX:mouseY:)")));
- (void)handleShake __attribute__((swift_name("handleShake()")));
- (void)onTouchEventTouchEvent:(PPCPPTouchEvent *)touchEvent __attribute__((swift_name("onTouchEvent(touchEvent:)")));

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
@property (readonly) PPCPPEventChannel<PPCPPPiePlayerEvent *> *channel __attribute__((swift_name("channel")));
@property (readonly) PPCPPPieModel *pie __attribute__((swift_name("pie")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPiePlayer.PlayerDelayRunner")))
@interface PPCPPPiePlayerPlayerDelayRunner : PPCBase
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
@interface PPCPPPlayEvent : PPCBase
- (instancetype)initWithEventId:(int32_t)eventId delay:(int32_t)delay startTime:(int32_t)startTime endTime:(int32_t)endTime sceneId:(NSString *)sceneId namespace:(NSString *)namespace_ targetType:(NSString *)targetType targetId:(NSString *)targetId count:(int32_t)count averageDuration:(int32_t)averageDuration parentEventId:(PPCInt * _Nullable)parentEventId __attribute__((swift_name("init(eventId:delay:startTime:endTime:sceneId:namespace:targetType:targetId:count:averageDuration:parentEventId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 eventId:(int32_t)eventId delay:(int32_t)delay startTime:(int32_t)startTime endTime:(int32_t)endTime sceneId:(NSString * _Nullable)sceneId namespace:(NSString * _Nullable)namespace_ targetType:(NSString * _Nullable)targetType targetId:(NSString * _Nullable)targetId count:(int32_t)count averageDuration:(int32_t)averageDuration parentEventId:(PPCInt * _Nullable)parentEventId lastMergedStartTime:(int32_t)lastMergedStartTime serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:eventId:delay:startTime:endTime:sceneId:namespace:targetType:targetId:count:averageDuration:parentEventId:lastMergedStartTime:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPPlayEventCompanion *companion __attribute__((swift_name("companion")));
- (void)mergeStartTime:(int32_t)startTime endTime:(int32_t)endTime __attribute__((swift_name("merge(startTime:endTime:)")));
@property int32_t averageDuration __attribute__((swift_name("averageDuration")));
@property int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t delay __attribute__((swift_name("delay")));
@property int32_t endTime __attribute__((swift_name("endTime")));
@property (readonly) int32_t eventId __attribute__((swift_name("eventId")));
@property int32_t lastMergedStartTime __attribute__((swift_name("lastMergedStartTime")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) PPCInt * _Nullable parentEventId __attribute__((swift_name("parentEventId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) int32_t startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString *targetId __attribute__((swift_name("targetId")));
@property (readonly) NSString *targetType __attribute__((swift_name("targetType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPlayEvent.Companion")))
@interface PPCPPPlayEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPPlayEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *TARGET_TYPE_RESPONSE __attribute__((swift_name("TARGET_TYPE_RESPONSE")));
@property (readonly) NSString *TARGET_TYPE_TRIGGER __attribute__((swift_name("TARGET_TYPE_TRIGGER")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneContext")))
@interface PPCPPSceneContext : PPCBase
- (instancetype)initWithPieContext:(PPCPPPieContext *)pieContext taskScheduler:(PPCPPMessageBus *)taskScheduler __attribute__((swift_name("init(pieContext:taskScheduler:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCPPPieContext *pieContext __attribute__((swift_name("pieContext")));
@property (readonly) PPCPPMessageBus *taskScheduler __attribute__((swift_name("taskScheduler")));
@end

__attribute__((swift_name("PlayerDelegate")))
@protocol PPCPlayerDelegate
@required
- (void)addSceneViewScene:(PPCPPScene *)scene top:(BOOL)top __attribute__((swift_name("addSceneView(scene:top:)")));
- (void)broadcastType:(NSString *)type data:(NSString *)data __attribute__((swift_name("broadcast(type:data:)")));
- (void)emitBarCodeScannedData:(NSString *)data __attribute__((swift_name("emitBarCodeScanned(data:)")));
- (void)openUrlUrlString:(NSString *)urlString inAppBrowser:(BOOL)inAppBrowser __attribute__((swift_name("openUrl(urlString:inAppBrowser:)")));
- (void)removeSceneViewScene:(PPCPPScene *)scene __attribute__((swift_name("removeSceneView(scene:)")));
- (void)resetBackgroundColor __attribute__((swift_name("resetBackgroundColor()")));
- (void)sendChannel:(PPCPPMsgChannel *)channel msg:(PPCPPMsg *)msg __attribute__((swift_name("send(channel:msg:)")));
- (void)setBackgroundColorColor:(PPCPPColor *)color __attribute__((swift_name("setBackgroundColor(color:)")));
- (void)showControl __attribute__((swift_name("showControl()")));
- (void)showFixedSceneScene:(PPCPPScene *)scene __attribute__((swift_name("showFixedScene(scene:)")));
- (void)vibrateIosType:(PPCPPIosVibrateType *)iosType androidType:(PPCPPAndroidVibrateType *)androidType __attribute__((swift_name("vibrate(iosType:androidType:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayOptions")))
@interface PPCReplayOptions : PPCBase
- (instancetype)initWithAutoPlay:(PPCBoolean * _Nullable)autoPlay onProgress:(void (^ _Nullable)(PPCInt *))onProgress onEnd:(void (^ _Nullable)(void))onEnd onPropChange:(void (^ _Nullable)(NSString *, NSString *, NSString *))onPropChange onVarChange:(void (^ _Nullable)(NSString *, NSString *))onVarChange onOneTimeTrigger:(void (^ _Nullable)(PPCInt *))onOneTimeTrigger onSceneChange:(void (^ _Nullable)(NSString *))onSceneChange onFirstFrame:(void (^ _Nullable)(void))onFirstFrame onInitialSceneResourceLoaded:(void (^ _Nullable)(PPCInt *, PPCInt *))onInitialSceneResourceLoaded __attribute__((swift_name("init(autoPlay:onProgress:onEnd:onPropChange:onVarChange:onOneTimeTrigger:onSceneChange:onFirstFrame:onInitialSceneResourceLoaded:)"))) __attribute__((objc_designated_initializer));
- (PPCReplayOptions *)doCopyAutoPlay:(PPCBoolean * _Nullable)autoPlay onProgress:(void (^ _Nullable)(PPCInt *))onProgress onEnd:(void (^ _Nullable)(void))onEnd onPropChange:(void (^ _Nullable)(NSString *, NSString *, NSString *))onPropChange onVarChange:(void (^ _Nullable)(NSString *, NSString *))onVarChange onOneTimeTrigger:(void (^ _Nullable)(PPCInt *))onOneTimeTrigger onSceneChange:(void (^ _Nullable)(NSString *))onSceneChange onFirstFrame:(void (^ _Nullable)(void))onFirstFrame onInitialSceneResourceLoaded:(void (^ _Nullable)(PPCInt *, PPCInt *))onInitialSceneResourceLoaded __attribute__((swift_name("doCopy(autoPlay:onProgress:onEnd:onPropChange:onVarChange:onOneTimeTrigger:onSceneChange:onFirstFrame:onInitialSceneResourceLoaded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCBoolean * _Nullable autoPlay __attribute__((swift_name("autoPlay")));
@property (readonly) void (^ _Nullable onEnd)(void) __attribute__((swift_name("onEnd")));
@property (readonly) void (^ _Nullable onFirstFrame)(void) __attribute__((swift_name("onFirstFrame")));
@property (readonly) void (^ _Nullable onInitialSceneResourceLoaded)(PPCInt *, PPCInt *) __attribute__((swift_name("onInitialSceneResourceLoaded")));
@property (readonly) void (^ _Nullable onOneTimeTrigger)(PPCInt *) __attribute__((swift_name("onOneTimeTrigger")));
@property (readonly) void (^ _Nullable onProgress)(PPCInt *) __attribute__((swift_name("onProgress")));
@property (readonly) void (^ _Nullable onPropChange)(NSString *, NSString *, NSString *) __attribute__((swift_name("onPropChange")));
@property (readonly) void (^ _Nullable onSceneChange)(NSString *) __attribute__((swift_name("onSceneChange")));
@property (readonly) void (^ _Nullable onVarChange)(NSString *, NSString *) __attribute__((swift_name("onVarChange")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Replayer")))
@interface PPCReplayer : PPCBase
- (instancetype)initWithPie:(PPCPPPieModel *)pie initialScene:(PPCPPScene *)initialScene clock:(PPCPPClock *)clock delegate:(id<PPCReplayerDelegate>)delegate record:(PPCPPPieRecord * _Nullable)record options:(PPCReplayOptions * _Nullable)options __attribute__((swift_name("init(pie:initialScene:clock:delegate:record:options:)"))) __attribute__((objc_designated_initializer));
- (int32_t)getEndTime __attribute__((swift_name("getEndTime()")));
- (int64_t)getSceneAddedTimeEvent:(PPCPPSceneChangeEvent *)event __attribute__((swift_name("getSceneAddedTime(event:)")));
- (int32_t)getStartTime __attribute__((swift_name("getStartTime()")));
- (BOOL)jumpTime:(int32_t)time __attribute__((swift_name("jump(time:)")));
- (void)onColorPropChangeSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName value:(PPCPPColor *)value __attribute__((swift_name("onColorPropChange(sceneId:layerId:propName:value:)")));
- (void)onColorVarChangeSceneId:(NSString *)sceneId varName:(NSString *)varName value:(PPCPPColor *)value __attribute__((swift_name("onColorVarChange(sceneId:varName:value:)")));
- (void)onExtraPropChangeSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName value:(NSString *)value __attribute__((swift_name("onExtraPropChange(sceneId:layerId:propName:value:)")));
- (void)onInteractionEventIndex:(int32_t)index __attribute__((swift_name("onInteractionEvent(index:)")));
- (void)onMouseActionAction:(NSString *)action forward:(BOOL)forward __attribute__((swift_name("onMouseAction(action:forward:)")));
- (void)onMouseMoveX:(int32_t)x y:(int32_t)y __attribute__((swift_name("onMouseMove(x:y:)")));
- (void)onNumberPropChangeSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName value:(float)value __attribute__((swift_name("onNumberPropChange(sceneId:layerId:propName:value:)")));
- (void)onNumberVarChangeSceneId:(NSString *)sceneId varName:(NSString *)varName value:(float)value __attribute__((swift_name("onNumberVarChange(sceneId:varName:value:)")));
- (void)onRenderEventEvent:(PPCPPRenderEvent *)event forward:(BOOL)forward __attribute__((swift_name("onRenderEvent(event:forward:)")));
- (void)onStringVarChangeSceneId:(NSString *)sceneId varName:(NSString *)varName value:(NSString *)value __attribute__((swift_name("onStringVarChange(sceneId:varName:value:)")));
- (void)postProgress __attribute__((swift_name("postProgress()")));
- (void)preProgress __attribute__((swift_name("preProgress()")));
- (void)progressFromTime:(int32_t)fromTime toTime:(int32_t)toTime __attribute__((swift_name("progress(fromTime:toTime:)")));
- (void)putData:(NSString *)data __attribute__((swift_name("put(data:)")));
- (void)setReplayDataData:(NSString *)data __attribute__((swift_name("setReplayData(data:)")));
- (void)start __attribute__((swift_name("start()")));
@end

__attribute__((swift_name("ReplayerDelegate")))
@protocol PPCReplayerDelegate
@required
- (void)addSceneViewScene:(PPCPPScene *)scene top:(BOOL)top fixed:(BOOL)fixed __attribute__((swift_name("addSceneView(scene:top:fixed:)")));
- (void)onMouseActionAction:(NSString *)action forward:(BOOL)forward __attribute__((swift_name("onMouseAction(action:forward:)")));
- (void)onMouseMoveX:(int32_t)x y:(int32_t)y __attribute__((swift_name("onMouseMove(x:y:)")));
- (void)removeSceneViewScene:(PPCPPScene *)scene __attribute__((swift_name("removeSceneView(scene:)")));
- (void)showFixedSceneScene:(PPCPPScene *)scene __attribute__((swift_name("showFixedScene(scene:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileOptions")))
@interface PPCProfileOptions : PPCBase
- (instancetype)initWithIntervalFrames:(int32_t)intervalFrames onCpuUsage:(NSString *(^ _Nullable)(void))onCpuUsage onMemoryUsage:(NSString *(^ _Nullable)(void))onMemoryUsage __attribute__((swift_name("init(intervalFrames:onCpuUsage:onMemoryUsage:)"))) __attribute__((objc_designated_initializer));
- (PPCProfileOptions *)doCopyIntervalFrames:(int32_t)intervalFrames onCpuUsage:(NSString *(^ _Nullable)(void))onCpuUsage onMemoryUsage:(NSString *(^ _Nullable)(void))onMemoryUsage __attribute__((swift_name("doCopy(intervalFrames:onCpuUsage:onMemoryUsage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t intervalFrames __attribute__((swift_name("intervalFrames")));
@property (readonly) NSString *(^ _Nullable onCpuUsage)(void) __attribute__((swift_name("onCpuUsage")));
@property (readonly) NSString *(^ _Nullable onMemoryUsage)(void) __attribute__((swift_name("onMemoryUsage")));
@end

__attribute__((swift_name("PPValueProvider")))
@protocol PPCPPValueProvider
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("PPProperty")))
@interface PPCPPProperty<T> : PPCBase <PPCPPValueProvider>
- (instancetype)initWithParentId:(NSString *)parentId name:(NSString *)name key:(PPCPPLayerProperty * _Nullable)key initialValue:(T)initialValue observer:(id<PPCPPPropertyObserver> _Nullable)observer __attribute__((swift_name("init(parentId:name:key:initialValue:observer:)"))) __attribute__((objc_designated_initializer));
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
@property (readonly) PPCPPLayerProperty * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPColorProperty")))
@interface PPCPPColorProperty : PPCPPProperty<PPCPPColor *>
- (instancetype)initWithParentId:(NSString *)parentId name:(NSString *)name key:(PPCPPLayerProperty * _Nullable)key initialValue:(id)initialValue observer:(id<PPCPPPropertyObserver> _Nullable)observer __attribute__((swift_name("init(parentId:name:key:initialValue:observer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setImmediateValue:(PPCPPColor *)value __attribute__((swift_name("setImmediate(value:)")));
- (void)setInitialValue:(PPCPPColor *)value __attribute__((swift_name("setInitial(value:)")));
- (void)stop __attribute__((swift_name("stop()")));
- (NSString *)toHex __attribute__((swift_name("toHex()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t blue __attribute__((swift_name("blue")));
@property (readonly) PPCPPColor *color __attribute__((swift_name("color")));
@property (readonly) int32_t green __attribute__((swift_name("green")));
@property BOOL modified __attribute__((swift_name("modified")));
@property (readonly) id<PPCPPPropertyObserver> o __attribute__((swift_name("o")));
@property (readonly) int32_t red __attribute__((swift_name("red")));
@property (readonly) PPCPPColor *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFloatProperty")))
@interface PPCPPFloatProperty : PPCPPProperty<PPCFloat *>
- (instancetype)initWithParentId:(NSString *)parentId name:(NSString *)name key:(PPCPPLayerProperty * _Nullable)key initialValue:(id)initialValue observer:(id<PPCPPPropertyObserver> _Nullable)observer __attribute__((swift_name("init(parentId:name:key:initialValue:observer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (float)curValScaleFactor:(float)scaleFactor __attribute__((swift_name("curVal(scaleFactor:)")));
- (BOOL)progressNow:(int64_t)now __attribute__((swift_name("progress(now:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)setImmediateValue:(float)value __attribute__((swift_name("setImmediate(value:)")));
- (void)stop __attribute__((swift_name("stop()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isChanging __attribute__((swift_name("isChanging")));
@property (readonly) NSString *parentId __attribute__((swift_name("parentId")));
@property (readonly) PPCFloat *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPLayerProperty")))
@interface PPCPPLayerProperty : PPCKotlinEnum<PPCPPLayerProperty *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCPPLayerProperty *x __attribute__((swift_name("x")));
@property (class, readonly) PPCPPLayerProperty *y __attribute__((swift_name("y")));
@property (class, readonly) PPCPPLayerProperty *width __attribute__((swift_name("width")));
@property (class, readonly) PPCPPLayerProperty *height __attribute__((swift_name("height")));
@property (class, readonly) PPCPPLayerProperty *rotation __attribute__((swift_name("rotation")));
@property (class, readonly) PPCPPLayerProperty *rotation3d __attribute__((swift_name("rotation3d")));
@property (class, readonly) PPCPPLayerProperty *rotation3dx __attribute__((swift_name("rotation3dx")));
@property (class, readonly) PPCPPLayerProperty *rotation3dy __attribute__((swift_name("rotation3dy")));
@property (class, readonly) PPCPPLayerProperty *opacity __attribute__((swift_name("opacity")));
@property (class, readonly) PPCPPLayerProperty *order __attribute__((swift_name("order")));
@property (class, readonly) PPCPPLayerProperty *fillColor __attribute__((swift_name("fillColor")));
@property (class, readonly) PPCPPLayerProperty *fillOpacity __attribute__((swift_name("fillOpacity")));
@property (class, readonly) PPCPPLayerProperty *fillSolidRate __attribute__((swift_name("fillSolidRate")));
@property (class, readonly) PPCPPLayerProperty *fillImageRate __attribute__((swift_name("fillImageRate")));
@property (class, readonly) PPCPPLayerProperty *radius __attribute__((swift_name("radius")));
@property (class, readonly) PPCPPLayerProperty *radiusTopLeft __attribute__((swift_name("radiusTopLeft")));
@property (class, readonly) PPCPPLayerProperty *radiusTopRight __attribute__((swift_name("radiusTopRight")));
@property (class, readonly) PPCPPLayerProperty *radiusBottomLeft __attribute__((swift_name("radiusBottomLeft")));
@property (class, readonly) PPCPPLayerProperty *radiusBottomRight __attribute__((swift_name("radiusBottomRight")));
@property (class, readonly) PPCPPLayerProperty *borderColor __attribute__((swift_name("borderColor")));
@property (class, readonly) PPCPPLayerProperty *borderOpacity __attribute__((swift_name("borderOpacity")));
@property (class, readonly) PPCPPLayerProperty *borderWidth __attribute__((swift_name("borderWidth")));
@property (class, readonly) PPCPPLayerProperty *shadowColor __attribute__((swift_name("shadowColor")));
@property (class, readonly) PPCPPLayerProperty *shadowOpacity __attribute__((swift_name("shadowOpacity")));
@property (class, readonly) PPCPPLayerProperty *shadowOffsetX __attribute__((swift_name("shadowOffsetX")));
@property (class, readonly) PPCPPLayerProperty *shadowOffsetY __attribute__((swift_name("shadowOffsetY")));
@property (class, readonly) PPCPPLayerProperty *shadowBlur __attribute__((swift_name("shadowBlur")));
@property (class, readonly) PPCPPLayerProperty *shadowSpread __attribute__((swift_name("shadowSpread")));
@property (class, readonly) PPCPPLayerProperty *backgroundBlur __attribute__((swift_name("backgroundBlur")));
@property (class, readonly) PPCPPLayerProperty *scrollX __attribute__((swift_name("scrollX")));
@property (class, readonly) PPCPPLayerProperty *scrollY __attribute__((swift_name("scrollY")));
@property (class, readonly) PPCPPLayerProperty *scaleX __attribute__((swift_name("scaleX")));
@property (class, readonly) PPCPPLayerProperty *scaleY __attribute__((swift_name("scaleY")));
@property (class, readonly) PPCPPLayerProperty *text __attribute__((swift_name("text")));
@property (class, readonly) PPCPPLayerProperty *currentTime __attribute__((swift_name("currentTime")));
@property (class, readonly) PPCPPLayerProperty *totalTime __attribute__((swift_name("totalTime")));
@property (class, readonly) PPCPPLayerProperty *highlight __attribute__((swift_name("highlight")));
@property (class, readonly) PPCPPLayerProperty *volume __attribute__((swift_name("volume")));
+ (PPCKotlinArray<PPCPPLayerProperty *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCPPLayerProperty *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PPPropertyObserver")))
@protocol PPCPPPropertyObserver
@required
- (void)onPropertyEndChangeProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("onPropertyEndChange(property:)")));
- (void)onPropertyModifiedProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("onPropertyModified(property:)")));
- (void)onPropertyWillChangeProperty:(PPCPPProperty<id> *)property __attribute__((swift_name("onPropertyWillChange(property:)")));
@end

__attribute__((swift_name("PPStringProperty")))
@interface PPCPPStringProperty : PPCBase <PPCPPValueProvider>
- (NSString *)curVal __attribute__((swift_name("curVal()")));
- (NSString *)initialVal __attribute__((swift_name("initialVal()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPathSegmentData")))
@interface PPCPPPathSegmentData : PPCBase
@property (readonly) NSMutableArray<PPCFloat *> *data __attribute__((swift_name("data")));
@property (readonly) PPCPPPathSegmentType *type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("PPPieDecorator")))
@protocol PPCPPPieDecorator
@required
- (void)onSceneLayersReadSceneId:(NSString *)sceneId rootLayer:(PPCPPContainerLayer *)rootLayer pie:(PPCPPPieModel *)pie __attribute__((swift_name("onSceneLayersRead(sceneId:rootLayer:pie:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPieReader")))
@interface PPCPPPieReader : PPCBase
- (instancetype)initWithPieDecorator:(id<PPCPPPieDecorator> _Nullable)pieDecorator __attribute__((swift_name("init(pieDecorator:)"))) __attribute__((objc_designated_initializer));
- (PPCPPPieModel *)readPieJson:(id<PPCPPJson>)json engineObserver:(id<PPCPPEngineObserver> _Nullable)engineObserver gestureOptions:(PPCPPPlayControlGestureOptions *)gestureOptions disableVariableDisplay:(BOOL)disableVariableDisplay disableDeviceFrameDisplay:(BOOL)disableDeviceFrameDisplay forceDisableWatermark:(BOOL)forceDisableWatermark __attribute__((swift_name("readPie(json:engineObserver:gestureOptions:disableVariableDisplay:disableDeviceFrameDisplay:forceDisableWatermark:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaState")))
@interface PPCMediaState : PPCBase
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId isPlaying:(BOOL)isPlaying isRepeating:(BOOL)isRepeating time:(float)time volume:(float)volume __attribute__((swift_name("init(sceneId:layerId:isPlaying:isRepeating:time:volume:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCMediaStateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL isPlaying __attribute__((swift_name("isPlaying")));
@property (readonly) BOOL isRepeating __attribute__((swift_name("isRepeating")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) float time __attribute__((swift_name("time")));
@property (readonly) float volume __attribute__((swift_name("volume")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MediaState.Companion")))
@interface PPCMediaStateCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCMediaStateCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("PPRenderEvent")))
@interface PPCPPRenderEvent : PPCBase
@property (class, readonly, getter=companion) PPCPPRenderEventCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFixedSceneChangeEvent")))
@interface PPCPPFixedSceneChangeEvent : PPCPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId add:(BOOL)add top:(BOOL)top __attribute__((swift_name("init(sceneId:add:top:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPFixedSceneChangeEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL add __attribute__((swift_name("add")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) BOOL top __attribute__((swift_name("top")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFixedSceneChangeEvent.Companion")))
@interface PPCPPFixedSceneChangeEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPFixedSceneChangeEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPInputFocusEvent")))
@interface PPCPPInputFocusEvent : PPCPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId focus:(BOOL)focus __attribute__((swift_name("init(sceneId:layerId:focus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPInputFocusEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL focus __attribute__((swift_name("focus")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPInputFocusEvent.Companion")))
@interface PPCPPInputFocusEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPInputFocusEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosEffectEvent")))
@interface PPCPPIosEffectEvent : PPCPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId style:(NSString *)style duration:(int32_t)duration __attribute__((swift_name("init(sceneId:layerId:style:duration:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPIosEffectEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t duration __attribute__((swift_name("duration")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) NSString *style __attribute__((swift_name("style")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIosEffectEvent.Companion")))
@interface PPCPPIosEffectEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPIosEffectEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaCommandEvent")))
@interface PPCPPMediaCommandEvent : PPCPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId layerId:(NSString *)layerId command:(NSString *)command __attribute__((swift_name("init(sceneId:layerId:command:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPMediaCommandEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *command __attribute__((swift_name("command")));
@property (readonly) NSString *layerId __attribute__((swift_name("layerId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPMediaCommandEvent.Companion")))
@interface PPCPPMediaCommandEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPMediaCommandEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("PPPieRecord")))
@interface PPCPPPieRecord : PPCBase
- (void)attachStartTime:(int32_t)startTime endTime:(int32_t)endTime playEvents:(PPCPPValueHistory<PPCPPPlayEvent *> *)playEvents renderEvents:(PPCPPValueHistory<PPCPPRenderEvent *> *)renderEvents mousePositions:(PPCPPValueHistory<PPCPPPoint *> *)mousePositions mouseActions:(PPCPPValueHistory<NSString *> *)mouseActions numberValues:(PPCMutableDictionary<NSString *, PPCPPValueHistory<PPCFloat *> *> *)numberValues colorValues:(PPCMutableDictionary<NSString *, PPCPPValueHistory<PPCInt *> *> *)colorValues stringValues:(PPCMutableDictionary<NSString *, PPCPPValueHistory<NSString *> *> *)stringValues __attribute__((swift_name("attach(startTime:endTime:playEvents:renderEvents:mousePositions:mouseActions:numberValues:colorValues:stringValues:)")));
- (BOOL)empty __attribute__((swift_name("empty()")));
- (void)getChangesTimeFrom:(int32_t)timeFrom timeTo:(int32_t)timeTo replayer:(PPCReplayer *)replayer __attribute__((swift_name("getChanges(timeFrom:timeTo:replayer:)")));
- (NSString * _Nullable)getColorPropValueSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName time:(int32_t)time __attribute__((swift_name("getColorPropValue(sceneId:layerId:propName:time:)")));
- (PPCKotlinArray<PPCPPPlayEvent *> *)getEvents __attribute__((swift_name("getEvents()")));
- (PPCFloat * _Nullable)getFloatPropValueSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName time:(int32_t)time __attribute__((swift_name("getFloatPropValue(sceneId:layerId:propName:time:)")));
- (NSString * _Nullable)getStringPropValueSceneId:(NSString *)sceneId layerId:(NSString *)layerId propName:(NSString *)propName time:(int32_t)time __attribute__((swift_name("getStringPropValue(sceneId:layerId:propName:time:)")));
- (void)resetTime:(int32_t)time replayer:(PPCReplayer *)replayer __attribute__((swift_name("reset(time:replayer:)")));
@property int32_t endTime __attribute__((swift_name("endTime")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *idDelimiter __attribute__((swift_name("idDelimiter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPRenderEvent.Companion")))
@interface PPCPPRenderEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPRenderEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PPCKotlinArray<id<PPCKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPReorderEvent")))
@interface PPCPPReorderEvent : PPCPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId parentId:(NSString *)parentId oldIndex:(int32_t)oldIndex newIndex:(int32_t)newIndex __attribute__((swift_name("init(sceneId:parentId:oldIndex:newIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPReorderEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=doNewIndex) int32_t newIndex __attribute__((swift_name("newIndex")));
@property (readonly) int32_t oldIndex __attribute__((swift_name("oldIndex")));
@property (readonly) NSString *parentId __attribute__((swift_name("parentId")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPReorderEvent.Companion")))
@interface PPCPPReorderEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPReorderEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneChangeEvent")))
@interface PPCPPSceneChangeEvent : PPCPPRenderEvent
- (instancetype)initWithSceneId:(NSString *)sceneId add:(BOOL)add top:(BOOL)top __attribute__((swift_name("init(sceneId:add:top:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPSceneChangeEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL add __attribute__((swift_name("add")));
@property (readonly) NSString *sceneId __attribute__((swift_name("sceneId")));
@property (readonly) BOOL top __attribute__((swift_name("top")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSceneChangeEvent.Companion")))
@interface PPCPPSceneChangeEventCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPSceneChangeEventCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPValueHistory")))
@interface PPCPPValueHistory<T> : PPCBase
- (instancetype)initWithAllowMultiple:(BOOL)allowMultiple __attribute__((swift_name("init(allowMultiple:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPValueHistoryCompanion *companion __attribute__((swift_name("companion")));
- (void)addValue:(PPCPPValueHistory<T> *)value __attribute__((swift_name("add(value:)")));
- (void)addTime:(int32_t)time value:(T _Nullable)value __attribute__((swift_name("add(time:value:)")));
- (void)forEachFn:(void (^)(PPCInt *, T _Nullable))fn __attribute__((swift_name("forEach(fn:)")));
- (T _Nullable)getChangeFromTime:(int32_t)fromTime toTime:(int32_t)toTime __attribute__((swift_name("getChange(fromTime:toTime:)")));
- (T _Nullable)getEventAtIndex:(int32_t)index __attribute__((swift_name("getEventAt(index:)")));
- (NSArray<PPCInt *> *)getEventIndexBetweenFromTime:(int32_t)fromTime toTime:(int32_t)toTime __attribute__((swift_name("getEventIndexBetween(fromTime:toTime:)")));
- (int32_t)getEventTimeAtIndex:(int32_t)index __attribute__((swift_name("getEventTimeAt(index:)")));
- (T _Nullable)getValueAtTime:(int32_t)time __attribute__((swift_name("getValueAt(time:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@property (readonly) NSArray<PPCInt *> *times __attribute__((swift_name("times")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPValueHistoryCompanion")))
@interface PPCPPValueHistoryCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPValueHistoryCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PPCKotlinArray<id<PPCKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<PPCKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayData")))
@interface PPCReplayData : PPCBase
- (instancetype)initWithVersion:(int32_t)version startTime:(int32_t)startTime endTime:(int32_t)endTime playEvents:(PPCPPValueHistory<PPCPPPlayEvent *> * _Nullable)playEvents renderEvents:(PPCPPValueHistory<PPCPPRenderEvent *> * _Nullable)renderEvents mousePositions:(PPCPPValueHistory<PPCPPPoint *> * _Nullable)mousePositions mouseActions:(PPCPPValueHistory<NSString *> * _Nullable)mouseActions numberValues:(PPCMutableDictionary<NSString *, PPCPPValueHistory<PPCFloat *> *> * _Nullable)numberValues colorValues:(PPCMutableDictionary<NSString *, PPCPPValueHistory<PPCInt *> *> * _Nullable)colorValues stringValues:(PPCMutableDictionary<NSString *, PPCPPValueHistory<NSString *> *> * _Nullable)stringValues mediaStates:(NSMutableArray<PPCMediaState *> * _Nullable)mediaStates sceneId:(NSString * _Nullable)sceneId __attribute__((swift_name("init(version:startTime:endTime:playEvents:renderEvents:mousePositions:mouseActions:numberValues:colorValues:stringValues:mediaStates:sceneId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCReplayDataCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PPCMutableDictionary<NSString *, PPCPPValueHistory<PPCInt *> *> * _Nullable colorValues __attribute__((swift_name("colorValues")));
@property (readonly) int32_t endTime __attribute__((swift_name("endTime")));
@property (readonly) NSMutableArray<PPCMediaState *> * _Nullable mediaStates __attribute__((swift_name("mediaStates")));
@property (readonly) PPCPPValueHistory<NSString *> * _Nullable mouseActions __attribute__((swift_name("mouseActions")));
@property (readonly) PPCPPValueHistory<PPCPPPoint *> * _Nullable mousePositions __attribute__((swift_name("mousePositions")));
@property (readonly) PPCMutableDictionary<NSString *, PPCPPValueHistory<PPCFloat *> *> * _Nullable numberValues __attribute__((swift_name("numberValues")));
@property (readonly) PPCPPValueHistory<PPCPPPlayEvent *> * _Nullable playEvents __attribute__((swift_name("playEvents")));
@property (readonly) PPCPPValueHistory<PPCPPRenderEvent *> * _Nullable renderEvents __attribute__((swift_name("renderEvents")));
@property (readonly) NSString * _Nullable sceneId __attribute__((swift_name("sceneId")));
@property (readonly) int32_t startTime __attribute__((swift_name("startTime")));
@property (readonly) PPCMutableDictionary<NSString *, PPCPPValueHistory<NSString *> *> * _Nullable stringValues __attribute__((swift_name("stringValues")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayData.Companion")))
@interface PPCReplayDataCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCReplayDataCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("ReplayDataManagerDelegate")))
@protocol PPCReplayDataManagerDelegate
@required
- (void)restoreMediaStateSceneId:(NSString *)sceneId mediaState:(PPCMediaState *)mediaState __attribute__((swift_name("restoreMediaState(sceneId:mediaState:)")));
- (void)updateSceneSceneId:(NSString *)sceneId __attribute__((swift_name("updateScene(sceneId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataSerializer")))
@interface PPCReplayDataSerializer : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)replayDataSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCReplayDataSerializer *shared __attribute__((swift_name("shared")));
- (PPCPPPieRecord *)deserializeReplayData:(NSString *)replayData __attribute__((swift_name("deserialize(replayData:)")));
- (PPCReplayData *)deserializeReplayDataReplayData:(NSString *)replayData __attribute__((swift_name("deserializeReplayData(replayData:)")));
- (NSString *)serializeRecord:(PPCPPPieRecord *)record __attribute__((swift_name("serialize(record:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataVersion")))
@interface PPCReplayDataVersion : PPCBase
- (instancetype)initWithVersion:(int32_t)version __attribute__((swift_name("init(version:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCReplayDataVersionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReplayDataVersion.Companion")))
@interface PPCReplayDataVersionCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCReplayDataVersionCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("DragDetectorListener")))
@protocol PPCDragDetectorListener
@required
- (void)onDragEndNow:(int64_t)now __attribute__((swift_name("onDragEnd(now:)")));
- (void)onDragMoveNow:(int64_t)now __attribute__((swift_name("onDragMove(now:)")));
- (void)onDragStartNow:(int64_t)now dx:(float)dx dy:(float)dy __attribute__((swift_name("onDragStart(now:dx:dy:)")));
- (BOOL)onDragTouchDownNow:(int64_t)now __attribute__((swift_name("onDragTouchDown(now:)")));
@end

__attribute__((swift_name("TapDetectorListener")))
@protocol PPCTapDetectorListener
@required
- (void)onCancelNow:(int64_t)now __attribute__((swift_name("onCancel(now:)")));
- (void)onTapNow:(int64_t)now __attribute__((swift_name("onTap(now:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPColor")))
@interface PPCPPColor : PPCBase
- (instancetype)initWithRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue __attribute__((swift_name("init(red:green:blue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPColorCompanion *companion __attribute__((swift_name("companion")));
- (PPCPPColor *)doCopyRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue __attribute__((swift_name("doCopy(red:green:blue:)")));
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
@interface PPCPPColorCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPColorCompanion *shared __attribute__((swift_name("shared")));
- (PPCPPColor *)fromIntIntVal:(int32_t)intVal __attribute__((swift_name("fromInt(intVal:)")));
- (NSString *)toHexRed:(int32_t)red green:(int32_t)green blue:(int32_t)blue __attribute__((swift_name("toHex(red:green:blue:)")));
@property (readonly) PPCPPColor *BLACK __attribute__((swift_name("BLACK")));
@property (readonly) PPCPPColor *BLUE __attribute__((swift_name("BLUE")));
@property (readonly) PPCPPColor *CYAN __attribute__((swift_name("CYAN")));
@property (readonly) PPCPPColor *LIME __attribute__((swift_name("LIME")));
@property (readonly) PPCPPColor *MAGENTA __attribute__((swift_name("MAGENTA")));
@property (readonly) PPCPPColor *RED __attribute__((swift_name("RED")));
@property (readonly) PPCPPColor *WHITE __attribute__((swift_name("WHITE")));
@property (readonly) PPCPPColor *YELLOW __attribute__((swift_name("YELLOW")));
@end

__attribute__((swift_name("PPCorners")))
@interface PPCPPCorners<T> : PPCBase
- (instancetype)initWithTopLeft:(T _Nullable)topLeft topRight:(T _Nullable)topRight bottomRight:(T _Nullable)bottomRight bottomLeft:(T _Nullable)bottomLeft __attribute__((swift_name("init(topLeft:topRight:bottomRight:bottomLeft:)"))) __attribute__((objc_designated_initializer));
- (BOOL)anyPredicate:(PPCBoolean *(^)(T _Nullable))predicate __attribute__((swift_name("any(predicate:)")));
- (void)setSrc:(PPCPPCorners<id> *)src valueConverter:(T _Nullable (^)(id _Nullable))valueConverter __attribute__((swift_name("set(src:valueConverter:)")));
- (void)setTopLeft:(T _Nullable)topLeft topRight:(T _Nullable)topRight bottomRight:(T _Nullable)bottomRight bottomLeft:(T _Nullable)bottomLeft __attribute__((swift_name("set(topLeft:topRight:bottomRight:bottomLeft:)")));
@property T _Nullable bottomLeft __attribute__((swift_name("bottomLeft")));
@property T _Nullable bottomRight __attribute__((swift_name("bottomRight")));
@property T _Nullable topLeft __attribute__((swift_name("topLeft")));
@property T _Nullable topRight __attribute__((swift_name("topRight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDeviceInfo")))
@interface PPCPPDeviceInfo : PPCBase
@property (class, readonly, getter=companion) PPCPPDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float density __attribute__((swift_name("density")));
@property (readonly) PPCPPDeviceFrameType *frameType __attribute__((swift_name("frameType")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) BOOL isPortrait __attribute__((swift_name("isPortrait")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) PPCPPPlatformType *platformType __attribute__((swift_name("platformType")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPDeviceInfo.Companion")))
@interface PPCPPDeviceInfoCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (PPCPPPlatformType *)inferPlatformTypeFromDeviceIdId:(NSString * _Nullable)id __attribute__((swift_name("inferPlatformTypeFromDeviceId(id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPFloatCorners")))
@interface PPCPPFloatCorners : PPCPPCorners<PPCFloat *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithTopLeft:(id _Nullable)topLeft topRight:(id _Nullable)topRight bottomRight:(id _Nullable)bottomRight bottomLeft:(id _Nullable)bottomLeft __attribute__((swift_name("init(topLeft:topRight:bottomRight:bottomLeft:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)allEqualOther:(PPCPPFloatCorners *)other __attribute__((swift_name("allEqual(other:)")));
- (PPCKotlinFloatArray *)getCorners __attribute__((swift_name("getCorners()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIntSize")))
@interface PPCPPIntSize : PPCBase
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
@interface PPCPPPoint : PPCBase
- (instancetype)initWithSrc:(PPCPPPoint *)src __attribute__((swift_name("init(src:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithX:(float)x y:(float)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPPointCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyFromOther:(PPCPPPoint *)other __attribute__((swift_name("doCopyFrom(other:)")));
- (void)setX:(id)x y:(id)y __attribute__((swift_name("set(x:y:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPPoint.Companion")))
@interface PPCPPPointCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPPointCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPRepeatDef")))
@interface PPCPPRepeatDef : PPCBase
- (instancetype)initWithIsInfinite:(BOOL)isInfinite repeatCount:(PPCPPExpr *)repeatCount interval:(PPCPPExpr *)interval __attribute__((swift_name("init(isInfinite:repeatCount:interval:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCPPExpr *interval __attribute__((swift_name("interval")));
@property (readonly) BOOL isInfinite __attribute__((swift_name("isInfinite")));
@property (readonly) PPCPPExpr *repeatCount __attribute__((swift_name("repeatCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPSize")))
@interface PPCPPSize : PPCBase
- (instancetype)initWithSrc:(PPCPPSize *)src __attribute__((swift_name("init(src:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithW:(float)w h:(float)h __attribute__((swift_name("init(w:h:)"))) __attribute__((objc_designated_initializer));
- (void)setW:(id)w h:(id)h __attribute__((swift_name("set(w:h:)")));
- (void)swap __attribute__((swift_name("swap()")));
@property (readonly) float aspectRatio __attribute__((swift_name("aspectRatio")));
@property float h __attribute__((swift_name("h")));
@property float w __attribute__((swift_name("w")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormulaUtils")))
@interface PPCFormulaUtils : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)formulaUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCFormulaUtils *shared __attribute__((swift_name("shared")));
- (int64_t)evalAsTimeFormula:(PPCPPExpr *)formula defaultValue:(int64_t)defaultValue __attribute__((swift_name("evalAsTime(formula:defaultValue:)")));
- (PPCPPExpr *)numberConstantValue:(float)value __attribute__((swift_name("numberConstant(value:)")));
@property (readonly) PPCPPNumberConstantExpr *ZERO __attribute__((swift_name("ZERO")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logger")))
@interface PPCLogger : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCLogger *shared __attribute__((swift_name("shared")));
- (void)aMessage:(NSString *)message throwable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("a(message:throwable:tag:)")));
- (void)aThrowable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("a(throwable:tag:message:)")));
- (void)dMessage:(NSString *)message throwable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("d(message:throwable:tag:)")));
- (void)dThrowable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("d(throwable:tag:message:)")));
- (void)eMessage:(NSString *)message throwable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("e(message:throwable:tag:)")));
- (void)eThrowable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("e(throwable:tag:message:)")));
- (void)iMessage:(NSString *)message throwable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("i(message:throwable:tag:)")));
- (void)iThrowable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("i(throwable:tag:message:)")));
- (void)logPriority:(PPCLogLevel *)priority tag:(NSString * _Nullable)tag throwable:(PPCKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("log(priority:tag:throwable:message:)")));
- (void)setLogLevelLogLevel:(int32_t)logLevel __attribute__((swift_name("setLogLevel(logLevel:)")));
- (void)vMessage:(NSString *)message throwable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("v(message:throwable:tag:)")));
- (void)vThrowable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("v(throwable:tag:message:)")));
- (void)wMessage:(NSString *)message throwable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag __attribute__((swift_name("w(message:throwable:tag:)")));
- (void)wThrowable:(PPCKotlinThrowable * _Nullable)throwable tag:(NSString * _Nullable)tag message:(NSString *(^)(void))message __attribute__((swift_name("w(throwable:tag:message:)")));
@property (readonly) PPCPlatform *platform __attribute__((swift_name("platform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPJsonImpl")))
@interface PPCPPJsonImpl : PPCBase <PPCPPJson>
- (instancetype)initWithJson:(PPCKotlinx_serialization_jsonJsonElement *)json __attribute__((swift_name("init(json:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, PPCKotlinx_serialization_jsonJsonElement *> *)getJsonObject __attribute__((swift_name("getJsonObject()")));
- (BOOL)hasKey:(NSString *)key __attribute__((swift_name("has(key:)")));
- (NSSet<NSString *> *)keySet __attribute__((swift_name("keySet()")));
- (id _Nullable)optKey:(NSString *)key __attribute__((swift_name("opt(key:)")));
- (id<PPCPPJson> _Nullable)optObjectKey:(NSString *)key __attribute__((swift_name("optObject(key:)")));
- (NSArray<id<PPCPPJson>> * _Nullable)optObjectArrayKey:(NSString *)key __attribute__((swift_name("optObjectArray(key:)")));
- (NSString * _Nullable)optStringKey:(NSString *)key __attribute__((swift_name("optString(key:)")));
- (NSArray<NSString *> * _Nullable)optStringArrayKey:(NSString *)key __attribute__((swift_name("optStringArray(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putNumberKey:(NSString *)key value:(id)value __attribute__((swift_name("putNumber(key:value:)")));
- (void)putObjectArrayKey:(NSString *)key value:(NSArray<id<PPCPPJson>> *)value __attribute__((swift_name("putObjectArray(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCKotlinx_serialization_jsonJsonElement *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPKotlinGC")))
@interface PPCPPKotlinGC : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pPKotlinGC __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPKotlinGC *shared __attribute__((swift_name("shared")));
- (void)collect __attribute__((swift_name("collect()")));
@end

__attribute__((swift_name("PPObservableValueProvider")))
@protocol PPCPPObservableValueProvider <PPCPPValueProvider>
@required
@property (readonly) PPCPPIdentifiableChangeObservable *observable __attribute__((swift_name("observable")));
@end

__attribute__((swift_name("PPVar")))
@interface PPCPPVar<T> : PPCBase <PPCPPObservableValueProvider>
- (instancetype)initWithNamespace:(NSString *)namespace_ name:(NSString *)name type:(PPCPPDataType *)type isGlobal:(BOOL)isGlobal formula:(NSString * _Nullable)formula linkSceneId:(NSString * _Nullable)linkSceneId linkVarName:(NSString * _Nullable)linkVarName __attribute__((swift_name("init(namespace:name:type:isGlobal:formula:linkSceneId:linkVarName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PPCPPVarCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getLayerId __attribute__((swift_name("getLayerId()")));
- (PPCPPVar<T> *)getLinkedVarSceneId:(NSString *)sceneId namespace:(NSString *)namespace_ name:(NSString *)name __attribute__((swift_name("getLinkedVar(sceneId:namespace:name:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)syncFromOther:(PPCPPVar<id> *)other __attribute__((swift_name("syncFrom(other:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PPCPPChangeObserversHolder *changeObservers __attribute__((swift_name("changeObservers")));
@property (readonly) NSString * _Nullable formula __attribute__((swift_name("formula")));
@property (readonly) BOOL isGlobal __attribute__((swift_name("isGlobal")));
@property (readonly) BOOL isLink __attribute__((swift_name("isLink")));
@property BOOL isVisible __attribute__((swift_name("isVisible")));
@property (readonly) BOOL isWritable __attribute__((swift_name("isWritable")));
@property (readonly) NSString * _Nullable linkSceneId __attribute__((swift_name("linkSceneId")));
@property (readonly) NSString * _Nullable linkVarName __attribute__((swift_name("linkVarName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly, getter=namespace) NSString *namespace_ __attribute__((swift_name("namespace_")));
@property (readonly) PPCPPIdentifiableChangeObservable *observable __attribute__((swift_name("observable")));
@property (readonly) PPCPPDataType *type __attribute__((swift_name("type")));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPVarCompanion")))
@interface PPCPPVarCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPVarCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)isVariableLayerIdLayerId:(NSString *)layerId __attribute__((swift_name("isVariableLayerId(layerId:)")));
@end

__attribute__((swift_name("PPChangeObserver")))
@protocol PPCPPChangeObserver
@required
- (void)onChangeDetected __attribute__((swift_name("onChangeDetected()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPChangeObserversHolder")))
@interface PPCPPChangeObserversHolder : PPCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addObserver:(id<PPCPPChangeObserver>)observer __attribute__((swift_name("add(observer:)")));
- (void)notifyChange __attribute__((swift_name("notifyChange()")));
- (void)removeObserver:(id<PPCPPChangeObserver>)observer __attribute__((swift_name("remove(observer:)")));
- (void)removeAll __attribute__((swift_name("removeAll()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPIdentifiableChangeObservable")))
@interface PPCPPIdentifiableChangeObservable : PPCBase
- (instancetype)initWithId:(NSString *)id changeObservers:(PPCPPChangeObserversHolder *)changeObservers __attribute__((swift_name("init(id:changeObservers:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PPCPPChangeObserversHolder *changeObservers __attribute__((swift_name("changeObservers")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((swift_name("BridgeResponse")))
@interface PPCBridgeResponse : PPCBase
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCBridgeResponseResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResponse.Error")))
@interface PPCBridgeResponseError : PPCBridgeResponse
- (instancetype)initWithRequestId:(NSString *)requestId action:(NSString *)action message:(NSString *)message code:(NSString * _Nullable)code __attribute__((swift_name("init(requestId:action:message:code:)"))) __attribute__((objc_designated_initializer));
- (PPCBridgeResponseError *)doCopyRequestId:(NSString *)requestId action:(NSString *)action message:(NSString *)message code:(NSString * _Nullable)code __attribute__((swift_name("doCopy(requestId:action:message:code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCBridgeResponseResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResponse.ResponseStatus")))
@interface PPCBridgeResponseResponseStatus : PPCKotlinEnum<PPCBridgeResponseResponseStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PPCBridgeResponseResponseStatus *success __attribute__((swift_name("success")));
@property (class, readonly) PPCBridgeResponseResponseStatus *error __attribute__((swift_name("error")));
+ (PPCKotlinArray<PPCBridgeResponseResponseStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PPCBridgeResponseResponseStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeResponse.Success")))
@interface PPCBridgeResponseSuccess : PPCBridgeResponse
- (instancetype)initWithRequestId:(NSString *)requestId action:(NSString *)action data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("init(requestId:action:data:)"))) __attribute__((objc_designated_initializer));
- (PPCBridgeResponseSuccess *)doCopyRequestId:(NSString *)requestId action:(NSString *)action data:(NSDictionary<NSString *, id> * _Nullable)data __attribute__((swift_name("doCopy(requestId:action:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCBridgeResponseResponseStatus *status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("PPBridge")))
@protocol PPCPPBridge
@required
- (BOOL)isAvailable __attribute__((swift_name("isAvailable()")));
- (void)sendAction:(NSString *)action data:(id _Nullable)data callback:(void (^ _Nullable)(id _Nullable))callback __attribute__((swift_name("send(action:data:callback:)")));
- (void)sendRequestRequest:(PPCBridgeRequest *)request callback:(void (^ _Nullable)(PPCBridgeResponse *))callback __attribute__((swift_name("sendRequest(request:callback:)")));
- (void)setMessageHandlerHandler:(id _Nullable (^)(NSString *, id _Nullable))handler __attribute__((swift_name("setMessageHandler(handler:)")));
- (void)setRequestHandlerHandler:(PPCBridgeResponse *(^)(PPCBridgeRequest *))handler __attribute__((swift_name("setRequestHandler(handler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBridgeCompanion")))
@interface PPCPPBridgeCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCPPBridgeCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCPPBridge>)getInstance __attribute__((swift_name("getInstance()")));
@end

__attribute__((swift_name("BridgeRequest")))
@interface PPCBridgeRequest : PPCBase
@property (class, readonly, getter=companion) PPCBridgeRequestCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BridgeRequest.Companion")))
@interface PPCBridgeRequestCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCBridgeRequestCompanion *shared __attribute__((swift_name("shared")));
- (PPCBridgeRequest * _Nullable)fromMapData:(NSDictionary<NSString *, id> *)data __attribute__((swift_name("fromMap(data:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSensorControlRequest")))
@interface PPCSoundSensorControlRequest : PPCBridgeRequest
- (instancetype)initWithRequestId:(NSString *)requestId sensorType:(PPCPPSensorControlType *)sensorType __attribute__((swift_name("init(requestId:sensorType:)"))) __attribute__((objc_designated_initializer));
- (PPCSoundSensorControlRequest *)doCopyRequestId:(NSString *)requestId sensorType:(PPCPPSensorControlType *)sensorType __attribute__((swift_name("doCopy(requestId:sensorType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) PPCPPSensorControlType *sensorType __attribute__((swift_name("sensorType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SoundSensorValueRequest")))
@interface PPCSoundSensorValueRequest : PPCBridgeRequest
- (instancetype)initWithRequestId:(NSString *)requestId value:(float)value __attribute__((swift_name("init(requestId:value:)"))) __attribute__((objc_designated_initializer));
- (PPCSoundSensorValueRequest *)doCopyRequestId:(NSString *)requestId value:(float)value __attribute__((swift_name("doCopy(requestId:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TTSRequest")))
@interface PPCTTSRequest : PPCBridgeRequest
- (instancetype)initWithRequestId:(NSString *)requestId controlType:(PPCPPSensorControlType *)controlType text:(NSString *)text language:(NSString *)language gender:(PPCPPSpeechGender *)gender pitch:(float)pitch speed:(float)speed __attribute__((swift_name("init(requestId:controlType:text:language:gender:pitch:speed:)"))) __attribute__((objc_designated_initializer));
- (PPCTTSRequest *)doCopyRequestId:(NSString *)requestId controlType:(PPCPPSensorControlType *)controlType text:(NSString *)text language:(NSString *)language gender:(PPCPPSpeechGender *)gender pitch:(float)pitch speed:(float)speed __attribute__((swift_name("doCopy(requestId:controlType:text:language:gender:pitch:speed:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) PPCPPSensorControlType *controlType __attribute__((swift_name("controlType")));
@property (readonly) PPCPPSpeechGender *gender __attribute__((swift_name("gender")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) float pitch __attribute__((swift_name("pitch")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VibrationRequest")))
@interface PPCVibrationRequest : PPCBridgeRequest
- (instancetype)initWithRequestId:(NSString *)requestId iOSVibrateType:(PPCPPIosVibrateType *)iOSVibrateType androidVibrateType:(PPCPPAndroidVibrateType *)androidVibrateType __attribute__((swift_name("init(requestId:iOSVibrateType:androidVibrateType:)"))) __attribute__((objc_designated_initializer));
- (PPCVibrationRequest *)doCopyRequestId:(NSString *)requestId iOSVibrateType:(PPCPPIosVibrateType *)iOSVibrateType androidVibrateType:(PPCPPAndroidVibrateType *)androidVibrateType __attribute__((swift_name("doCopy(requestId:iOSVibrateType:androidVibrateType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) PPCPPAndroidVibrateType *androidVibrateType __attribute__((swift_name("androidVibrateType")));
@property (readonly) PPCPPIosVibrateType *iOSVibrateType __attribute__((swift_name("iOSVibrateType")));
@property (readonly) NSString *requestId __attribute__((swift_name("requestId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PPCKotlinArray<T> : PPCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PPCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PPCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface PPCKotlinArray (Extensions)
- (NSArray<PPCKotlinx_serialization_jsonJsonElement *> *)toJsonArray __attribute__((swift_name("toJsonArray()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonUtilsKt")))
@interface PPCJsonUtilsKt : PPCBase
+ (BOOL)isListOfTypeList:(NSArray<id> *)list __attribute__((swift_name("isListOfType(list:)")));
+ (NSArray<PPCKotlinx_serialization_jsonJsonElement *> *)toJsonArray:(NSArray<id> *)receiver __attribute__((swift_name("toJsonArray(_:)")));
+ (PPCKotlinx_serialization_jsonJsonElement *)toJsonElement:(id _Nullable)receiver __attribute__((swift_name("toJsonElement(_:)")));
+ (NSDictionary<NSString *, PPCKotlinx_serialization_jsonJsonElement *> *)toJsonObject:(NSDictionary<id, id> *)receiver __attribute__((swift_name("toJsonObject(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPBridgeKt")))
@interface PPCPPBridgeKt : PPCBase
+ (id<PPCPPBridge>)getPlatformBridge __attribute__((swift_name("getPlatformBridge()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PPClockKt")))
@interface PPCPPClockKt : PPCBase
+ (NSString *)getCurrentLocalTime __attribute__((swift_name("getCurrentLocalTime()")));
+ (int64_t)getCurrentTimeMillis __attribute__((swift_name("getCurrentTimeMillis()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PPCKotlinEnumCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface PPCKotlinx_serialization_jsonJsonElement : PPCBase
@property (class, readonly, getter=companion) PPCKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PPCKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PPCKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PPCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PPCKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PPCKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PPCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PPCKotlinx_serialization_coreKSerializer <PPCKotlinx_serialization_coreSerializationStrategy, PPCKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloatArray")))
@interface PPCKotlinFloatArray : PPCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PPCFloat *(^)(PPCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (float)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PPCKotlinFloatIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(float)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PPCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface PPCKotlinx_serialization_jsonJsonElementCompanion : PPCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PPCKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PPCKotlinx_serialization_coreEncoder
@required
- (id<PPCKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PPCKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PPCKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<PPCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PPCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PPCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PPCKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PPCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

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
@property (readonly) NSArray<id<PPCKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@property (readonly) PPCKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PPCKotlinx_serialization_coreDecoder
@required
- (id<PPCKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PPCKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (PPCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PPCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PPCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PPCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinFloatIterator")))
@interface PPCKotlinFloatIterator : PPCBase <PPCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PPCFloat *)next __attribute__((swift_name("next()")));
- (float)nextFloat __attribute__((swift_name("nextFloat()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PPCKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PPCKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PPCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PPCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PPCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PPCKotlinx_serialization_coreSerializersModule : PPCBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PPCKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PPCKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PPCKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PPCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PPCKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PPCKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PPCKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PPCKotlinx_serialization_coreSerialKind : PPCBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PPCKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PPCKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PPCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PPCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PPCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PPCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PPCKotlinNothing : PPCBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PPCKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PPCKotlinKClass>)kClass provider:(id<PPCKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PPCKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PPCKotlinKClass>)kClass serializer:(id<PPCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PPCKotlinKClass>)baseClass actualClass:(id<PPCKotlinKClass>)actualClass actualSerializer:(id<PPCKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PPCKotlinKClass>)baseClass defaultDeserializerProvider:(id<PPCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PPCKotlinKClass>)baseClass defaultDeserializerProvider:(id<PPCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PPCKotlinKClass>)baseClass defaultSerializerProvider:(id<PPCKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PPCKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PPCKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PPCKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PPCKotlinKClass <PPCKotlinKDeclarationContainer, PPCKotlinKAnnotatedElement, PPCKotlinKClassifier>
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
