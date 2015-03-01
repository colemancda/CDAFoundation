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
-(instancetype)initWithPath:(OFString *)path;

#pragma mark - Methods

-(void)log:(OFString *)message;

@end

#pragma mark - Macros

/* Convenience macro for logging. */
#define CDALog(message) [[CDALog defaultLog] log:message]