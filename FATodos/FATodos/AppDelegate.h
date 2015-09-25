//
//  AppDelegate.h
//  FATodos
//
//  Created by 李杰 on 8/4/15.
//  Copyright (c) 2015 fallen.ink. All rights reserved.
//

// Use Framework.SAMURAI
// Use Vendor.Routable
// Use sql-query-builder
// Use MZDayPicker          https://github.com/m1entus/MZDayPicker
// Use PARTagPicker         https://github.com/paulrolfe/PARTagPicker

// Use FlatUIKit

// 窄距俯卧撑锻炼臂力。 宽距俯卧撑锻炼胸大肌

// 1. 上传sqlite
// 2. 下载sqlite

// 俯卧撑 分3组
// cell 长按，从原地动画弹起来，然后扩展，并选择

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@end

#pragma mark -

@interface AppDelegate (ViewRoutable)

@string( MAIN_VC )

@string( PUSHUP_VC )

@string( DIAGRAM_VC )

@string( MEMO_VC )

@string( NOTE_VC )

@string( QUADRANT_VC )

@end