/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class MCProfile, NSArray, NSDictionary, NSString;

@interface MCPayload : NSObject {
    NSString *_UUID;
    NSString *_displayName;
    NSString *_identifier;
    BOOL _mustInstallNonInteractively;
    NSString *_organization;
    NSString *_payloadDescription;
    NSString *_persistentResourceID;
    MCProfile *_profile;
    NSString *_type;
    int _version;
}

@property(retain,readonly) NSString * UUID;
@property(retain) NSString * displayName;
@property(retain,readonly) NSString * friendlyName;
@property(retain,readonly) NSString * identifier;
@property(retain,readonly) NSArray * installationWarnings;
@property BOOL mustInstallNonInteractively;
@property(retain,readonly) NSString * organization;
@property(retain,readonly) NSString * payloadDescription;
@property(retain) NSString * persistentResourceID;
@property(readonly) MCProfile * profile;
@property(readonly) NSDictionary * restrictions;
@property(retain,readonly) NSString * type;
@property(readonly) int version;

+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)typeStrings;
+ (id)wrapperPayloadDictionary;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (id)displayName;
- (id)friendlyName;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (BOOL)mustInstallNonInteractively;
- (id)organization;
- (id)payloadDescription;
- (id)payloadDescriptionKeyValueSections;
- (id)persistentResourceID;
- (id)profile;
- (id)restrictions;
- (void)setDisplayName:(id)arg1;
- (void)setMustInstallNonInteractively:(BOOL)arg1;
- (void)setPersistentResourceID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (id)type;
- (int)version;

@end