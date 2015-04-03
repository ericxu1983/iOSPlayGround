//
//  ToDoItem.h
//  ToDoList
//
//  Created by ericxu on 15/4/3.
//  Copyright (c) 2015年 ericxu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString* itemName;
@property BOOL completed;
@property(readonly) NSDate* creationDate;

@end
