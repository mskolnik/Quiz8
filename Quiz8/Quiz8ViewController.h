//
//  Quiz8ViewController.h
//  Quiz8
//
//  Created by MariAnne Skolnik on 4/30/14.
//  Copyright (c) 2014 MariAnne Skolnik. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Draw.h"

@interface ViewController : UIViewController
{
    CGFloat lastVelocity;
}
- (IBAction)addVertical:(id)sender;
- (IBAction)addHorizontal:(id)sender;


@property (weak, nonatomic) IBOutlet Draw *drawView;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIView *rightView;
@property (weak, nonatomic) IBOutlet UIView *leftView;

@end