//
//  DetailViewController.h
//  tempGit
//
//  Created by PRo5 on 10/1/13.
//  Copyright (c) 2013 PRo5. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
