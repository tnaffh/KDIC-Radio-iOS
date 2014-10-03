//
//  KDICNetworkManager.h
//  KDIC
//
//  Created by Tremblay on 9/30/14.
//  Copyright (c) 2014 Colin Tremblay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KDICNetworkManager : NSObject

extern NSString * const KDIC_URL;
extern NSString * const LIVE_STREAM_URL;
extern NSString * const KDIC_ABOUT_URL;
extern NSString * const KDIC_SCHEDULE_URL;
extern NSString * const TCDB_BASE_URL;
extern NSString * const KDIC_BASE_URL;

+ (BOOL)networkCheckForURLString:(NSString *)urlString;
+ (BOOL)networkCheckForURL:(NSURL *)url;
+ (NSMutableURLRequest *)urlRequestWithURLString:(NSString *)urlString;
+ (NSMutableURLRequest *)urlRequestWithURL:(NSURL *)url;

@end
