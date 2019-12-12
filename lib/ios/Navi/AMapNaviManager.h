//
//  AMapNaviManager.h
//  DoubleConversion
//
//  Created by Myron on 2019/12/5.
//

#import <React/RCTBridgeModule.h>
#import <AMapNaviKit/AMapNaviKit.h>

@interface AMapNaviManager : NSObject <RCTBridgeModule>

@property (nonatomic, strong) AMapNaviCompositeManager *compositeManager;

@end


