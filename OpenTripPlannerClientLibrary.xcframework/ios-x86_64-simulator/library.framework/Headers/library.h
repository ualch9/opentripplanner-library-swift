#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class LibraryServerInfo, LibraryKotlinThrowable, LibraryServerVersion, LibraryStations, LibraryStation, LibraryTransitRouterTimes, LibraryDebugOutput, LibraryDetails, LibraryFare_, LibraryFrom, LibraryFrom_, LibraryFare, LibraryLeg, LibraryItinerary, LibraryTo_, LibraryLegGeometry, LibraryStep, LibraryMetadata, LibraryTo, LibraryPlan, LibraryRequestParameters, LibraryError, LibraryElevationMetadata, LibraryPlanner, LibraryTraverseModes, LibraryOptimizeType, LibraryKotlinEnum<E>, LibraryKotlinArray<T>, LibraryKotlinx_serialization_coreSerializersModule, LibraryKotlinx_serialization_coreSerialKind, LibraryKotlinNothing;

@protocol LibraryKotlinx_serialization_coreKSerializer, LibraryKotlinComparable, LibraryKotlinx_serialization_coreEncoder, LibraryKotlinx_serialization_coreSerialDescriptor, LibraryKotlinx_serialization_coreSerializationStrategy, LibraryKotlinx_serialization_coreDecoder, LibraryKotlinx_serialization_coreDeserializationStrategy, LibraryKotlinIterator, LibraryKotlinx_serialization_coreCompositeEncoder, LibraryKotlinAnnotation, LibraryKotlinx_serialization_coreCompositeDecoder, LibraryKotlinx_serialization_coreSerializersModuleCollector, LibraryKotlinKClass, LibraryKotlinKDeclarationContainer, LibraryKotlinKAnnotatedElement, LibraryKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface LibraryBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface LibraryBase (LibraryBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface LibraryMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface LibraryMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorLibraryKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface LibraryNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface LibraryByte : LibraryNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface LibraryUByte : LibraryNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface LibraryShort : LibraryNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface LibraryUShort : LibraryNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface LibraryInt : LibraryNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface LibraryUInt : LibraryNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface LibraryLong : LibraryNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface LibraryULong : LibraryNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface LibraryFloat : LibraryNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface LibraryDouble : LibraryNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface LibraryBoolean : LibraryNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerInfoApi")))
@interface LibraryServerInfoApi : LibraryBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (void)getServerInfoSuccess:(void (^)(LibraryServerInfo *))success failure:(void (^)(LibraryKotlinThrowable * _Nullable))failure __attribute__((swift_name("getServerInfo(success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerInfo")))
@interface LibraryServerInfo : LibraryBase
- (instancetype)initWithServerVersion:(LibraryServerVersion * _Nullable)serverVersion cpuName:(NSString * _Nullable)cpuName nCores:(LibraryInt * _Nullable)nCores additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(serverVersion:cpuName:nCores:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryServerVersion * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryMutableDictionary<NSString *, id> *)component4 __attribute__((swift_name("component4()")));
- (LibraryServerInfo *)doCopyServerVersion:(LibraryServerVersion * _Nullable)serverVersion cpuName:(NSString * _Nullable)cpuName nCores:(LibraryInt * _Nullable)nCores additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(serverVersion:cpuName:nCores:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property NSString * _Nullable cpuName __attribute__((swift_name("cpuName")));
@property LibraryInt * _Nullable nCores __attribute__((swift_name("nCores")));
@property LibraryServerVersion * _Nullable serverVersion __attribute__((swift_name("serverVersion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerInfo.Companion")))
@interface LibraryServerInfoCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerVersion")))
@interface LibraryServerVersion : LibraryBase
- (instancetype)initWithVersion:(NSString * _Nullable)version major:(LibraryInt * _Nullable)major minor:(LibraryInt * _Nullable)minor incremental:(LibraryInt * _Nullable)incremental qualifier:(NSString * _Nullable)qualifier commit:(NSString * _Nullable)commit branch:(NSString * _Nullable)branch describe:(NSString * _Nullable)describe commitTime:(NSString * _Nullable)commitTime buildTime:(NSString * _Nullable)buildTime dirty:(LibraryBoolean * _Nullable)dirty longVersionString:(NSString * _Nullable)longVersionString shortVersionString:(NSString * _Nullable)shortVersionString uid:(LibraryInt * _Nullable)uid additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(version:major:minor:incremental:qualifier:commit:branch:describe:commitTime:buildTime:dirty:longVersionString:shortVersionString:uid:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (LibraryBoolean * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (LibraryInt * _Nullable)component14 __attribute__((swift_name("component14()")));
- (LibraryMutableDictionary<NSString *, id> *)component15 __attribute__((swift_name("component15()")));
- (LibraryInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (LibraryServerVersion *)doCopyVersion:(NSString * _Nullable)version major:(LibraryInt * _Nullable)major minor:(LibraryInt * _Nullable)minor incremental:(LibraryInt * _Nullable)incremental qualifier:(NSString * _Nullable)qualifier commit:(NSString * _Nullable)commit branch:(NSString * _Nullable)branch describe:(NSString * _Nullable)describe commitTime:(NSString * _Nullable)commitTime buildTime:(NSString * _Nullable)buildTime dirty:(LibraryBoolean * _Nullable)dirty longVersionString:(NSString * _Nullable)longVersionString shortVersionString:(NSString * _Nullable)shortVersionString uid:(LibraryInt * _Nullable)uid additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(version:major:minor:incremental:qualifier:commit:branch:describe:commitTime:buildTime:dirty:longVersionString:shortVersionString:uid:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property NSString * _Nullable branch __attribute__((swift_name("branch")));
@property NSString * _Nullable buildTime __attribute__((swift_name("buildTime")));
@property NSString * _Nullable commit __attribute__((swift_name("commit")));
@property NSString * _Nullable commitTime __attribute__((swift_name("commitTime")));
@property NSString * _Nullable describe __attribute__((swift_name("describe")));
@property LibraryBoolean * _Nullable dirty __attribute__((swift_name("dirty")));
@property LibraryInt * _Nullable incremental __attribute__((swift_name("incremental")));
@property NSString * _Nullable longVersionString __attribute__((swift_name("longVersionString")));
@property LibraryInt * _Nullable major __attribute__((swift_name("major")));
@property LibraryInt * _Nullable minor __attribute__((swift_name("minor")));
@property NSString * _Nullable qualifier __attribute__((swift_name("qualifier")));
@property NSString * _Nullable shortVersionString __attribute__((swift_name("shortVersionString")));
@property LibraryInt * _Nullable uid __attribute__((swift_name("uid")));
@property NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ServerVersion.Companion")))
@interface LibraryServerVersionCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BikeRentalApi")))
@interface LibraryBikeRentalApi : LibraryBase
- (instancetype)initWithUrl:(NSString *)url locale:(NSString * _Nullable)locale lowerLeft:(NSString * _Nullable)lowerLeft upperRight:(NSString * _Nullable)upperRight __attribute__((swift_name("init(url:locale:lowerLeft:upperRight:)"))) __attribute__((objc_designated_initializer));
- (void)getBikeRentalSuccess:(void (^)(LibraryStations *))success failure:(void (^)(LibraryKotlinThrowable * _Nullable))failure __attribute__((swift_name("getBikeRental(success:failure:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station")))
@interface LibraryStation : LibraryBase
- (instancetype)initWithId:(NSString * _Nullable)id y:(LibraryDouble * _Nullable)y x:(LibraryDouble * _Nullable)x bikesAvailable:(LibraryInt * _Nullable)bikesAvailable spacesAvailable:(LibraryInt * _Nullable)spacesAvailable allowDropoff:(LibraryBoolean * _Nullable)allowDropoff isFloatingBike:(LibraryBoolean * _Nullable)isFloatingBike isCarStation:(LibraryBoolean * _Nullable)isCarStation networks:(NSArray<NSString *> * _Nullable)networks realTimeData:(LibraryBoolean * _Nullable)realTimeData name:(NSString * _Nullable)name additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(id:y:x:bikesAvailable:spacesAvailable:allowDropoff:isFloatingBike:isCarStation:networks:realTimeData:name:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryBoolean * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (LibraryMutableDictionary<NSString *, id> *)component12 __attribute__((swift_name("component12()")));
- (LibraryDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (LibraryBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (LibraryBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<NSString *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (LibraryStation *)doCopyId:(NSString * _Nullable)id y:(LibraryDouble * _Nullable)y x:(LibraryDouble * _Nullable)x bikesAvailable:(LibraryInt * _Nullable)bikesAvailable spacesAvailable:(LibraryInt * _Nullable)spacesAvailable allowDropoff:(LibraryBoolean * _Nullable)allowDropoff isFloatingBike:(LibraryBoolean * _Nullable)isFloatingBike isCarStation:(LibraryBoolean * _Nullable)isCarStation networks:(NSArray<NSString *> * _Nullable)networks realTimeData:(LibraryBoolean * _Nullable)realTimeData name:(NSString * _Nullable)name additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(id:y:x:bikesAvailable:spacesAvailable:allowDropoff:isFloatingBike:isCarStation:networks:realTimeData:name:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property LibraryBoolean * _Nullable allowDropoff __attribute__((swift_name("allowDropoff")));
@property LibraryInt * _Nullable bikesAvailable __attribute__((swift_name("bikesAvailable")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property LibraryBoolean * _Nullable isCarStation __attribute__((swift_name("isCarStation")));
@property LibraryBoolean * _Nullable isFloatingBike __attribute__((swift_name("isFloatingBike")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSArray<NSString *> * _Nullable networks __attribute__((swift_name("networks")));
@property LibraryBoolean * _Nullable realTimeData __attribute__((swift_name("realTimeData")));
@property LibraryInt * _Nullable spacesAvailable __attribute__((swift_name("spacesAvailable")));
@property LibraryDouble * _Nullable x __attribute__((swift_name("x")));
@property LibraryDouble * _Nullable y __attribute__((swift_name("y")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station.Companion")))
@interface LibraryStationCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stations")))
@interface LibraryStations : LibraryBase
- (instancetype)initWithStations:(NSArray<LibraryStation *> * _Nullable)stations additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(stations:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSArray<LibraryStation *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryMutableDictionary<NSString *, id> *)component2 __attribute__((swift_name("component2()")));
- (LibraryStations *)doCopyStations:(NSArray<LibraryStation *> * _Nullable)stations additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(stations:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property NSArray<LibraryStation *> * _Nullable stations __attribute__((swift_name("stations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stations.Companion")))
@interface LibraryStationsCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugOutput")))
@interface LibraryDebugOutput : LibraryBase
- (instancetype)initWithPrecalculationTime:(LibraryInt * _Nullable)precalculationTime directStreetRouterTime:(LibraryInt * _Nullable)directStreetRouterTime transitRouterTime:(LibraryInt * _Nullable)transitRouterTime filteringTime:(LibraryInt * _Nullable)filteringTime renderingTime:(LibraryInt * _Nullable)renderingTime totalTime:(LibraryInt * _Nullable)totalTime transitRouterTimes:(LibraryTransitRouterTimes * _Nullable)transitRouterTimes additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(precalculationTime:directStreetRouterTime:transitRouterTime:filteringTime:renderingTime:totalTime:transitRouterTimes:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (LibraryTransitRouterTimes * _Nullable)component7 __attribute__((swift_name("component7()")));
- (LibraryMutableDictionary<NSString *, id> *)component8 __attribute__((swift_name("component8()")));
- (LibraryDebugOutput *)doCopyPrecalculationTime:(LibraryInt * _Nullable)precalculationTime directStreetRouterTime:(LibraryInt * _Nullable)directStreetRouterTime transitRouterTime:(LibraryInt * _Nullable)transitRouterTime filteringTime:(LibraryInt * _Nullable)filteringTime renderingTime:(LibraryInt * _Nullable)renderingTime totalTime:(LibraryInt * _Nullable)totalTime transitRouterTimes:(LibraryTransitRouterTimes * _Nullable)transitRouterTimes additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(precalculationTime:directStreetRouterTime:transitRouterTime:filteringTime:renderingTime:totalTime:transitRouterTimes:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryInt * _Nullable directStreetRouterTime __attribute__((swift_name("directStreetRouterTime")));
@property (readonly) LibraryInt * _Nullable filteringTime __attribute__((swift_name("filteringTime")));
@property (readonly) LibraryInt * _Nullable precalculationTime __attribute__((swift_name("precalculationTime")));
@property (readonly) LibraryInt * _Nullable renderingTime __attribute__((swift_name("renderingTime")));
@property (readonly) LibraryInt * _Nullable totalTime __attribute__((swift_name("totalTime")));
@property (readonly) LibraryInt * _Nullable transitRouterTime __attribute__((swift_name("transitRouterTime")));
@property (readonly) LibraryTransitRouterTimes * _Nullable transitRouterTimes __attribute__((swift_name("transitRouterTimes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DebugOutput.Companion")))
@interface LibraryDebugOutputCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Details")))
@interface LibraryDetails : LibraryBase
- (instancetype)initWithAdditionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryMutableDictionary<NSString *, id> *)component1 __attribute__((swift_name("component1()")));
- (LibraryDetails *)doCopyAdditionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Details.Companion")))
@interface LibraryDetailsCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElevationMetadata")))
@interface LibraryElevationMetadata : LibraryBase
- (instancetype)initWithEllipsoidToGeoidDifference:(LibraryDouble * _Nullable)ellipsoidToGeoidDifference geoidElevation:(LibraryBoolean * _Nullable)geoidElevation additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(ellipsoidToGeoidDifference:geoidElevation:additionalProperties:)"))) __attribute__((objc_designated_initializer));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryDouble * _Nullable ellipsoidToGeoidDifference __attribute__((swift_name("ellipsoidToGeoidDifference")));
@property (readonly) LibraryBoolean * _Nullable geoidElevation __attribute__((swift_name("geoidElevation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ElevationMetadata.Companion")))
@interface LibraryElevationMetadataCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fare")))
@interface LibraryFare : LibraryBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryDetails * _Nullable details __attribute__((swift_name("details")));
@property (readonly) LibraryFare_ * _Nullable fare __attribute__((swift_name("fare")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fare.Companion")))
@interface LibraryFareCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fare_")))
@interface LibraryFare_ : LibraryBase
- (instancetype)initWithAdditionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryMutableDictionary<NSString *, id> *)component1 __attribute__((swift_name("component1()")));
- (LibraryFare_ *)doCopyAdditionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fare_.Companion")))
@interface LibraryFare_Companion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("From")))
@interface LibraryFrom : LibraryBase
- (instancetype)initWithName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat vertexType:(NSString * _Nullable)vertexType additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(name:lon:lat:vertexType:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryMutableDictionary<NSString *, id> *)component5 __attribute__((swift_name("component5()")));
- (LibraryFrom *)doCopyName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat vertexType:(NSString * _Nullable)vertexType additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(name:lon:lat:vertexType:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) LibraryDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable vertexType __attribute__((swift_name("vertexType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("From.Companion")))
@interface LibraryFromCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("From_")))
@interface LibraryFrom_ : LibraryBase
- (instancetype)initWithName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat departure:(LibraryLong * _Nullable)departure vertexType:(NSString * _Nullable)vertexType additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(name:lon:lat:departure:vertexType:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryMutableDictionary<NSString *, id> *)component6 __attribute__((swift_name("component6()")));
- (LibraryFrom_ *)doCopyName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat departure:(LibraryLong * _Nullable)departure vertexType:(NSString * _Nullable)vertexType additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(name:lon:lat:departure:vertexType:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryLong * _Nullable departure __attribute__((swift_name("departure")));
@property (readonly) LibraryDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) LibraryDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable vertexType __attribute__((swift_name("vertexType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("From_.Companion")))
@interface LibraryFrom_Companion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Itinerary")))
@interface LibraryItinerary : LibraryBase
- (instancetype)initWithDuration:(LibraryInt * _Nullable)duration startTime:(LibraryLong * _Nullable)startTime endTime:(LibraryLong * _Nullable)endTime walkTime:(LibraryInt * _Nullable)walkTime transitTime:(LibraryInt * _Nullable)transitTime waitingTime:(LibraryInt * _Nullable)waitingTime walkDistance:(LibraryDouble * _Nullable)walkDistance walkLimitExceeded:(LibraryBoolean * _Nullable)walkLimitExceeded elevationLost:(LibraryDouble * _Nullable)elevationLost elevationGained:(LibraryDouble * _Nullable)elevationGained transfers:(LibraryInt * _Nullable)transfers fare:(LibraryFare * _Nullable)fare legs:(NSArray<LibraryLeg *> * _Nullable)legs tooSloped:(LibraryBoolean * _Nullable)tooSloped additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(duration:startTime:endTime:walkTime:transitTime:waitingTime:walkDistance:walkLimitExceeded:elevationLost:elevationGained:transfers:fare:legs:tooSloped:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryDouble * _Nullable)component10 __attribute__((swift_name("component10()")));
- (LibraryInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (LibraryFare * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSArray<LibraryLeg *> * _Nullable)component13 __attribute__((swift_name("component13()")));
- (LibraryBoolean * _Nullable)component14 __attribute__((swift_name("component14()")));
- (LibraryMutableDictionary<NSString *, id> *)component15 __attribute__((swift_name("component15()")));
- (LibraryLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryLong * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (LibraryDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (LibraryBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (LibraryDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (LibraryItinerary *)doCopyDuration:(LibraryInt * _Nullable)duration startTime:(LibraryLong * _Nullable)startTime endTime:(LibraryLong * _Nullable)endTime walkTime:(LibraryInt * _Nullable)walkTime transitTime:(LibraryInt * _Nullable)transitTime waitingTime:(LibraryInt * _Nullable)waitingTime walkDistance:(LibraryDouble * _Nullable)walkDistance walkLimitExceeded:(LibraryBoolean * _Nullable)walkLimitExceeded elevationLost:(LibraryDouble * _Nullable)elevationLost elevationGained:(LibraryDouble * _Nullable)elevationGained transfers:(LibraryInt * _Nullable)transfers fare:(LibraryFare * _Nullable)fare legs:(NSArray<LibraryLeg *> * _Nullable)legs tooSloped:(LibraryBoolean * _Nullable)tooSloped additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(duration:startTime:endTime:walkTime:transitTime:waitingTime:walkDistance:walkLimitExceeded:elevationLost:elevationGained:transfers:fare:legs:tooSloped:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) LibraryDouble * _Nullable elevationGained __attribute__((swift_name("elevationGained")));
@property (readonly) LibraryDouble * _Nullable elevationLost __attribute__((swift_name("elevationLost")));
@property (readonly) LibraryLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) LibraryFare * _Nullable fare __attribute__((swift_name("fare")));
@property (readonly) NSArray<LibraryLeg *> * _Nullable legs __attribute__((swift_name("legs")));
@property (readonly) LibraryLong * _Nullable startTime __attribute__((swift_name("startTime")));
@property (readonly) LibraryBoolean * _Nullable tooSloped __attribute__((swift_name("tooSloped")));
@property (readonly) LibraryInt * _Nullable transfers __attribute__((swift_name("transfers")));
@property (readonly) LibraryInt * _Nullable transitTime __attribute__((swift_name("transitTime")));
@property (readonly) LibraryInt * _Nullable waitingTime __attribute__((swift_name("waitingTime")));
@property (readonly) LibraryDouble * _Nullable walkDistance __attribute__((swift_name("walkDistance")));
@property (readonly) LibraryBoolean * _Nullable walkLimitExceeded __attribute__((swift_name("walkLimitExceeded")));
@property (readonly) LibraryInt * _Nullable walkTime __attribute__((swift_name("walkTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Itinerary.Companion")))
@interface LibraryItineraryCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Leg")))
@interface LibraryLeg : LibraryBase
- (instancetype)initWithStartTime:(LibraryLong * _Nullable)startTime endTime:(LibraryLong * _Nullable)endTime departureDelay:(LibraryInt * _Nullable)departureDelay arrivalDelay:(LibraryInt * _Nullable)arrivalDelay realTime:(LibraryBoolean * _Nullable)realTime distance:(LibraryDouble * _Nullable)distance pathway:(LibraryBoolean * _Nullable)pathway mode:(NSString * _Nullable)mode transitLeg:(LibraryBoolean * _Nullable)transitLeg route:(NSString * _Nullable)route agencyTimeZoneOffset:(LibraryInt * _Nullable)agencyTimeZoneOffset interlineWithPreviousLeg:(LibraryBoolean * _Nullable)interlineWithPreviousLeg from:(LibraryFrom_ * _Nullable)from to:(LibraryTo_ * _Nullable)to legGeometry:(LibraryLegGeometry * _Nullable)legGeometry steps:(NSArray<LibraryStep *> * _Nullable)steps rentedBike:(LibraryBoolean * _Nullable)rentedBike duration:(LibraryDouble * _Nullable)duration additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(startTime:endTime:departureDelay:arrivalDelay:realTime:distance:pathway:mode:transitLeg:route:agencyTimeZoneOffset:interlineWithPreviousLeg:from:to:legGeometry:steps:rentedBike:duration:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryLong * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (LibraryInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (LibraryBoolean * _Nullable)component12 __attribute__((swift_name("component12()")));
- (LibraryFrom_ * _Nullable)component13 __attribute__((swift_name("component13()")));
- (LibraryTo_ * _Nullable)component14 __attribute__((swift_name("component14()")));
- (LibraryLegGeometry * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSArray<LibraryStep *> * _Nullable)component16 __attribute__((swift_name("component16()")));
- (LibraryBoolean * _Nullable)component17 __attribute__((swift_name("component17()")));
- (LibraryDouble * _Nullable)component18 __attribute__((swift_name("component18()")));
- (LibraryMutableDictionary<NSString *, id> *)component19 __attribute__((swift_name("component19()")));
- (LibraryLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (LibraryBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (LibraryBoolean * _Nullable)component9 __attribute__((swift_name("component9()")));
- (LibraryLeg *)doCopyStartTime:(LibraryLong * _Nullable)startTime endTime:(LibraryLong * _Nullable)endTime departureDelay:(LibraryInt * _Nullable)departureDelay arrivalDelay:(LibraryInt * _Nullable)arrivalDelay realTime:(LibraryBoolean * _Nullable)realTime distance:(LibraryDouble * _Nullable)distance pathway:(LibraryBoolean * _Nullable)pathway mode:(NSString * _Nullable)mode transitLeg:(LibraryBoolean * _Nullable)transitLeg route:(NSString * _Nullable)route agencyTimeZoneOffset:(LibraryInt * _Nullable)agencyTimeZoneOffset interlineWithPreviousLeg:(LibraryBoolean * _Nullable)interlineWithPreviousLeg from:(LibraryFrom_ * _Nullable)from to:(LibraryTo_ * _Nullable)to legGeometry:(LibraryLegGeometry * _Nullable)legGeometry steps:(NSArray<LibraryStep *> * _Nullable)steps rentedBike:(LibraryBoolean * _Nullable)rentedBike duration:(LibraryDouble * _Nullable)duration additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(startTime:endTime:departureDelay:arrivalDelay:realTime:distance:pathway:mode:transitLeg:route:agencyTimeZoneOffset:interlineWithPreviousLeg:from:to:legGeometry:steps:rentedBike:duration:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryInt * _Nullable agencyTimeZoneOffset __attribute__((swift_name("agencyTimeZoneOffset")));
@property (readonly) LibraryInt * _Nullable arrivalDelay __attribute__((swift_name("arrivalDelay")));
@property (readonly) LibraryInt * _Nullable departureDelay __attribute__((swift_name("departureDelay")));
@property (readonly) LibraryDouble * _Nullable distance __attribute__((swift_name("distance")));
@property (readonly) LibraryDouble * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) LibraryLong * _Nullable endTime __attribute__((swift_name("endTime")));
@property (readonly) LibraryFrom_ * _Nullable from __attribute__((swift_name("from")));
@property (readonly) LibraryBoolean * _Nullable interlineWithPreviousLeg __attribute__((swift_name("interlineWithPreviousLeg")));
@property (readonly) LibraryLegGeometry * _Nullable legGeometry __attribute__((swift_name("legGeometry")));
@property (readonly) NSString * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) LibraryBoolean * _Nullable pathway __attribute__((swift_name("pathway")));
@property (readonly) LibraryBoolean * _Nullable realTime __attribute__((swift_name("realTime")));
@property (readonly) LibraryBoolean * _Nullable rentedBike __attribute__((swift_name("rentedBike")));
@property (readonly) NSString * _Nullable route __attribute__((swift_name("route")));
@property (readonly) LibraryLong * _Nullable startTime __attribute__((swift_name("startTime")));
@property (readonly) NSArray<LibraryStep *> * _Nullable steps __attribute__((swift_name("steps")));
@property (readonly) LibraryTo_ * _Nullable to __attribute__((swift_name("to")));
@property (readonly) LibraryBoolean * _Nullable transitLeg __attribute__((swift_name("transitLeg")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Leg.Companion")))
@interface LibraryLegCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegGeometry")))
@interface LibraryLegGeometry : LibraryBase
- (instancetype)initWithPoints:(NSString * _Nullable)points length:(LibraryInt * _Nullable)length additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(points:length:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryMutableDictionary<NSString *, id> *)component3 __attribute__((swift_name("component3()")));
- (LibraryLegGeometry *)doCopyPoints:(NSString * _Nullable)points length:(LibraryInt * _Nullable)length additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(points:length:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryInt * _Nullable length __attribute__((swift_name("length")));
@property (readonly) NSString * _Nullable points __attribute__((swift_name("points")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegGeometry.Companion")))
@interface LibraryLegGeometryCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata")))
@interface LibraryMetadata : LibraryBase
- (instancetype)initWithSearchWindowUsed:(LibraryInt * _Nullable)searchWindowUsed nextDateTime:(LibraryLong * _Nullable)nextDateTime prevDateTime:(LibraryLong * _Nullable)prevDateTime additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(searchWindowUsed:nextDateTime:prevDateTime:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryLong * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryLong * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryMutableDictionary<NSString *, id> *)component4 __attribute__((swift_name("component4()")));
- (LibraryMetadata *)doCopySearchWindowUsed:(LibraryInt * _Nullable)searchWindowUsed nextDateTime:(LibraryLong * _Nullable)nextDateTime prevDateTime:(LibraryLong * _Nullable)prevDateTime additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(searchWindowUsed:nextDateTime:prevDateTime:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryLong * _Nullable nextDateTime __attribute__((swift_name("nextDateTime")));
@property (readonly) LibraryLong * _Nullable prevDateTime __attribute__((swift_name("prevDateTime")));
@property (readonly) LibraryInt * _Nullable searchWindowUsed __attribute__((swift_name("searchWindowUsed")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Metadata.Companion")))
@interface LibraryMetadataCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Plan")))
@interface LibraryPlan : LibraryBase
- (instancetype)initWithDate:(LibraryLong * _Nullable)date from:(LibraryFrom * _Nullable)from to:(LibraryTo * _Nullable)to itineraries:(NSArray<LibraryItinerary *> * _Nullable)itineraries additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(date:from:to:itineraries:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryLong * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryFrom * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryTo * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<LibraryItinerary *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryMutableDictionary<NSString *, id> *)component5 __attribute__((swift_name("component5()")));
- (LibraryPlan *)doCopyDate:(LibraryLong * _Nullable)date from:(LibraryFrom * _Nullable)from to:(LibraryTo * _Nullable)to itineraries:(NSArray<LibraryItinerary *> * _Nullable)itineraries additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(date:from:to:itineraries:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryLong * _Nullable date __attribute__((swift_name("date")));
@property (readonly) LibraryFrom * _Nullable from __attribute__((swift_name("from")));
@property (readonly) NSArray<LibraryItinerary *> * _Nullable itineraries __attribute__((swift_name("itineraries")));
@property (readonly) LibraryTo * _Nullable to __attribute__((swift_name("to")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Plan.Companion")))
@interface LibraryPlanCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Planner")))
@interface LibraryPlanner : LibraryBase
- (instancetype)initWithRequestParameters:(LibraryRequestParameters * _Nullable)requestParameters plan:(LibraryPlan * _Nullable)plan error:(LibraryError * _Nullable)error metadata:(LibraryMetadata * _Nullable)metadata debugOutput:(LibraryDebugOutput * _Nullable)debugOutput elevationMetadata:(LibraryElevationMetadata * _Nullable)elevationMetadata additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(requestParameters:plan:error:metadata:debugOutput:elevationMetadata:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryRequestParameters * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryPlan * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryError * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryMetadata * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryDebugOutput * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryElevationMetadata * _Nullable)component6 __attribute__((swift_name("component6()")));
- (LibraryMutableDictionary<NSString *, id> *)component7 __attribute__((swift_name("component7()")));
- (LibraryPlanner *)doCopyRequestParameters:(LibraryRequestParameters * _Nullable)requestParameters plan:(LibraryPlan * _Nullable)plan error:(LibraryError * _Nullable)error metadata:(LibraryMetadata * _Nullable)metadata debugOutput:(LibraryDebugOutput * _Nullable)debugOutput elevationMetadata:(LibraryElevationMetadata * _Nullable)elevationMetadata additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(requestParameters:plan:error:metadata:debugOutput:elevationMetadata:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryDebugOutput * _Nullable debugOutput __attribute__((swift_name("debugOutput")));
@property (readonly) LibraryElevationMetadata * _Nullable elevationMetadata __attribute__((swift_name("elevationMetadata")));
@property (readonly) LibraryError * _Nullable error __attribute__((swift_name("error")));
@property (readonly) LibraryMetadata * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) LibraryPlan * _Nullable plan __attribute__((swift_name("plan")));
@property (readonly) LibraryRequestParameters * _Nullable requestParameters __attribute__((swift_name("requestParameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Planner.Companion")))
@interface LibraryPlannerCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestParameters")))
@interface LibraryRequestParameters : LibraryBase
- (instancetype)initWithFromPlace:(NSString * _Nullable)fromPlace toPlace:(NSString * _Nullable)toPlace alightSlack:(LibraryInt * _Nullable)alightSlack arriveBy:(NSString * _Nullable)arriveBy traverseModes:(LibraryTraverseModes * _Nullable)traverseModes optimizeType:(LibraryOptimizeType * _Nullable)optimizeType intermediatePlaces:(NSArray<NSString *> * _Nullable)intermediatePlaces maxWalkDistance:(LibraryDouble * _Nullable)maxWalkDistance triangleTimeFactor:(LibraryDouble * _Nullable)triangleTimeFactor triangleSlopeFactor:(LibraryDouble * _Nullable)triangleSlopeFactor triangleSafetyFactor:(LibraryDouble * _Nullable)triangleSafetyFactor wheelchair:(NSString * _Nullable)wheelchair date:(NSString * _Nullable)date numItineraries:(LibraryInt * _Nullable)numItineraries preferredRoutes:(NSArray<NSString *> * _Nullable)preferredRoutes unpreferredRoutes:(NSArray<NSString *> * _Nullable)unpreferredRoutes additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(fromPlace:toPlace:alightSlack:arriveBy:traverseModes:optimizeType:intermediatePlaces:maxWalkDistance:triangleTimeFactor:triangleSlopeFactor:triangleSafetyFactor:wheelchair:date:numItineraries:preferredRoutes:unpreferredRoutes:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryDouble * _Nullable)component10 __attribute__((swift_name("component10()")));
- (LibraryDouble * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (LibraryInt * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSArray<NSString *> * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSArray<NSString *> * _Nullable)component16 __attribute__((swift_name("component16()")));
- (LibraryMutableDictionary<NSString *, id> *)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryTraverseModes * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryOptimizeType * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (LibraryDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (LibraryDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (LibraryRequestParameters *)doCopyFromPlace:(NSString * _Nullable)fromPlace toPlace:(NSString * _Nullable)toPlace alightSlack:(LibraryInt * _Nullable)alightSlack arriveBy:(NSString * _Nullable)arriveBy traverseModes:(LibraryTraverseModes * _Nullable)traverseModes optimizeType:(LibraryOptimizeType * _Nullable)optimizeType intermediatePlaces:(NSArray<NSString *> * _Nullable)intermediatePlaces maxWalkDistance:(LibraryDouble * _Nullable)maxWalkDistance triangleTimeFactor:(LibraryDouble * _Nullable)triangleTimeFactor triangleSlopeFactor:(LibraryDouble * _Nullable)triangleSlopeFactor triangleSafetyFactor:(LibraryDouble * _Nullable)triangleSafetyFactor wheelchair:(NSString * _Nullable)wheelchair date:(NSString * _Nullable)date numItineraries:(LibraryInt * _Nullable)numItineraries preferredRoutes:(NSArray<NSString *> * _Nullable)preferredRoutes unpreferredRoutes:(NSArray<NSString *> * _Nullable)unpreferredRoutes additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(fromPlace:toPlace:alightSlack:arriveBy:traverseModes:optimizeType:intermediatePlaces:maxWalkDistance:triangleTimeFactor:triangleSlopeFactor:triangleSafetyFactor:wheelchair:date:numItineraries:preferredRoutes:unpreferredRoutes:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryInt * _Nullable alightSlack __attribute__((swift_name("alightSlack")));
@property (readonly) NSString * _Nullable arriveBy __attribute__((swift_name("arriveBy")));
@property (readonly) NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable fromPlace __attribute__((swift_name("fromPlace")));
@property (readonly) NSArray<NSString *> * _Nullable intermediatePlaces __attribute__((swift_name("intermediatePlaces")));
@property (readonly) LibraryDouble * _Nullable maxWalkDistance __attribute__((swift_name("maxWalkDistance")));
@property (readonly) LibraryInt * _Nullable numItineraries __attribute__((swift_name("numItineraries")));
@property (readonly) LibraryOptimizeType * _Nullable optimizeType __attribute__((swift_name("optimizeType")));
@property (readonly) NSArray<NSString *> * _Nullable preferredRoutes __attribute__((swift_name("preferredRoutes")));
@property (readonly) NSString * _Nullable toPlace __attribute__((swift_name("toPlace")));
@property (readonly) LibraryTraverseModes * _Nullable traverseModes __attribute__((swift_name("traverseModes")));
@property (readonly) LibraryDouble * _Nullable triangleSafetyFactor __attribute__((swift_name("triangleSafetyFactor")));
@property (readonly) LibraryDouble * _Nullable triangleSlopeFactor __attribute__((swift_name("triangleSlopeFactor")));
@property (readonly) LibraryDouble * _Nullable triangleTimeFactor __attribute__((swift_name("triangleTimeFactor")));
@property (readonly) NSArray<NSString *> * _Nullable unpreferredRoutes __attribute__((swift_name("unpreferredRoutes")));
@property (readonly) NSString * _Nullable wheelchair __attribute__((swift_name("wheelchair")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestParameters.Companion")))
@interface LibraryRequestParametersCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step")))
@interface LibraryStep : LibraryBase
- (instancetype)initWithDistance:(LibraryDouble * _Nullable)distance relativeDirection:(NSString * _Nullable)relativeDirection streetName:(NSString * _Nullable)streetName absoluteDirection:(NSString * _Nullable)absoluteDirection stayOn:(LibraryBoolean * _Nullable)stayOn area:(LibraryBoolean * _Nullable)area bogusName:(LibraryBoolean * _Nullable)bogusName lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat elevation:(NSString * _Nullable)elevation additionalProperties:(NSDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(distance:relativeDirection:streetName:absoluteDirection:stayOn:area:bogusName:lon:lat:elevation:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSDictionary<NSString *, id> *)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (LibraryBoolean * _Nullable)component7 __attribute__((swift_name("component7()")));
- (LibraryDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (LibraryDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (LibraryStep *)doCopyDistance:(LibraryDouble * _Nullable)distance relativeDirection:(NSString * _Nullable)relativeDirection streetName:(NSString * _Nullable)streetName absoluteDirection:(NSString * _Nullable)absoluteDirection stayOn:(LibraryBoolean * _Nullable)stayOn area:(LibraryBoolean * _Nullable)area bogusName:(LibraryBoolean * _Nullable)bogusName lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat elevation:(NSString * _Nullable)elevation additionalProperties:(NSDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(distance:relativeDirection:streetName:absoluteDirection:stayOn:area:bogusName:lon:lat:elevation:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable absoluteDirection __attribute__((swift_name("absoluteDirection")));
@property (readonly) NSDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryBoolean * _Nullable area __attribute__((swift_name("area")));
@property (readonly) LibraryBoolean * _Nullable bogusName __attribute__((swift_name("bogusName")));
@property (readonly) LibraryDouble * _Nullable distance __attribute__((swift_name("distance")));
@property (readonly) NSString * _Nullable elevation __attribute__((swift_name("elevation")));
@property (readonly) LibraryDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) LibraryDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable relativeDirection __attribute__((swift_name("relativeDirection")));
@property (readonly) LibraryBoolean * _Nullable stayOn __attribute__((swift_name("stayOn")));
@property (readonly) NSString * _Nullable streetName __attribute__((swift_name("streetName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Companion")))
@interface LibraryStepCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("To")))
@interface LibraryTo : LibraryBase
- (instancetype)initWithName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat vertexType:(NSString * _Nullable)vertexType additionalProperties:(NSDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(name:lon:lat:vertexType:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSDictionary<NSString *, id> *)component5 __attribute__((swift_name("component5()")));
- (LibraryTo *)doCopyName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat vertexType:(NSString * _Nullable)vertexType additionalProperties:(NSDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(name:lon:lat:vertexType:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) LibraryDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable vertexType __attribute__((swift_name("vertexType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("To.Companion")))
@interface LibraryToCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("To_")))
@interface LibraryTo_ : LibraryBase
- (instancetype)initWithName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat arrival:(LibraryLong * _Nullable)arrival vertexType:(NSString * _Nullable)vertexType additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(name:lon:lat:arrival:vertexType:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryLong * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (LibraryMutableDictionary<NSString *, id> *)component6 __attribute__((swift_name("component6()")));
- (LibraryTo_ *)doCopyName:(NSString * _Nullable)name lon:(LibraryDouble * _Nullable)lon lat:(LibraryDouble * _Nullable)lat arrival:(LibraryLong * _Nullable)arrival vertexType:(NSString * _Nullable)vertexType additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(name:lon:lat:arrival:vertexType:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryLong * _Nullable arrival __attribute__((swift_name("arrival")));
@property (readonly) LibraryDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) LibraryDouble * _Nullable lon __attribute__((swift_name("lon")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable vertexType __attribute__((swift_name("vertexType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("To_.Companion")))
@interface LibraryTo_Companion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitRouterTimes")))
@interface LibraryTransitRouterTimes : LibraryBase
- (instancetype)initWithTripPatternFilterTime:(LibraryInt * _Nullable)tripPatternFilterTime accessEgressTime:(LibraryInt * _Nullable)accessEgressTime raptorSearchTime:(LibraryInt * _Nullable)raptorSearchTime itineraryCreationTime:(LibraryInt * _Nullable)itineraryCreationTime additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(tripPatternFilterTime:accessEgressTime:raptorSearchTime:itineraryCreationTime:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (LibraryInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (LibraryInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (LibraryMutableDictionary<NSString *, id> *)component5 __attribute__((swift_name("component5()")));
- (LibraryTransitRouterTimes *)doCopyTripPatternFilterTime:(LibraryInt * _Nullable)tripPatternFilterTime accessEgressTime:(LibraryInt * _Nullable)accessEgressTime raptorSearchTime:(LibraryInt * _Nullable)raptorSearchTime itineraryCreationTime:(LibraryInt * _Nullable)itineraryCreationTime additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(tripPatternFilterTime:accessEgressTime:raptorSearchTime:itineraryCreationTime:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryInt * _Nullable accessEgressTime __attribute__((swift_name("accessEgressTime")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryInt * _Nullable itineraryCreationTime __attribute__((swift_name("itineraryCreationTime")));
@property (readonly) LibraryInt * _Nullable raptorSearchTime __attribute__((swift_name("raptorSearchTime")));
@property (readonly) LibraryInt * _Nullable tripPatternFilterTime __attribute__((swift_name("tripPatternFilterTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitRouterTimes.Companion")))
@interface LibraryTransitRouterTimesCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol LibraryKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface LibraryKotlinEnum<E> : LibraryBase <LibraryKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptimizeType")))
@interface LibraryOptimizeType : LibraryKotlinEnum<LibraryOptimizeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryOptimizeType *flat __attribute__((swift_name("flat")));
@property (class, readonly) LibraryOptimizeType *greenways __attribute__((swift_name("greenways")));
@property (class, readonly) LibraryOptimizeType *quick __attribute__((swift_name("quick")));
@property (class, readonly) LibraryOptimizeType *safe __attribute__((swift_name("safe")));
@property (class, readonly) LibraryOptimizeType *transfers __attribute__((swift_name("transfers")));
@property (class, readonly) LibraryOptimizeType *triangle __attribute__((swift_name("triangle")));
+ (LibraryKotlinArray<LibraryOptimizeType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OptimizeType.Companion")))
@interface LibraryOptimizeTypeCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TraverseModes")))
@interface LibraryTraverseModes : LibraryKotlinEnum<LibraryTraverseModes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) LibraryTraverseModes *walk __attribute__((swift_name("walk")));
@property (class, readonly) LibraryTraverseModes *transit __attribute__((swift_name("transit")));
@property (class, readonly) LibraryTraverseModes *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) LibraryTraverseModes *bicycleRent __attribute__((swift_name("bicycleRent")));
@property (class, readonly) LibraryTraverseModes *bicyclePark __attribute__((swift_name("bicyclePark")));
@property (class, readonly) LibraryTraverseModes *car __attribute__((swift_name("car")));
@property (class, readonly) LibraryTraverseModes *carPark __attribute__((swift_name("carPark")));
@property (class, readonly) LibraryTraverseModes *tram __attribute__((swift_name("tram")));
@property (class, readonly) LibraryTraverseModes *subway __attribute__((swift_name("subway")));
@property (class, readonly) LibraryTraverseModes *rail __attribute__((swift_name("rail")));
@property (class, readonly) LibraryTraverseModes *bus __attribute__((swift_name("bus")));
@property (class, readonly) LibraryTraverseModes *cableCar __attribute__((swift_name("cableCar")));
@property (class, readonly) LibraryTraverseModes *ferry __attribute__((swift_name("ferry")));
@property (class, readonly) LibraryTraverseModes *gondola __attribute__((swift_name("gondola")));
@property (class, readonly) LibraryTraverseModes *funicular __attribute__((swift_name("funicular")));
@property (class, readonly) LibraryTraverseModes *airplane __attribute__((swift_name("airplane")));
+ (LibraryKotlinArray<LibraryTraverseModes *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TraverseModes.Companion")))
@interface LibraryTraverseModesCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface LibraryError : LibraryBase
- (instancetype)initWithId:(LibraryInt * _Nullable)id message:(NSString * _Nullable)message additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("init(id:message:additionalProperties:)"))) __attribute__((objc_designated_initializer));
- (LibraryInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (LibraryMutableDictionary<NSString *, id> *)component3 __attribute__((swift_name("component3()")));
- (LibraryError *)doCopyId:(LibraryInt * _Nullable)id message:(NSString * _Nullable)message additionalProperties:(LibraryMutableDictionary<NSString *, id> *)additionalProperties __attribute__((swift_name("doCopy(id:message:additionalProperties:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryMutableDictionary<NSString *, id> *additionalProperties __attribute__((swift_name("additionalProperties")));
@property (readonly) LibraryInt * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error.Companion")))
@interface LibraryErrorCompanion : LibraryBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlanApi")))
@interface LibraryPlanApi : LibraryBase
- (instancetype)initWithUrl:(NSString *)url requestParameters:(LibraryRequestParameters *)requestParameters __attribute__((swift_name("init(url:requestParameters:)"))) __attribute__((objc_designated_initializer));
- (void)getPlanSuccess:(void (^)(LibraryPlanner *))success failure:(void (^)(LibraryKotlinThrowable * _Nullable))failure __attribute__((swift_name("getPlan(success:failure:)")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface LibraryKotlinThrowable : LibraryBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(LibraryKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (LibraryKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) LibraryKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol LibraryKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<LibraryKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<LibraryKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol LibraryKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<LibraryKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<LibraryKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol LibraryKotlinx_serialization_coreKSerializer <LibraryKotlinx_serialization_coreSerializationStrategy, LibraryKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface LibraryKotlinArray<T> : LibraryBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(LibraryInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<LibraryKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol LibraryKotlinx_serialization_coreEncoder
@required
- (id<LibraryKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<LibraryKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<LibraryKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<LibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<LibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) LibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol LibraryKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<LibraryKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<LibraryKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<LibraryKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) LibraryKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol LibraryKotlinx_serialization_coreDecoder
@required
- (id<LibraryKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<LibraryKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (LibraryKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<LibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<LibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) LibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol LibraryKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol LibraryKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<LibraryKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<LibraryKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) LibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface LibraryKotlinx_serialization_coreSerializersModule : LibraryBase
- (void)dumpToCollector:(id<LibraryKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<LibraryKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<LibraryKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<LibraryKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LibraryKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<LibraryKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<LibraryKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol LibraryKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface LibraryKotlinx_serialization_coreSerialKind : LibraryBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol LibraryKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<LibraryKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<LibraryKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<LibraryKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) LibraryKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface LibraryKotlinNothing : LibraryBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol LibraryKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<LibraryKotlinKClass>)kClass serializer:(id<LibraryKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<LibraryKotlinKClass>)baseClass actualClass:(id<LibraryKotlinKClass>)actualClass actualSerializer:(id<LibraryKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<LibraryKotlinKClass>)baseClass defaultSerializerProvider:(id<LibraryKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol LibraryKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol LibraryKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol LibraryKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol LibraryKotlinKClass <LibraryKotlinKDeclarationContainer, LibraryKotlinKAnnotatedElement, LibraryKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
