//
//  UIColor+Extension.h
//  Advert
//
//  Created by zack on 16/4/28.
//  Copyright © 2016年 ZACK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extension)
+ (UIColor*) colorWithHex:(NSInteger)hexValue;
+ (UIColor *) colorWithHexString: (NSString *)color;
@end
