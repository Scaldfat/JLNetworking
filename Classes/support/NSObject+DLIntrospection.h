//
//  NSObject+DLIntrospection.h
//  JLNetworking
//
//  Created by jeremyLyu on 15/9/1.
//  Copyright (c) 2015年 jeremyLyu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (DLIntrospection)
+ (NSArray *)classes;
+ (NSArray *)properties;
+ (NSString *)parentClassHierarchy;
@end
