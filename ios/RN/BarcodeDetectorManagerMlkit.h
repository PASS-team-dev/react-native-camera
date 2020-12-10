
#import <UIKit/UIKit.h>
#if __has_include(<MLKitBarcodeScanning/MLKitBarcodeScanning.h>)
#import <MLKitBarcodeScanning/MLKitBarcodeScanning.h>
#endif
#if __has_include(<MLKitVision/MLKitVision.h>)
#import <MLKitVision/MLKitVision.h>
#endif

@interface BarcodeDetectorManagerMlkit : NSObject
typedef void(^postRecognitionBlock)(NSArray *barcodes);

- (instancetype)init;

-(BOOL)isRealDetector;
-(void)findBarcodesInFrame:(UIImage *)image scaleX:(float)scaleX scaleY:(float)scaleY completed:(postRecognitionBlock)completed;
+(NSDictionary *)constants;

@end
