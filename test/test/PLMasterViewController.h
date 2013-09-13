//
//  PLMasterViewController.h
//  test
//
//  Created by Doug Andrew on 9/13/13.
//  Copyright (c) 2013 Doug Andrew. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PLDetailViewController;

#import <CoreData/CoreData.h>

@interface PLMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) PLDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
