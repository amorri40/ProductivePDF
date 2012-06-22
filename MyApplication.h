/*
 * Copyright (C) 2012 Alasdair Morrison <amorri40@gmail.com> 
 * This file is part of ProductivePDF.
 * ProductivePDF is free software and comes with ABSOLUTELY NO WARRANTY.
 * See LICENSE for details.
 */
#import <Cocoa/Cocoa.h>


@interface MyApplication : NSApplication
{
	IBOutlet NSPanel			*_findPanel;
	IBOutlet NSTextField		*_findPanelSearchField;
	IBOutlet NSButton			*_ignoreCaseCheckbox;
}

- (int) findOptions;
- (void) findNext: (id) sender;
- (void) findNextAndOrderOutFindPanel: (id) sender;
- (void) findPrevious: (id) sender;

@end
