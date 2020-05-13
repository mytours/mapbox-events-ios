#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MMEBundleInfoFake : NSBundle
@property(nonatomic, copy) NSDictionary *infoDictionaryFake;

+ (MMEBundleInfoFake *)bundleWithFakeInfo:(NSDictionary *)fakeInfo;

@end

NS_ASSUME_NONNULL_END
