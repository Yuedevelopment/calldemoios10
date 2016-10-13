//
//  AppDelegate.h
//  CallDemo
//
//  Created by tgheyue on 2016/10/13.
//  Copyright © 2016年 tgheyue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

