/*
 * Copyright (C) 2012 Alasdair Morrison <amorri40@gmail.com> 
 * This file is part of ProductivePDF.
 * ProductivePDF is free software and comes with ABSOLUTELY NO WARRANTY.
 * See LICENSE for details.
 */


#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>


@interface MyPDFView : PDFView
{
	PDFAnnotationLink	*_activeAnnotation;
	PDFPage				*_activePage;
	NSRect				_wasBounds;
	NSPoint				_mouseDownLoc;
	NSPoint				_clickDelta;
	BOOL				_dragging;
	BOOL				_resizing;
	BOOL				_mouseDownInAnnotation;
}

- (void) transformContextForPage: (PDFPage *) page;

- (void) delete: (id) sender;
- (void) printDocument: (id) sender;

- (PDFAnnotationLink *) activeAnnotation;
- (void) setActiveAnnotation: (PDFAnnotationLink *) newLink;
- (NSSize) defaultNewLinkSize;
- (NSRect) resizeThumbForRect: (NSRect) rect rotation: (int) rotation;

@end
