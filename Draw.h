//
//  Quiz8.h
//  Quiz8
//
//  Created by MariAnne Skolnik on 4/30/14.
//  Copyright (c) 2014 MariAnne Skolnik. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Draw : UIView
-(void) saveCurrentPoint;
-(void) forceRedraw;

@property (nonatomic) CGPoint currentPoint;
@property (nonatomic, strong) NSMutableArray *allPoints;

@property (nonatomic) CGFloat HorizontalAngle;
@property (nonatomic) CGFloat Velocity;
@property (nonatomic) CGFloat VerticalAngle;

@end
