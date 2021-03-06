//
//  YHBaseTableView.h
//  
//
//  Created by user on 15/8/20.
//
//集成了下拉刷新与上拉加载的功能

#import <UIKit/UIKit.h>
#import <MJRefresh/MJRefresh.h>
@interface YHBaseTableView : UITableView<YHViewProtocol>
/**
 *准备开始刷新的文字
 */
@property(nonatomic,strong)NSString * prepareRefreshText;
/**
 *可以开始刷新的文字
 */
@property(nonatomic,strong)NSString * shouldRefreshText;
/**
 *已经开始刷新的文字
 */
@property(nonatomic,strong)NSString * alreadyRefreshText;

/**
 *准备开始加载的文字
 */
@property(nonatomic,strong)NSString * prepareReloadText;
/**
 *可以开始加载的文字
*/
@property(nonatomic,strong)NSString * shouldReloadText;
/**
 *已经开始加载的文字
 */
@property(nonatomic,strong)NSString * alreadyReloadText;

//允许刷新
-(void)shouldRefresh:(void (^)())block;
//允许加载
-(void)shouldReload:(void (^)())block;
//加载完所有数据
-(void)ReloadEnd;
@end
