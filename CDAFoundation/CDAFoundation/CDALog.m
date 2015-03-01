//
//  CDALog.m
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/1/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import "CDALog.h"

#if TARGET_OS_MAC
#import <CDAFoundation/CDAAppleLog.h>
#endif

@implementation CDALog

#pragma mark - Initialization

+ (instancetype)defaultLog
{
    static CDALog *sharedStore = nil;
    
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        
#if TARGET_OS_MAC
        
        sharedStore = [[CDAAppleLog alloc] init];

#else
        
        sharedStore = [[self alloc] init];
        
#endif
        
    });
    
    return sharedStore;
}

@end


