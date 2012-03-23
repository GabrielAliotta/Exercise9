//
//  RecipeViewController.h
//  Exercise9
//
//  Created by Gabriel Aliotta on 2/23/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Exercise9AppDelegate;

@interface RecipeViewController : UITableViewController {
    
}

@property (nonatomic, retain) Exercise9AppDelegate *appDelegate;

- (id)initWithStyle:(UITableViewStyle)style andDelegate:(Exercise9AppDelegate *)delegate;

@end
