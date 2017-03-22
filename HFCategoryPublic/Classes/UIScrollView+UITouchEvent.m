//
//  UIScrollView+UITouchEvent.m
//  Advert
//
//  Created by zack on 16/5/30.
//  Copyright © 2016年 ZACK. All rights reserved.
//

#import "UIScrollView+UITouchEvent.h"

@implementation UIScrollView (UITouchEvent)
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    [[self nextResponder] touchesBegan:touches withEvent:event];
    [super touchesBegan:touches withEvent:event];
}
@end
