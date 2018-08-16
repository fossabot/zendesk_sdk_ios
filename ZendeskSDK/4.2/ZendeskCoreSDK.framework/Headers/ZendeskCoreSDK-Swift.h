// Generated by Apple Swift version 4.2 effective-4.1.50 (swiftlang-1000.0.36 clang-1000.10.44)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ZendeskCoreSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

enum ZDKLogLevel : NSInteger;

SWIFT_CLASS_NAMED("CoreLogger")
@interface ZDKCoreLogger : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum ZDKLogLevel logLevel;)
+ (enum ZDKLogLevel)logLevel SWIFT_WARN_UNUSED_RESULT;
+ (void)setLogLevel:(enum ZDKLogLevel)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL enabled;)
+ (BOOL)enabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setEnabled:(BOOL)value;
+ (void)error:(NSString * _Nonnull)message;
+ (void)warn:(NSString * _Nonnull)message;
+ (void)info:(NSString * _Nonnull)message;
+ (void)debug:(NSString * _Nonnull)message;
+ (void)verbose:(NSString * _Nonnull)message;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@class NSURLRequest;

/// Utility to add auth headers to content requests for restricted Help Centers
SWIFT_CLASS_NAMED("HelpCenterUtil")
@interface ZDKHelpCenterUtil : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nullable zendeskURL;)
+ (NSString * _Nullable)zendeskURL SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL hasAuth;)
+ (BOOL)hasAuth SWIFT_WARN_UNUSED_RESULT;
+ (NSURLRequest * _Nonnull)canonicalRequestFor:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, ZDKLogLevel, "LogLevel", closed) {
  ZDKLogLevelError = 0,
  ZDKLogLevelWarn = 1,
  ZDKLogLevelInfo = 2,
  ZDKLogLevelDebug = 3,
  ZDKLogLevelVerbose = 4,
};






/// A user in Zendesk.
SWIFT_CLASS_NAMED("User")
@interface ZDKUser : NSObject
/// The user’s id
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
/// The user’s name
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// The users content url
@property (nonatomic, readonly, copy) NSString * _Nonnull content_url;
/// Bool to indicate whether the user is an agent or not
@property (nonatomic, readonly) BOOL agent;
/// Tags associated with the user.
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nonnull tags;
/// User fields for this user as a dictionary with the key being the name of the user field
/// and the corresponding value being the value of the user field set for this user.
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSString *> * _Nonnull user_fields;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class ZDKUserFieldOption;

/// User Field in Zendesk
SWIFT_CLASS_NAMED("UserField")
@interface ZDKUserField : NSObject
/// User Field id
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
/// Url of user field
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
/// key of the user field
@property (nonatomic, readonly, copy) NSString * _Nonnull key;
/// type of the user field as a string
@property (nonatomic, readonly, copy) NSString * _Nonnull fieldType;
/// title of user field
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
/// raw title of user field
@property (nonatomic, readonly, copy) NSString * _Nonnull raw_title;
/// Description of user field
@property (nonatomic, readonly, copy) NSString * _Nonnull fieldDescription;
/// Raw description of user field
@property (nonatomic, readonly, copy) NSString * _Nonnull raw_description;
/// Position of user field
@property (nonatomic, readonly) NSInteger position;
/// bool indicating if user field is active
@property (nonatomic, readonly) BOOL active;
/// bool indicating if it is a system user fild or not
@property (nonatomic, readonly) BOOL system;
/// regex of user field
@property (nonatomic, readonly, copy) NSString * _Nonnull regexp_for_validation;
/// The timestamp of when the field was created
@property (nonatomic, readonly, copy) NSDate * _Nonnull created_at;
/// The timestamp of when the field was last updated
@property (nonatomic, readonly, copy) NSDate * _Nonnull updated_at;
/// Options for the custom userfield. An array of ZDKCustomField objects
@property (nonatomic, readonly, copy) NSArray<ZDKUserFieldOption *> * _Nullable custom_field_options;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// Dropdown userfields can contain User fields options which describe an option in the
/// dropdown
SWIFT_CLASS_NAMED("UserFieldOption")
@interface ZDKUserFieldOption : NSObject
/// id of option
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
/// name of option
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// position of option
@property (nonatomic, readonly) NSInteger position;
/// raw_name of option
@property (nonatomic, readonly, copy) NSString * _Nonnull raw_name;
/// url of option
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
/// value of option
@property (nonatomic, readonly, copy) NSString * _Nonnull value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP14ZendeskCoreSDK15ZDKObjCIdentity_")
@protocol ZDKObjCIdentity
@end


SWIFT_CLASS("_TtC14ZendeskCoreSDK16ZDKObjCAnonymous")
@interface ZDKObjCAnonymous : NSObject <ZDKObjCIdentity>
@property (nonatomic, readonly, copy) NSString * _Nullable name;
@property (nonatomic, readonly, copy) NSString * _Nullable email;
@property (nonatomic, readonly, copy) NSString * _Nullable guid;
- (nonnull instancetype)initWithName:(NSString * _Nullable)name email:(NSString * _Nullable)email OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC14ZendeskCoreSDK10ZDKObjCJwt")
@interface ZDKObjCJwt : NSObject <ZDKObjCIdentity>
@property (nonatomic, readonly, copy) NSString * _Nonnull token;
- (nonnull instancetype)initWithToken:(NSString * _Nonnull)token OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class ZDKZendesk;

