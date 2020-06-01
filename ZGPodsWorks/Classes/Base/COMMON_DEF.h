
//
//  COMMON_DEF.h
//  FatDogLogistics
//
//  Created by Sandy on 16/11/8.
//  Copyright © 2016年 Sandy. All rights reserved.
//

#ifndef COMMON_DEF_h
#define COMMON_DEF_h

#define kSecretKey        @"blm.carrier.key"
#define kAppMD5Id         @"blm.carrier.id"

#define kAES128KEY        @"2d8943939bd8840a"
//#define kTabBarHeight    (isIPHONE6Plus?64:49)
#define PAGESIZE  @"10"
//#define FormalEnvironment

/************************** Server URL ***************************/

#define kRequestURL               @"https://pmcarrierapi.pangmao56.com/logistics.pmcarrier.app.service/"          //正式环境

#define kUATRequestURL            @"https://pmcarrierapi.pangmao56uat.com/logistics.pmcarrier.app.service/"          //UAT

//#define kTestRequestURL         @"http://10.0.48.210:8080/logistics.pmcarrier.app.service/"         //UAT   废弃

#define kSIGRequestURL            @"http://pmcarrier.api.zhaogangstg.com/logistics.pmcarrier.app.service/"          //SIG

#define kSITRequestURL            @"https://pmcarrierapi.pangmao56test.com/logistics.pmcarrier.app.service/"          //SIT

//#define kMITRequestURL            @"http://10.0.56.117:8080/logistics.pmcarrier.app.service/"       //MIT
#define kMITRequestURL            @"http://pmcarrier.api.zhaogangmit.com/logistics.pmcarrier.app.service/"       //MIT



//测试地址key  1、MIT 2、SIT 3、UAT 4、正式环境
#define kTestKey  @"kTestKey"


///****************************公共区域**************************/
//#define kNavigationHeight (isIPHONEX?88:64)
#define kNavigationHeight ((isIPHONEX==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 88.0 : 64.0)
//#define kTabBarHeight    (isIPHONE6Plus?64:(isIPHONEX?83:49))
#define kTabBarHeight ((isIPHONEX==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 83.0 : 49.0)
//#define isIPHONEX ([UIScreen mainScreen].bounds.size.height == 812 ? YES : NO)
#define IPHONXBottomSpace ((isIPHONEX==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 34 : 0)
#define IPHONXTopSpace ((isIPHONEX==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 24 : 0)
#define kBottomTabBar     (isIPHONEX ? 19 : 0)
#define isNewDevice     (isIPHONEX || IS_IPHONE_Xr || IS_IPHONE_Xs || IS_IPHONE_Xs_Max)
//判断是否是ipad
#define isPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
//判断iPhoneX
#define isIPHONEX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPHoneXr
#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXs
#define IS_IPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
//判断iPhoneXs Max
#define IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !isPad : NO)
// iPhone6+
#define isIPHONE6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

// iPhone6Plus+
#define isIPHONE6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

////iPhoneX系列
//#define Height_StatusBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 44.0 : 20.0)
//
//#define Height_TabBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 83.0 : 49.0)

#define  AutoParam [UIScreen mainScreen].bounds.size.width/375.0f

#define  WHfloat(a) a*AutoParam

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self

#define kChangeRoleCommonInfo        @"kChangeRoleCommonInfo"

/************************** 接口名称区域 ***************************/

#define kCommonGetCommonInfo         @"common/getCommonInfoSecurity/V2160"      //通用接口

#define kUserRegister                @"user/registerSecurity/V2160"             //注册

#define kValidationRegister          @"user/registerPre/V2160"                  //下一步（注册）

//#define kUserLogin                   @"user/loginSecurity/V2160"                //登录
#define kUserLogin                     @"account/loginSecurity/V241"                //登录

#define kUserCodeLogin               @"user/loginByVerifyCode/V2160"            //快捷登录

#define kCommonSendVerificationCode  @"common/sendVerificationCode/V2160"       //验证码

#define kUserFindPassword            @"user/findPasswordSecurity/V2160"         //找回密码

#define kCommonUploadFile            @"common/uploadFile/V2160"                 //上传文件

#define kUserUpdateCertificate       @"user/updateCertificate/V2160"            //修改资质

#define kUserUpdatePassword          @"user/updatePassword/V2160"               //修改密码

