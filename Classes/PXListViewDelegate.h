//
//  PXListViewDelegate.h
//  PXListView
//
//  Created by Alex Rozanski on 29/05/2010.
//  Copyright 2010 Alex Rozanski. http://perspx.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PXListViewDropHighlight.h"


@class PXListView, PXListViewCell;

@protocol PXListViewDelegate <NSObject>

@required
- (NSUInteger)		numberOfRowsInListView: (PXListView*)aListView;
- (CGFloat)			listView: (PXListView*)aListView heightOfRow: (NSUInteger)row;

@optional	// You *must* implement ONE of the following two:
-(NSViewController*)	listView: (PXListView*)aListView viewControllerForRow: (NSUInteger)row;
-(PXListViewCell*)		listView: (PXListView*)aListView cellForRow: (NSUInteger)row;

@optional
- (BOOL)			listView: (PXListView*)aListView writeRowsWithIndexes: (NSIndexSet *)rowIndexes toPasteboard: (NSPasteboard *)pboard;
- (NSDragOperation)	listView: (PXListView*)aListView validateDrop:(id <NSDraggingInfo>)info proposedRow:(NSUInteger)row
							proposedDropHighlight: (PXListViewDropHighlight)dropHighlight;
- (BOOL)			listView: (PXListView*)aListView acceptDrop: (id <NSDraggingInfo>)info
							row:(NSUInteger)row dropHighlight: (PXListViewDropHighlight)dropHighlight;

@end
