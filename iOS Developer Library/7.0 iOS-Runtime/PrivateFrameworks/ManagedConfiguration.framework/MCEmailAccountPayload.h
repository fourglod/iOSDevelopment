/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase {
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSNumber *_incomingMailServerPortNumber;
    BOOL _incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    BOOL _outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
    NSString *_outgoingPassword;
    BOOL _outgoingPasswordSameAsIncomingPassword;
}

@property(retain,readonly) NSString * emailAccountDescription;
@property(retain,readonly) NSString * emailAccountName;
@property(retain,readonly) NSString * emailAccountType;
@property(retain,readonly) NSString * emailAddress;
@property(retain,readonly) NSString * incomingMailServerAuthentication;
@property(retain,readonly) NSString * incomingMailServerHostname;
@property(retain,readonly) NSString * incomingMailServerIMAPPathPrefix;
@property(retain,readonly) NSNumber * incomingMailServerPortNumber;
@property(readonly) BOOL incomingMailServerUseSSL;
@property(retain,readonly) NSString * incomingMailServerUsername;
@property(retain,readonly) NSString * incomingPassword;
@property(retain,readonly) NSString * outgoingMailServerAuthentication;
@property(retain,readonly) NSString * outgoingMailServerHostname;
@property(retain,readonly) NSNumber * outgoingMailServerPortNumber;
@property(readonly) BOOL outgoingMailServerUseSSL;
@property(retain,readonly) NSString * outgoingMailServerUsername;
@property(retain,readonly) NSString * outgoingPassword;
@property(readonly) BOOL outgoingPasswordSameAsIncomingPassword;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_authenticationTypeLocalizedString:(id)arg1;
- (id)_emailAccountTypeLocalizedString;
- (id)description;
- (id)emailAccountDescription;
- (id)emailAccountName;
- (id)emailAccountType;
- (id)emailAddress;
- (id)incomingMailServerAuthentication;
- (id)incomingMailServerHostname;
- (id)incomingMailServerIMAPPathPrefix;
- (id)incomingMailServerPortNumber;
- (BOOL)incomingMailServerUseSSL;
- (id)incomingMailServerUsername;
- (id)incomingPassword;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)outgoingMailServerAuthentication;
- (id)outgoingMailServerHostname;
- (id)outgoingMailServerPortNumber;
- (BOOL)outgoingMailServerUseSSL;
- (id)outgoingMailServerUsername;
- (id)outgoingPassword;
- (BOOL)outgoingPasswordSameAsIncomingPassword;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end