#define kUserGetUserInfo             @"user/getUserInfoSecurity/V2160"     //用户信息
//查询用户评分
#define kUserGetGradeInfo            @"user/getCarrierContactsGrade"
//1.1.    查询资讯
#define kQueryInforMation            @"user/getInformationByDate"
//查询车辆轨迹
#define kQueryVehicleTrace           @"carrierOrder/getVehicleTrack"
#define kLineGetLineList             @"line/getLineList/V2160"                  //查询路线列表
#define kLineDeleteLine              @"line/deleteLine/V2160"                   //删除线路

#define kLineAddLine                 @"line/addLineList/V2160"                  //关注线路

#define kVehicleGetVehicleList       @"vehicle/getVehicleList/V2160"    //车辆列表

#define kVehicleDeleteVehicle        @"vehicle/deleteVehicle/V2160"             //删除车辆
#define kVehicleUpdateVehicle        @"vehicle/updateVehicle/V2160"             //修改车辆
#define kVehicleAddVehicle           @"vehicle/addVehicle/V2160"                //添加车辆
#define kDriverGetDriverList         @"driver/getDriverListSecurity/V2160"      //司机列表
#define kDriverDeleteDriver          @"driver/deleteDriver/V2160"               //删除司机
//新增车辆认证申请
#define kAddVehicleApply             @"vehicle/addVehicleApply"

#define kDriverUpdateDriver          @"driver/updateDriver/V2160"               //修改司机

#define kDriverAddDriver             @"driver/addDriver/V2160"                  //添加司机


#define kIgnoreGrabOrder             @"bidding/ignoreBidding/V2160"             //忽略竞价单

#define kGrabOrderDetail             @"bidding/getBiddingInfo/V2160"
//竞价单详情
#define kGrabNewOrderDetail          @"bidding/getBiddingInfo/V2210"
#define kGrabOrderList               @"bidding/getBiddingList/V2160"       //竞价单列表

#define kGrabOrderQuote              @"bidding/quote/V2160"                     //竞价单报价

#define kAssignVehicle               @"bidding/assignVehicle/V2160"             //调度车辆

#define kCancelQuote                 @"bidding/cancelQuote/V2160"               //取消竞价

#define kConfirmQuote                @"bidding/confirmQuote/V2160"              //确认报价

#define kinviteDriver                @"driver/inviteDriver/V2160"               //邀请司机

#define kenabledDriver               @"driver/enabledDriver/V2160"              //禁用启用司机

//#define kupgradeCarrier              @"user/upgradeCarrier"               //升级承运商

#define kBillList                    @"invoice/getCarrierApplyList/V2160"       //开票列表

#define kSettlementList              @"settlement/getCarrierSettlementList/V2160" //结算列表

#define kCarrierBill                 @"invoice/carrierOrderInvoice/V2160"       //承运商开票

#define kGetAccountBank              @"userCenter/loadUserBankAccount/V2160"    //查询银行账号信息

//#define kUserUploadCertificate       @"/user/saveAccount"                 //新增或者修改企业开票资料

#define kNewBankAccount              @"userCenter/saveUserBankAccount/V2160"    //新增银行账号信息

#define kModifyBankAccount           @"userCenter/updateUserBankAccount/V2160"  //修改银行账户信息

#define kGetInvoiceInfo              @"userCenter/getAccount/V2160"             //查询承运商开票资料

#define kSaveInvoiceInfo             @"userCenter/saveInvoiceData/V2160"        //保存开票资料

#define kSettlementSum               @"settlement/getSettlementDetail/V2160"  //结算汇总

#define kGetReceiptList              @"settlement/getReceiptList/V2160"       //返单列表

#define kSettledMonthList            @"settlement/getSettlementMonthList/V2160"    //已结算月度列表

#define kCheckMonthList              @"accountBill/getAccountBillMonthList/V2160"  //对账单月度列表

#define kCheckBillList               @"accountBill/getAccountBillList/V2160"       //对账单列表

#define kSubmitException             @"accountBill/submitObjection/V2160"          //对账单提交异议

#define kBillDetailedList            @"invoice/downloadInvoiceInfo/V2160"          //发票清单

#define kAcceptOrder                 @"bidding/receiveOrder/V2160"                 //接单

//#define kRejectOrder                 @"bidding/rejectOrder"                     //拒单
#define kQueryFreightQuotation       @"freightQuotation/queryTransportation"        //承运商查询当前运力

