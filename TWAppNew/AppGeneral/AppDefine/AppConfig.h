

/*－－－－－－－－－－－－－－－－－－－－app的相关配置－－－－－－－－－－－－－－－－－－*/
/*---------------------------------相关值根据需要自行更改------------------------*/



/*---------------------------------用户相关信息-------------------------------------*/

#define kUsername           @"usernameNew"
#define kUserNickname       @"userNicknameNew"
#define kUserPassword       @"userPassword"
#define kUserID             @"userID"
#define kUserToken          @"userToken"
#define kUserPortraitUrl    @"userPortraitUrl"
#define kUserEmail          @"userEmail"
#define kUserGender         @"userGender"


/*---------------------------------程序相关常数-------------------------------------*/
//App Id、下载地址、评价地址
#define kAppId      @"593499239"
#define kAppUrl     [NSString stringWithFormat:@"https://itunes.apple.com/us/app/ling-hao-xian/id%@?ls=1&mt=8",kAppId]
#define kRateUrl    [NSString stringWithFormat:@"itms-apps://ax.itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?type=Purple+Software&id=%@",kAppId]

#define kPlaceholderImage       [UIImage imageNamed:@"placeholderImage.png"]


/*---------------------------------程序全局通知-------------------------------------*/
//重新登录通知
#define kReLoginNotification    @"ReLoginNotification"


/*---------------------------------程序界面配置信息-------------------------------------*/

//设置app界面字体及颜色

#define kTitleFontLarge              [UIFont boldSystemFontOfSize:25]//一级标题字号
#define kTitleFontMiddle             [UIFont boldSystemFontOfSize:19]//二级标题字号
#define kTitleFontSmall              [UIFont boldSystemFontOfSize:15]//三级标题字号

//标题颜色
#define kTitleColorBlack             [UIColor blackColor]

#define kContentFontLarge            [UIFont systemFontOfSize:15]  //内容部分大字号
#define kContentFontMiddle           [UIFont systemFontOfSize:13]  //内容部分中字号
#define kContentFontSmall            [UIFont systemFontOfSize:11]  //内容部分小字号

//内容部分正常显示颜色和突出显示颜色
#define kContentColorNormal      [UIColor colorWithRed:57/255.0 green:32/255.0 blue:0/255.0 alpha:1]
#define kContentColorHighlight   [UIColor colorWithRed:0/255.0 green:191/255.0 blue:225/255.0 alpha:1]

//TableView相关设置
//设置TableView分割线颜色
#define kSeparatorColor   [UIColor colorWithRed:154/255.0 green:154/255.0 blue:154/255.0 alpha:1]
//设置TableView背景色
#define kTableViewBgColor [UIColor colorWithRed:154/255.0 green:154/255.0 blue:154/255.0 alpha:1]
//设置TableView选中背景,自行根据需要更改里面函数
UIKIT_STATIC_INLINE UIView *selectedBgView(CGRect rect)
{
    UIView *selectedBgView = [[UIView alloc] initWithFrame:rect];
    [selectedBgView setBackgroundColor:[UIColor colorWithRed:60/255. green:180/255. blue:255/255. alpha:0.5]];
    return selectedBgView;
}



