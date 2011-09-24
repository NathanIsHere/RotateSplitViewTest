//
//  AppDelegate_iPad.h
//  RotateSplitViewTest
//
//  Created by Nathan Aichinger on 24/09/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MasterViewController;

@interface AppDelegate_iPad : NSObject <UIApplicationDelegate> {
	UIWindow *mainWindow;
    UITabBarController *tabBarController;
	MasterViewController *aMasterVC;
	MasterViewController *bMasterVC;
	MasterViewController *cMasterVC;	
}

@property (nonatomic, retain) IBOutlet UIWindow *mainWindow;
@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;
@property (nonatomic, retain) IBOutlet MasterViewController *aMasterVC;
@property (nonatomic, retain) IBOutlet MasterViewController *bMasterVC;
@property (nonatomic, retain) IBOutlet MasterViewController *cMasterVC;

// Convenience Methods / Accessors
@property (nonatomic, readonly) UISplitViewController *splitViewController;
@property (nonatomic, readonly) UIViewController *currentMasterViewController;
@property (nonatomic, readonly) UINavigationController *masterNavigationController;
@property (nonatomic, readonly) UINavigationController *detailNavigationController;

@end


