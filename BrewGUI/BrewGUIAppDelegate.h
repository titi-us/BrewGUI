//
//  BrewGUIAppDelegate.h
//  BrewGUI
//
//  Created by Thibaut Crenn on 9/29/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface BrewGUIAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
