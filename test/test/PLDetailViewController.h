//
//  PLDetailViewController.h
//  test
//
//  Created by Doug Andrew on 9/13/13.
//  Copyright (c) 2013 Doug Andrew. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PLDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
