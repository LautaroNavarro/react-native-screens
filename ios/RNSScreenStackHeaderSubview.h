
#ifdef RN_FABRIC_ENABLED
#import <React/RCTViewComponentView.h>
#endif

#import <React/RCTConvert.h>
#import <react/RCTViewManager.h>
#import "RNSEnums.h"

NS_ASSUME_NONNULL_BEGIN

@interface RNSScreenStackHeaderSubview :
#ifdef RN_FABRIC_ENABLED
    RCTViewComponentView
#else
    UIView
#endif

@property (nonatomic) RNSScreenStackHeaderSubviewType type;

#ifdef RN_FABRIC_ENABLED
#else
@property (nonatomic, weak) UIView *reactSuperview;
@property (nonatomic, weak) RCTBridge *bridge;

- (instancetype)initWithBridge:(RCTBridge *)bridge;

#endif

@end

@interface RNSScreenStackHeaderSubviewManager : RCTViewManager

@property (nonatomic) RNSScreenStackHeaderSubviewType type;

@end

@interface RCTConvert (RNSScreenStackHeaderSubview)

+ (RNSScreenStackHeaderSubviewType)RNSScreenStackHeaderSubviewType:(id)json;

@end

NS_ASSUME_NONNULL_END
