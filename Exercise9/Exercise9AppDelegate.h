//
//  Exercise9AppDelegate.h
//  Exercise9
//
//  Created by Gabriel Aliotta on 2/22/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Exercise9ViewController;

@interface Exercise9AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) NSMutableArray *myArray;

@property (nonatomic, retain) IBOutlet Exercise9ViewController *viewController;

@end
