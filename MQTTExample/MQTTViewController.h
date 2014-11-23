//
//  MQTTViewController.h
//  MQTTExample
//
//  Created by Jeff Mesnil on 15/02/2014.
//  Copyright (c) 2014 jmesnil.net. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MQTTViewController : UIViewController <UITableViewDataSource,UITableViewDelegate>

@property (retain,nonatomic) NSMutableArray *items;

@end
