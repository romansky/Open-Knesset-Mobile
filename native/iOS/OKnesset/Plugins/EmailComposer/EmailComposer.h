//
//  EmailComposer.h
// 
//
//  Created by Jesse MacFadyen on 10-04-05.
//  Copyright 2010 Nitobi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MessageUI/MFMailComposeViewController.h>
#import "PGPlugin.h"

 
@interface EmailComposer : PGPlugin < MFMailComposeViewControllerDelegate > {


}

- (void) showEmailComposer:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end