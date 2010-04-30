//
//  Patients.h
//  RxPad
//
//  Created by Andrew Kennedy on 4/29/10.
//  Copyright 2010 Andrew Kennedy. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Patients :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * location;
@property (nonatomic, retain) NSString * phone;

@end



