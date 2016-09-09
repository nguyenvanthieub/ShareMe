//
//  SocketConstant.h
//  ShareMe
//
//  Created by Nguyen Xuan Thanh on 8/19/16.
//  Copyright © 2016 Framgia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SocketConstant : NSObject

extern NSString *const kSendingRequestSignal;
extern NSString *const kReceivingRequestSignal;

extern NSString *const kServerHost;
extern int const kServerPort;

extern NSString *const kMessageFormat;
extern NSString *const kFinalMessageFormat;
extern NSInteger const kDefaultBufferLength;
extern NSString *const kStartOfStream;
extern NSString *const kEndOfStream;
extern NSString *const kDelim;

extern NSString *const kSuccessMessage;
extern NSString *const kFailureMessage;

extern NSString *const kCloseConnection;
extern NSString *const kEmptyMessage;

extern NSString *const kUserLoginAction;
extern NSString *const kUserRegisterAction;

extern NSString *const kUserAcceptRequestAction;
extern NSString *const kUserDeclineRequestAction;
extern NSString *const kUserCancelRequestAction;

extern NSString *const kUserSendRequestToUserAction;
extern NSString *const kUserCancelRequestToUserAction;
extern NSString *const kUserAddFriendToUserAction;
extern NSString *const kUserDeclineRequestToUserAction;
extern NSString *const kUserUnfriendToUserAction;

extern NSString *const kUserSearchFriendAction;

extern NSString *const kUserUnfriendAction;
extern NSString *const kUserSendRequestAction;

extern NSString *const kUserCreateNewStoryAction;

extern NSString *const kUserGetTopStoriesAction;
extern NSString *const kAddImageToStory;
extern NSString *const kUserLikeStoryAction;
extern NSString *const kLikedMessage;
extern NSString *const kUnlikedMessage;

@end
