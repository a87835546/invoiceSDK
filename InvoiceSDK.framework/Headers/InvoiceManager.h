//
//  InvoiceManager.h
//  InvoiceSDK
//
//  Created by 颜程 on 2019/8/29.
//  Copyright © 2019 颜程. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
@class InvoiceModel;
@interface InvoiceManager : NSObject
+ (instancetype)shareInstance;

/**  点击调起微信或者支付宝的发票列表
 *  根据 InvoiceModel 中的type 字段来判断获是支付宝还是微信
 *  获取发票数据成功后回调 cards 就是发票信息
 * */
- (void)clickInvoiceManagerSDKWithReq:(InvoiceModel*)req getResult:(void (^)(NSArray* cards))result;

/**  选择的发票，获取到发票id数组cardIds */
- (void)handleApplicationWithCardIdArr:(NSArray *)cardIds;

@end


NS_ASSUME_NONNULL_END
