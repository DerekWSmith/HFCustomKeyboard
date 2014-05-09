//
//  DWSCustomKeyboard.h
//  Custom Keyboard
//
//  Created by Derek Smith on 1 Dec 2013.
//  Copyright (c) 2012 Derek Smith. All rights reserved.
//

// this import needs to be here, and not in the projects PCH
// so that it is available when exported as part of the lib
#import <CoreLocation/CoreLocation.h>

@interface DWSCustomKeyboard : UIView <UIInputViewAudioFeedback, UIActionSheetDelegate , UIPopoverControllerDelegate, CLLocationManagerDelegate  >

+(instancetype)sharedInstance ;

@end
