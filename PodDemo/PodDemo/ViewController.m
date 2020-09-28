//
//  ViewController.m
//  PodDemo
//
//  Created by BrikerMan on 2020/8/21.
//  Copyright © 2020 BrikerMan. All rights reserved.
//

#import "ViewController.h"
#import <SpaaSDK/SpaaAd.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [SpaaAd.shared setIMEI:@"<user IMEI>"];
       [SpaaAd.shared setOAID:@"<user OAID>"];
       
       [SpaaAd.shared loadAdWithAdId:@"1234"];
}


@end
