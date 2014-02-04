//
//  JEHViewController.h
//  MyBeacon
//
//  Created by Justin Hyland on 2/4/14.
//  Copyright (c) 2014 Justin Hyland. All rights reserved.
//

#import <UIKit/UIKit.h>
@import CoreLocation;
@import CoreBluetooth;
#import "JEHRegionInfo.h"

@interface JEHViewController : UIViewController <CLLocationManagerDelegate, CBPeripheralManagerDelegate,
UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, weak) IBOutlet UITableView *mainTblView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *aiSearching;

- (IBAction)sgbtnBeaconType_Clicked:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *lblSearchDesc;

@end
