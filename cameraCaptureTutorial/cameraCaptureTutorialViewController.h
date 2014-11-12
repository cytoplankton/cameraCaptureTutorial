//
//  cameraCaptureTutorialViewController.h
//  cameraCaptureTutorial
//
//  Created by Nick Barrowclough on 8/3/13.
//  Copyright (c) 2013 iSoftware Developers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface cameraCaptureTutorialViewController : UIViewController {
    
    BOOL FrontCamera;
    BOOL haveImage;
}

@property(nonatomic, retain) AVCaptureStillImageOutput *stillImageOutput;

@property (weak, nonatomic) IBOutlet UIView *imagePreview;

- (IBAction)snapImage:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *captureImage;
@property (weak, nonatomic) IBOutlet UISegmentedControl *cameraSwitch;
- (IBAction)switchCamera:(id)sender;


@end