/// An objective-c visible class for the Push Registration Provider
/// Provider to register and unregister a device for push notifications.
SWIFT_CLASS("_TtC14ZendeskCoreSDK15ZDKPushProvider")
@interface ZDKPushProvider : NSObject
/// Initialize the provider
/// \param zendesk An instance of the zendesk singleton
///
- (nonnull instancetype)initWithZendesk:(ZDKZendesk * _Nonnull)zendesk OBJC_DESIGNATED_INITIALIZER;
/// Calls a push registration end point to register the given APNS device id.
/// This method stores the response on successful registration.
/// Subsequent calls to this method with the same <code>identifier</code> bypass calls to the
/// network and return the stored response in the completion handler.
/// Calling this method with a different <code>identifier</code> will remove any stored
/// response from storage.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     deviceIdentifier: The device identifier
///   </li>
///   <li>
///     locale: The preferred device locale
///   </li>
///   <li>
///     completion: Returns a push response if successful with a nil for the error
///   </li>
/// </ul>
- (void)registerWithDeviceIdentifier:(NSString * _Nonnull)deviceIdentifier locale:(NSString * _Nonnull)locale completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
/// Calls a push registration end point to register the given Urban Airship channel id.
/// This method stores the response on successful registration.
/// Subsequent calls to this method with the same <code>identifier</code> bypass calls to the
/// network and return the stored response in the completion handler.
/// Calling this method with a different <code>identifier</code> will remove any stored
/// response from storage.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     UAIdentifier: The channel identifier
///   </li>
///   <li>
///     locale: The preferred device locale
///   </li>
///   <li>
///     completion: Returns a push response if successful with a nil for the error
///   </li>
/// </ul>
- (void)registerWithUAIdentifier:(NSString * _Nonnull)UAIdentifier locale:(NSString * _Nonnull)locale completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
/// Calls a push unregister endpoint with the stored device identifier
- (void)unregisterForPush;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


/// An objective-c visible class for the User Provider
SWIFT_CLASS("_TtC14ZendeskCoreSDK15ZDKUserProvider")
@interface ZDKUserProvider : NSObject
/// Initialize the provider
/// \param zendesk An instance of the zendesk singleton
///
- (nonnull instancetype)initWithZendesk:(ZDKZendesk * _Nonnull)zendesk OBJC_DESIGNATED_INITIALIZER;
/// Gets a user object for the current user with only tags and user fields populated
/// \param completion Returns a user object if successful with a nil for the error
///
- (void)getUserWithCompletion:(void (^ _Nonnull)(ZDKUser * _Nullable, NSError * _Nullable))completion;
/// Set one or more user field values on the current user.
/// To see the fields available for setting use the get
/// User method and inspect the user fields dictionary.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     userfields: The user field to set.  It expects a dictionary(not a ZDKUserField).
///     The key of this dictionary being the name of the user field and the corresponding value
///     being the user field value to be set for the current user.
///   </li>
///   <li>
///     completion: Returns a user object if successful with a nil for the error
///   </li>
/// </ul>
- (void)setUserFields:(NSDictionary<NSString *, id> * _Nonnull)userFields completion:(void (^ _Nonnull)(ZDKUser * _Nullable, NSError * _Nullable))completion;
/// Gets all user fields available for an account instance.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     completion: Returns an array of userfield objects if successful with a nil error.
///   </li>
/// </ul>
- (void)getUserFieldsWithCompletion:(void (^ _Nonnull)(NSArray<ZDKUserField *> * _Nonnull, NSError * _Nullable))completion;
/// Add tags to the current user.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     tags: The tags to be added
///   </li>
///   <li>
///     completion: Returns an array of tags set on the current user if successful with nil error
///   </li>
/// </ul>
- (void)addTags:(NSArray<NSString *> * _Nonnull)tags completion:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull, NSError * _Nullable))completion;
/// Delete tags from the current user.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     tags: The tags to be deleted
///   </li>
///   <li>
///     completion: Returns an array of tags set on the current user if successful with nil error
///   </li>
/// </ul>
- (void)deleteTags:(NSArray<NSString *> * _Nonnull)tags completion:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS_NAMED("Zendesk")
@interface ZDKZendesk : NSObject
+ (void)initializeWithAppId:(NSString * _Nonnull)appId clientId:(NSString * _Nonnull)clientId zendeskUrl:(NSString * _Nonnull)zendeskUrl;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




@interface ZDKZendesk (SWIFT_EXTENSION(ZendeskCoreSDK))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDKZendesk * _Nullable instance;)
+ (ZDKZendesk * _Nullable)instance SWIFT_WARN_UNUSED_RESULT;
- (void)setIdentity:(id <ZDKObjCIdentity> _Nonnull)newIdentity;
- (id <ZDKObjCIdentity> _Nullable)objCIdentity SWIFT_WARN_UNUSED_RESULT;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
