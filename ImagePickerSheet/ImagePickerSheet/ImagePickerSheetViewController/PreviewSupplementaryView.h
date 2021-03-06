//
//  CollectionSupplementaryView.h
//  ImagePickerSheet
//
//  Created by LamTsanFeng on 15/7/8.
//  Copyright (c) 2015年 GZMiracle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PreviewSupplementaryView : UICollectionReusableView

@property (nonatomic, assign) BOOL selected;
@property (nonatomic, assign) UIEdgeInsets buttonInset;

/** 重用标识 */
+ (NSString *)identifier;

+ (UIImage *)checkmarkImage;
+ (UIImage *)selectedCheckmarkImage;

@end
