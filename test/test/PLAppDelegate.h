//
//  PLAppDelegate.h
//  test
//
//  Created by Doug Andrew on 9/13/13.
//  Copyright (c) 2013 Doug Andrew. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PLAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
