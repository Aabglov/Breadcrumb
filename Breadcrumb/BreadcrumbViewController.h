/*
 Copyright (C) 2014 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 
  Main view controller for the application.
  Displays the user location along with the path traveled on an MKMapView.
  Implements the MKMapViewDelegate messages for tracking user location and managing overlays.
  
 */

@import UIKit;

@interface BreadcrumbViewController : UIViewController

@property (strong, nonatomic) CLLocation* LastLocationRealtime;
@property (strong, nonatomic) CLLocation* previousCurrentLocation;
@property (strong, nonatomic) CLLocation* BeforeLastLocationRealtime;
@property (strong, nonatomic) CLLocation* CurrentLocation;

@end

