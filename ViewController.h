//
//  ViewController.h
//  代码创建UICollectionView
//
//  Created by 陈家庆 on 15-2-6.
//  Copyright (c) 2015年 shikee_Chan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "AdvertisingColumn.h"//头部滚动的，不需要可以去掉

@interface ViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate>{
    AdvertisingColumn *_headerView;
    
}
@property (nonatomic,strong)UICollectionView *collectionView;

@end
