//
//  GKNavigationBarViewController.h
//  GKNavigationBarViewController
//
//  Created by QuintGao on 2017/7/7.
//  Copyright © 2017年 高坤. All rights reserved.
//  所有需要显示导航条的基类，可根据自己的需求设置导航栏
//  基本原理就是为每一个控制器添加自定义导航条，做到导航条与控制器相连的效果

#import <UIKit/UIKit.h>

#import "UINavigationController+GKCategory.h"
#import "UIViewController+GKCategory.h"
#import "UIScrollView+GKCategory.h"

#import "GKNavigationBarConfigure.h"

@interface GKNavigationBarViewController : UIViewController

/**
 自定义导航条
 */
@property (nonatomic, strong, readonly) UINavigationBar *gk_navigationBar;

/**
 自定义导航栏栏目
 */
@property (nonatomic, strong, readonly) UINavigationItem *gk_navigationItem;

#pragma mark - 额外的快速设置导航栏的属性
@property (nonatomic, strong) UIColor *gk_navBarTintColor;
/** 设置导航栏背景，[UIColor clearColor]可设置为透明 */
@property (nonatomic, strong) UIColor *gk_navBackgroundColor;
@property (nonatomic, strong) UIImage *gk_navBackgroundImage;
@property (nonatomic, strong) UIColor *gk_navTintColor;
@property (nonatomic, strong) UIView *gk_navTitleView;
@property (nonatomic, strong) UIColor *gk_navTitleColor;
@property (nonatomic, strong) UIFont *gk_navTitleFont;

@property (nonatomic, strong) UIBarButtonItem *gk_navLeftBarButtonItem;
@property (nonatomic, strong) NSArray<UIBarButtonItem *> *gk_navLeftBarButtonItems;

@property (nonatomic, strong) UIBarButtonItem *gk_navRightBarButtonItem;
@property (nonatomic, strong) NSArray<UIBarButtonItem *> *gk_navRightBarButtonItems;


/**
 显示导航栏分割线
 */
- (void)showNavLine;
/**
 隐藏导航栏分割线
 */
- (void)hideNavLine;

@end
