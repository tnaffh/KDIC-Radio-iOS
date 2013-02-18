//
//  AppDelegate.h
//  KDIC
//
//  Created by Lea Marolt on 10/24/12.
//  Copyright (c) 2012 Lea Marolt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@property (strong, nonatomic) AVPlayer *streamer;

@end
