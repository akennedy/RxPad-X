//
//  DetailViewController.h
//  RxPad
//
//  Created by Andrew Kennedy on 4/28/10.
//  Copyright Andrew Kennedy 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@class Patients, RootViewController;

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate> {
    
    UIPopoverController *popoverController;
    UIToolbar *toolbar;
    
    Patients *detailItem;
    UILabel *patientsNameLabel;
	UILabel *patientsLocationLabel;
	UILabel *patientsPhoneLabel;

    RootViewController *rootViewController;
}

@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;

@property (nonatomic, retain) NSManagedObject *detailItem;
@property (nonatomic, retain) IBOutlet UILabel *patientsNameLabel;
@property (nonatomic, retain) IBOutlet UILabel *patientsLocationLabel;
@property (nonatomic, retain) IBOutlet UILabel *patientsPhoneLabel;

@property (nonatomic, assign) IBOutlet RootViewController *rootViewController;

- (IBAction)insertNewObject:(id)sender;

@end
