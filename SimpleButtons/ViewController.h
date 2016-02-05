//
//  ViewController.h
//  SimpleButtons
//
//  Created by BacancyTechnology on 2/5/16.
//  Copyright © 2016 BacancyTechnology. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// Outlets
@property (strong, nonatomic) IBOutlet UIButton *btnLoginWithFacebook;
@property (strong, nonatomic) IBOutlet UIButton *btnManuallyLogin;
@property (strong, nonatomic) IBOutlet UIButton *btnSignup;
@property (strong, nonatomic) IBOutlet UIButton *btnPrev;
@property (strong, nonatomic) IBOutlet UIButton *btnNext;

//Actions
- (IBAction)btnManuallyLoginClicked:(id)sender;
- (IBAction)btnLoginWithFacebookClicked:(id)sender;
- (IBAction)btnSignupClicked:(id)sender;
- (IBAction)btnPrevClicked:(id)sender;
- (IBAction)btnNextClicked:(id)sender;

@end

