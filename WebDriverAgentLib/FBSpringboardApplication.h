/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <WebDriverAgentLib/FBApplication.h>

NS_ASSUME_NONNULL_BEGIN

/*! Bundle identifier of Springboard app */
extern NSString *const SPRINGBOARD_BUNDLE_ID;

@interface FBSpringboardApplication : FBApplication

/**
 @return FBApplication that is attached to SpringBoard
 */
+ (instancetype)fb_springboard;

/**
 Switch to Springboard app

 @param error If there is an error, upon return contains an NSError object that describes the problem.
 @return YES if the operation succeeds, otherwise NO.
*/
- (BOOL)fb_switchToWithError:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
