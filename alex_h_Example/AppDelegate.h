//
//  AppDelegate.h
//  alex_h_Example
//
//  Created by hxw on 2018/8/29.
//  Copyright © 2018年 alex_h. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

