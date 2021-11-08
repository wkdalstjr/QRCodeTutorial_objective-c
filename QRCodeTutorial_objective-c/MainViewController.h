//
//  ViewController.h
//  QRCodeTutorial_objective-c
//
//  Created by 장민석 on 2021/11/08.
//  Copyright © 2021 장민석. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface MainViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *qrCodeBtn;
@property (weak, nonatomic) IBOutlet WKWebView *webView;

@end

