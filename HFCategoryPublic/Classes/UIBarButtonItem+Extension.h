//
//  UIBarButtonItem+Extension.h
//  SpaceZone
//
//  Created by zack on 15/12/24.
//  Copyright © 2015年 favtouth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Extension)
+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action image:(NSString *)image highImage:(NSString *)highImage;
+ (UIBarButtonItem *)itemWithTarget:(id)target action:(SEL)action title:(NSString *)title;

@end
