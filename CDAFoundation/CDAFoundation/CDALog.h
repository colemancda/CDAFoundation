//
//  CDALog.h
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/1/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import <ObjFW/ObjFW.h>
#include <dispatch/dispatch.h>

@interface CDALog : OFObject

#pragma mark - Initialization

/* The default log. */
+(instancetype)defaultLog;

/* Log that outputs to the specified path. */
-(instancetype)initWithPath:CDADefaultLog;

#pragma mark - Methods

-(void)log:(OFString *)message;

@end

#pragma mark - Functions

/* Convenience function for logging. */
void CDADefaultLog(OFString *message);
