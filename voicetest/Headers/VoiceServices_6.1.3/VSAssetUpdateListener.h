/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject {
	BOOL _isListening;
	PCPersistentTimer *_assetCleanupTimer;
}
+(id)sharedListener;
-(id)init;
-(void)_cancelAssetCleanupTimer;
-(void)_cleanupAssets;
-(void)_flushLanguageChanges;
-(id)_initShared;
-(void)_rescheduleAssetCleanup;
-(void)_scheduleNextCleanupForDate:(id)date;
-(void)_spokenLanguageChanged:(id)changed;
-(void)_updateNextCleanupDate;
-(BOOL)assetDownloadStatus:(id)status progress:(float *)progress size:(long long *)size;
-(int)assetStatusForLanguage:(id)language;
-(void)dealloc;
-(void)downloadAssetForLanguage:(id)language;
-(id)downloadingAssetLanguage;
-(void)removeAssetForLanguage:(id)language;
-(void)startListening;
-(void)stopListening;
@end

