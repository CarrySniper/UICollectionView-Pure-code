//
//  AdvertisingColumn.h
//  CustomTabBar
//
//  Created by shikee_app05 on 14-12-30.
//  Copyright (c) 2014年 chan kaching. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AdvertisingColumn : UIView<UIScrollViewDelegate>{
    
    NSTimer *_timer;
}

//广告栏
@property (nonatomic,strong) UIScrollView *scrollView;
@property (nonatomic,strong) UIPageControl *pageControl;
@property (nonatomic,strong) UILabel *imageNum;
@property (nonatomic) NSInteger totalNum;

- (void)setArray:(NSArray *)imgArray;

- (void)openTimer;
- (void)closeTimer;


@end
