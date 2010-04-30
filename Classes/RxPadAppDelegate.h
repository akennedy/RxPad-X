//
//  RxPadAppDelegate.h
//  RxPad
//
//  Created by Andrew Kennedy on 4/28/10.
//  Copyright Andrew Kennedy 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>


@class RootViewController;
@class DetailViewController;

@interface RxPadAppDelegate : NSObject <UIApplicationDelegate> {
    
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
	
    UIWindow *window;

	UISplitViewController *splitViewController;

	RootViewController *rootViewController;
	DetailViewController *detailViewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UISplitViewController *splitViewController;
@property (nonatomic, retain) IBOutlet RootViewController *rootViewController;
@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end
