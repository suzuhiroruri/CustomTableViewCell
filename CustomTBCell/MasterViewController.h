//
//  MasterViewController.h
//  CustomTBCell
//
//  Created by 鈴木 宏昌 on 2013/07/20.
//  Copyright (c) 2013年 鈴木 宏昌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "customCell.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
