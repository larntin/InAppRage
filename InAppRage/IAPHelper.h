//
//  IAPHelper.h
//  InAppRage
//
//  Created by Thao Nguyen Huy on 5/4/13.
//  Copyright (c) 2013 CNC Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

UIKIT_EXTERN NSString *const IAPHelperProductPurchasedNotification;

typedef void (^RequestProductsCompletionHandler)(BOOL success, NSArray *products);

@interface IAPHelper : NSObject

- (id)initWithProductIdentifiers:(NSSet *)productIdentifiers;
- (void)requestProductsWithCompletionHandler:(RequestProductsCompletionHandler)completionHandler;
- (BOOL)productPurchased:(NSString *)productIdentifier;
- (void)buyProduct:(SKProduct *)product;
- (void)restoreCompletedTransactions;

@end
