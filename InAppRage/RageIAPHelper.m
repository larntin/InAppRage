//
//  RageIAPHelper.m
//  InAppRage
//
//  Created by Thao Nguyen Huy on 5/4/13.
//  Copyright (c) 2013 CNC Software. All rights reserved.
//

#import "RageIAPHelper.h"

@implementation RageIAPHelper

+ (RageIAPHelper *)sharedHelper {
    static RageIAPHelper *sharedHelper;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSSet * productIdentifiers = [NSSet setWithObjects:
                                      @"Item_0",
                                      @"Item_1",
                                      @"Upgrade_1",
                                      nil];
        sharedHelper = [[self alloc] initWithProductIdentifiers:productIdentifiers];
    });
    return sharedHelper;
}

@end
