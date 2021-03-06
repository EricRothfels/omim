//
//  MRTracker.h
//  myTrackerSDK 1.4.9
//
//  Created by Igor Glotov on 22.07.14.
//  Copyright © 2014 Mail.ru Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyTrackerSDK/MRTrackerParams.h>

@interface MRTracker : NSObject

+ (BOOL)debugMode;
+ (void)setDebugMode:(BOOL)enable;

- (MRTrackerParams *)getTrackerParams;

- (void)setup;
- (BOOL)isInitialized;

- (void)trackEvent:(NSString *)name;
- (void)trackEvent:(NSString *)name eventParams:(NSDictionary *)eventParams;

- (void)trackLoginEvent;
- (void)trackLoginEventWithParams:(NSDictionary *)eventParams;

- (void)trackInviteEvent;
- (void)trackInviteEventWithParams:(NSDictionary *)eventParams;

- (void)trackRegistrationEvent;
- (void)trackRegistrationEventWithParams:(NSDictionary *)eventParams;

- (void) trackPurchaseWithProduct:(id)product transaction:(id)transaction;
- (void) trackPurchaseWithProduct:(id)product transaction:(id)transaction eventParams:(NSDictionary *)eventParams;

-(void) trackLevelAchieved;
-(void) trackLevelAchieved:(NSNumber*)level;
-(void) trackLevelAchieved:(NSNumber*)level eventParams:(NSDictionary *)eventParams;

@end
