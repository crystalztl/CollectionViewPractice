//
//  ViewController.h
//  collectionViewPractice1
//
//  Created by Tianli Zhang on 4/12/15.
//  Copyright © 2015 SIMTech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) IBOutlet UICollectionView *collectionView;

@end

