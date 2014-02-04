//
//  JEHRegionInfo.h
//  MyBeacon
//
//  Created by Justin Hyland on 2/4/14.
//  Copyright (c) 2014 Justin Hyland. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;

@interface JEHRegionInfo : NSObject

@property (nonatomic, strong) NSString *RegionDescription;
@property (nonatomic, strong) CLBeaconRegion *region;
@end
