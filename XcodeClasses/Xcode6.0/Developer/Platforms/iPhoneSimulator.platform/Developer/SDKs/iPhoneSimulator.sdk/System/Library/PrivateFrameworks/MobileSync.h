//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MobileSync.framework/MobileSync
// UUID: 454A6C6D-FE4C-38EA-B594-4F0A4391F11E
//
//                           Arch: x86_64
//                Current version: 927.0.0
//          Compatibility version: 1.0.0
//                 Source version: 929.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@interface ACAccount (SyncPrivate)
- (void)setPasswordFromSync:(id)arg1;
- (void)applySyncProperties:(id)arg1;
- (id)_usernameFromProperties:(id)arg1;
- (id)syncIdentityString;
- (_Bool)isMobileMeAccount;
@end

@interface ACAccountStore (SyncPrivate)
- (id)mailAccountsForSync;
- (_Bool)hasMailAccountsForSync;
- (id)_mailAccountTypeIdentifiers;
@end

