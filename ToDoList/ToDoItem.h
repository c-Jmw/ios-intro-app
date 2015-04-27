//
//  ToDoItem.h
//  ToDoList
//
//  Created by Casey Macrae on 27/04/2015.
//  Copyright (c) 2015 Casey Macrae. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
