//
//  NewsFeedTableViewController.h
//  ShareMe
//
//  Created by Nguyen Xuan Thanh on 8/24/16.
//  Copyright © 2016 Framgia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FViewController.h"

@class Story;

@interface NewsFeedViewController : FViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) NSMutableArray<Story *> *topStories;

@end
