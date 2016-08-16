//
//  DetailViewController.h
//  CoffeeKit
//
//  Created by Swarup_Pattnaik on 17/08/16.
//  Copyright © 2016 Swarup_Pattnaik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

