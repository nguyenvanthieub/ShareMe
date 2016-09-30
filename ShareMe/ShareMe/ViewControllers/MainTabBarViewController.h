//
//  MainTabBarViewController.h
//  ShareMe
//
//  Created by Nguyen Xuan Thanh on 8/24/16.
//  Copyright © 2016 Framgia. All rights reserved.
//

#import <UIKit/UIKit.h>

@class User;
@class Message;

@interface MainTabBarViewController : UITabBarController

@property (strong, nonatomic) User *loggedInUser;
@property (strong, nonatomic) NSMutableArray<Message *> *latestMessages;

@end
