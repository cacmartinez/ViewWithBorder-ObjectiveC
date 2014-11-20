//
//
//  Created by Carlos  Compean on 3/5/14.
//  Copyright (c) 2014 Carlos Compean. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface ViewWithBorder : UIView

typedef NS_OPTIONS(NSInteger, Border){
    Border_None,
    Border_Bottom,
    Border_Left,
    Border_Top,
    Border_Right
};

@property IBInspectable double    borderWidth;
@property IBInspectable double    cornerRadius;
@property IBInspectable UIColor*  borderColor;
@property IBInspectable BOOL      borderBottom;
@property IBInspectable BOOL      borderRight;
@property IBInspectable BOOL      borderLeft;
@property IBInspectable BOOL      borderTop;

-(id)initWithFrame:(CGRect)frame border:(Border)border radius:(double)radius color:(UIColor *)color borderWidth:(double)width;
- (void)updateView;

@end
