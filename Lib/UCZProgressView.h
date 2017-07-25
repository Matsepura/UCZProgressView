//
//  UCZProgressView.h
//  UCZProgressView
//
//  Created by kishikawa katsumi on 12/13/2014.
//  Copyright (c) 2014 kishikawa katsumi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UCZProgressView : UIView

@property (nonatomic) BOOL indeterminate;
@property (nonatomic) CGFloat progress;
@property (nonatomic) BOOL showsText; // UI_APPEARANCE_SELECTOR;

@property (nonatomic) CGFloat lineWidth; // UI_APPEARANCE_SELECTOR;
@property (nonatomic) CGFloat radius; // UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *tintColor; // UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIView *backgroundView; // UI_APPEARANCE_SELECTOR;

@property (nonatomic, readonly) UILabel *textLabel; // UI_APPEARANCE_SELECTOR;
@property (nonatomic) UIColor *textColor; // UI_APPEARANCE_SELECTOR;
@property (nonatomic) CGFloat textSize; // UI_APPEARANCE_SELECTOR;

@property (nonatomic) UIBlurEffect *blurEffect NS_AVAILABLE_IOS(8_0); // UI_APPEARANCE_SELECTOR;
@property (nonatomic) BOOL usesVibrancyEffect; // UI_APPEARANCE_SELECTOR;

@property (nonatomic, copy) void(^animationDidStopBlock)();

- (void)setProgress:(CGFloat)progress animated:(BOOL)animated;

@end
