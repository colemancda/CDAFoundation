//
//  CDAAppleLog.m
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/1/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import "CDAAppleLog.h"

#if TARGET_OS_MAC

@implementation CDAAppleLog

-(void)log:(OFString *)message
{
    NSLog(@"%@", message);
}

@end

#endif