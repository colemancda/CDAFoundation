//
//  CDALog.m
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/1/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import "CDALog.h"

#if TARGET_OS_MAC
@import Foundation;
#endif

/* Convenience function for logging. */
void CDALog(OFString *message) {
    
#if TARGET_OS_MAC
    NSLog(@"%@", message);
#else
    printf(message.char)
#endif
}


