//
//  ViewController.h
//  Awake
//
//  Created by Eliot Fowler on 7/17/13.
//  Copyright (c) 2013 Eliot Fowler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewAlarmViewController.h"
#import "WTClockView.h"

@interface ViewController : UIViewController {
    __weak IBOutlet WTClockView *theClockView;
    __weak IBOutlet UIButton *startButton;
}
- (IBAction)setAlarmButton:(id)sender;
@end