#define kUpdateFreightQuotation       @"freightQuotation/updateTransportation"      //修改当前运力

#define kModifyFreightQuotation       @"freightQuotation/updateBusinessFlag"        //修改接单

#define kUpdateAlertShow             @"kUpdateAlertShow"

#define kGrabNotification            @"kGrabNotification"                 //抢单清空筛选条件通知

#define KRefreshGrabTable            @"KRefreshGrabTable"                 //刷新抢单列表

#define kSettlementNotification      @"kSettlementNotification"           //结算清空筛选条件通知

//2019.4.25
#define kNewGetBiddingList             @"bidding/getBiddingList/V2210"
//查询竞价单详情
#define kNewGetBiddingDetail           @"bidding/getBiddingInfo/V2210"
//报价
#define kNewGetBiddingQuote           @"bidding/quote/V2210"
//获取拒单类型和原因
#define kNewGetRejectReason           @"bidding/getRejectReason"
//接拒单
#define kNewOrderAacceptRefused       @"bidding/acceptOrder/V2210"

//控制是否使用版本更新
#define kUseSoftwareUpdate

//控制统计信息事件
#define kUseStatistics

/**************************** 友盟 ********************************/
#define APP_CONST_UMENG_APP_KEY             @"585a449c8f4a9d5df800002e"

/**************************** 极光 ********************************/
#define APP_CONST_JPush_APP_KEY             @"f2cb5cbd6e6110c6f2a05b0b"

/**************************** 听云 ********************************/
#define APP_CONST_TINGYUN_APP_KEY           @"0a710539545046b08d74a0faf9b303c7"

/**************************** GrowingIO ********************************/
#define APP_CONST_GrowingIO_APP_KEY         @"bc6de92f14572c24"

/**************************** Notifiction ********************************/
//登录
#define kUserDidLoginSuccessNotifiction  @"kUserDidLoginSuccessNotifiction"

//登出
#define kUserDidLoginOutNotifiction      @"kUserDidLoginOutNotifiction"

//注册
#define kUserDidRegisterNotifiction      @"kUserDidRegisterNotifiction"

//已完跳转状态
#define kFinishPushStatusNotification    @"kFinishPushStatusNotification"

#define kIsUploadCertificateTag       1000000




//主控制页面
typedef enum {
    
    FDUnknow        = -1,
    FDGrabOrder     = 0,  //抢单
    FDTrackOrder    = 1,  //订单
    FDSettlement    = 2,  //结算
    FDInfoMation    = 3,  //资讯
  //  FDGarage        = 3   //车库
//    FDMe            = 4   //我的
} FDLogistics;


/**************************** 常用代码块 ********************************/

//系统版本号
#define kSystemVersion  [[UIDevice currentDevice].systemVersion doubleValue]

/*
 * 颜色
 */
#define kRGBColorAlpha(_red, _green, _blue, _alpha) \
[UIColor colorWithRed:(_red / 255.0f) \
green:(_green / 255.0f) \
blue:(_blue / 255.0f) \
alpha:_alpha]

/*
 *获取物理屏幕参数
 */
#define kScreenHeight    [[UIScreen mainScreen] bounds].size.height
#define kScreenWidth     [[UIScreen mainScreen] bounds].size.width
#define kScreenBounds    [[UIScreen mainScreen] bounds]


/*
 *控件左对其间距
 */
#define kControlsLeft    10
#define kControlsRight   10
#define kControlsTop     10
#define kControlsBottom  10
#define kControlSpaceing 10


#define kLeftInterval  (kScreenWidth == 414 ? 18 : (kScreenWidth == 375 ? 15 : 12))

// iPhone4
#define isIPHONE4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

// iPhone5
#define isIPHONE5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)


//iPhone5以下设备
#define PrIPHONE5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

#define isIpad ([[[UIDevice currentDevice] model] isEqualToString:@"iPad"]||[[[UIDevice currentDevice] model] isEqualToString:@"iPad Simulator"])

#define IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0 ? YES : NO)

#define IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0 ? YES : NO)

#define IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0 ? YES : NO)

/*
 *  自定义输出日志
 */
#ifdef DEBUG
# define DLog(fmt, ...) NSLog((@"%@(Line: %d) %s \n" fmt),self, __LINE__, __PRETTY_FUNCTION__,##__VA_ARGS__);
#else
# define DLog(...);
#endif


#endif /* COMMON_DEF_h */
