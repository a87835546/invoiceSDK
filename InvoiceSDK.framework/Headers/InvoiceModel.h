//
//  InvoiceModel.h
//  InvoiceSDK
//
//  Created by 颜程 on 2019/8/30.
//  Copyright © 2019 颜程. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface InvoiceModel : NSObject
/**  注册的微信id 带有发票功能的 (必填) */
@property (copy, nonatomic, nonnull) NSString * appId;

/**  注册是需要的secret (必填) */
@property (copy, nonatomic, nonnull) NSString * appSecret;

/**  调用的类型 1 微信  2支付宝 (必填)*/
@property (assign, nonatomic) int type;

/**  签名（选填） */
@property (copy, nonatomic, nonnull) NSString * cardSign;

/**  随机字符串 （选填）*/
@property (copy, nonatomic, nonnull) NSString * nonceStr;


/**  时间戳，采用 unix 十位时间戳（选填） */
@property (copy, nonatomic) NSString * timestamp;

/**  加密方式 ，默认SHA1， 可以不赋值 （选填）*/
@property (copy, nonatomic) NSString * signType;


@end

NS_ASSUME_NONNULL_END
