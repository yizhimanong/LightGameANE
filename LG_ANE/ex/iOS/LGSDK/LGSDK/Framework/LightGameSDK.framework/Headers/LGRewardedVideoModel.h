//
//  LGRewardedVideoModel.h
//  LightGameSDK
//
//  Created by wangchao on 2019/7/9.
//  Copyright © 2019 byteDance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface LGRewardedVideoModel : NSObject

/**
 required.
 Third-party game user_id identity.
 Mainly used in the reward issuance, it is the callback pass-through parameter from server-to-server.
 It is the unique identifier of each user.
 In the non-server callback mode, it will also be pass-through when the video is finished playing.
 Only the string can be passed in this case, not nil.
 */
@property (nonatomic, copy) NSString *userId;

//optional. reward name.
@property (nonatomic, copy) NSString *rewardName;

//optional. number of rewards.
@property (nonatomic, assign) NSInteger rewardAmount;

//optional. serialized string.
@property (nonatomic, copy) NSString *extra;

- (id)getBUVideoModel;

@end

NS_ASSUME_NONNULL_END
