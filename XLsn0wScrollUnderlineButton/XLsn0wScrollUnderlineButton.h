
#import <UIKit/UIKit.h>


typedef void(^ScrollUnderlineButtonBlock)(NSUInteger selectedIndex);

@interface XLsn0wScrollUnderlineButton : UIView

@property (nonatomic, copy) ScrollUnderlineButtonBlock scrollUnderlineButtonBlock;

@property (nonatomic, strong) UIView *lineView;///底部标识线

@property (nonatomic, copy) NSArray *titles;

@property (nonatomic, strong) UIColor *selectedColor;
@property (nonatomic, strong) UIColor *normalColor;

@property (nonatomic, strong) UIFont *selectedFont;
@property (nonatomic, strong) UIFont *normalFont;

/**
 *  当前选中的index。可以设置当前的index
 */
@property (nonatomic, assign) NSInteger currentIndex;
/**
 *  分割线位置调整。总是居中显示  默认(0,3,2,3)
    分割线默认高度为3， left可调整宽度，top可调整高度，bottom可调整lineView的y值
 */
@property (nonatomic, assign) UIEdgeInsets lineEdgeInsets;
/**
 *  选择区域调整。默认(0,10,0,10)
 */
@property (nonatomic, assign) UIEdgeInsets cursorEdgeInsets;
/**
 *  必须调用此方法来绘制界面
 */
-(void)reloadData;

@end




/****************************XLsn0wScrollUnderlineButtonCell****************************************/



@interface XLsn0wScrollUnderlineButtonCell : UICollectionViewCell

@property (nonatomic, copy) NSString *title;

@property (nonatomic, strong) UIColor *selectedColor;//默认分别是 [UIColor redColor],[UIColor whiteColor]
@property (nonatomic, strong) UIColor *normalColor;

@property (nonatomic, strong) UIFont *selectedFont;//默认都是14号字体
@property (nonatomic, strong) UIFont *normalFont;

@end

/****************************XLsn0wScrollUnderlineButtonCell****************************************/
