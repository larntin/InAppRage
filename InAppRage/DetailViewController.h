//
//  DetailViewController.h
//  InAppRage
//
//  Created by Thao Nguyen Huy on 5/4/13.
//  Copyright (c) 2013 CNC Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
