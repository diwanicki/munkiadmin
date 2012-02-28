//
//  PackagesView.h
//  MunkiAdmin
//
//  Created by Juutilainen Hannes on 27.2.2012.
//

#import <Cocoa/Cocoa.h>
#import "GradientBackgroundView.h"

@interface PackagesView : NSViewController {
    NSSplitView *tripleSplitView;
    NSView *leftPlaceHolder;
    NSView *middlePlaceHolder;
    GradientBackgroundView *rightPlaceHolder;
    NSTableView *packagesTableView;
    NSArrayController *packagesArrayController;
    NSTreeController *directoriesTreeController;
    NSOutlineView *directoriesOutlineView;
}

@property (assign) IBOutlet NSSplitView *tripleSplitView;
@property (assign) IBOutlet NSView *leftPlaceHolder;
@property (assign) IBOutlet NSView *middlePlaceHolder;
@property (assign) IBOutlet GradientBackgroundView *rightPlaceHolder;
@property (assign) IBOutlet NSTableView *packagesTableView;
@property (assign) IBOutlet NSArrayController *packagesArrayController;
@property (assign) IBOutlet NSTreeController *directoriesTreeController;
@property (assign) IBOutlet NSOutlineView *directoriesOutlineView;

@end