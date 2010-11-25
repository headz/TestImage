//
//  TestImageAppDelegate.h
//  TestImage
//
//  Created by Kurt Delaplace on 19/11/10.
//  Copyright 2010 Headz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TestImageAppDelegate : NSObject <UIApplicationDelegate,
											UIScrollViewDelegate> 
{
    UIWindow *window;
	IBOutlet UIImageView* imageView;
	IBOutlet UIScrollView* scrollView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

