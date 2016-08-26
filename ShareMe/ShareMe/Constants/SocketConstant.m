//
//  SocketConstant.m
//  ShareMe
//
//  Created by Nguyen Xuan Thanh on 8/19/16.
//  Copyright © 2016 Framgia. All rights reserved.
//

#import "SocketConstant.h"

@implementation SocketConstant

NSString *const kSendingRequestSignal = @"TO";
NSString *const kReceivingRequestSignal = @"RE";

NSString *const kServerHost = @"127.0.0.1";
int const kServerPort = 1994;

NSString *const kMessageFormat = @"%@~%@~%@!";
NSString *const kEndOfStream = @"!";
NSString *const kDelim = @"~";

NSString *const kSuccessMessage = @"TRUE";
NSString *const kFailureMessage = @"FALSE";

NSString *const kUserLoginAction = @"USER_LOGIN";
NSString *const kUserRegisterAction = @"USER_REGISTER";

NSString *const kUserAcceptRequestAction = @"USER_ACCEPT_FRIEND_REQUEST";
NSString *const kUserDeclineRequestAction = @"USER_DECLINE_FRIEND_REQUEST";
NSString *const kUserCancelRequestAction = @"USER_CANCEL_FRIEND_REQUEST";

NSString *const kUserSendRequestToUserAction = @"SEND_FRIEND_REQUEST_TO_USER";
NSString *const kUserCancelRequestToUserAction = @"SEND_CANCEL_FRIEND_REQUEST_TO_USER";
NSString *const kUserAddFriendToUserAction = @"ADD_FRIEND_TO_USER";
NSString *const kUserDeclineRequestToUserAction = @"DECLINE_FRIEND_REQUEST_TO_USER";
NSString *const kUserUnfriendToUserAction = @"UNFRIEND_TO_USER";

NSString *const kUserSearchFriendAction = @"USER_SEARCH_FRIEND";

NSString *const kUserUnfriendAction = @"USER_UNFRIEND_USER";
NSString *const kUserSendRequestAction = @"USER_SEND_FRIEND_REQUEST";

@end
