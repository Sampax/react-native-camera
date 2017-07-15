#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CameraFocusSquare.h"

@class RCTCameraManager;

@interface RCTCamera : UIView

@property (nonatomic, assign, readonly) BOOL stabilization;
@property (nonatomic, assign, readonly) BOOL autoFocus;

- (id)initWithManager:(RCTCameraManager*)manager bridge:(RCTBridge *)bridge;

@end
