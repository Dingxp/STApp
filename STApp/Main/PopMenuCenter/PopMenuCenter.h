//
//  PopMenuCenter.h
//  FanweApp
//
//  Created by 岳克奎 on 17/3/10.
//  Copyright © 2017年 xfg. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HyPopMenuView.h"
typedef NS_ENUM(NSInteger, STPopMenuShowState) {
    STPopMenuHidden   = 0,//消失
    STPopMenuShow      = 1,//显示
};
@interface PopMenuCenter : NSObject <HyPopMenuViewDelegate>
@property (nonatomic, strong) HyPopMenuView       *menu;             //点击TabBarC中间btn弹出菜单View
@property (nonatomic,assign)  STPopMenuShowState  stPopMenuShowState;//控制menu的显示
@property (nonatomic, strong) UITabBarController  *tabBarC;          //记录tabBarC
+(PopMenuCenter *)sharePopMenuCenter;
-(void)showGoodsDynamicViewC;
@end
