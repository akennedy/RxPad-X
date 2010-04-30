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
	UITextField *nameText;
	UITextField *locationText;
	UITextField *phoneText;

    RootViewController *rootViewController;
}

@property (nonatomic, retain) IBOutlet UIToolbar *toolbar;

@property (nonatomic, retain) NSManagedObject *detailItem;
@property (nonatomic, retain) IBOutlet UILabel *patientsNameLabel;
@property (nonatomic, retain) IBOutlet UILabel *patientsLocationLabel;
@property (nonatomic, retain) IBOutlet UILabel *patientsPhoneLabel;
@property (nonatomic, retain) IBOutlet UITextField *nameText;
@property (nonatomic, retain) IBOutlet UITextField *locationText;
@property (nonatomic, retain) IBOutlet UITextField *phoneText;

@property (nonatomic, assign) IBOutlet RootViewController *rootViewController;

- (IBAction)insertNewObject:(id)sender;
- (IBAction)makeKeyboardGoAway;

@end
