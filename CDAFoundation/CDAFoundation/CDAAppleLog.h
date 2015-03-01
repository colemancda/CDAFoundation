//
//  CDAAppleLog.h
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/1/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import <ObjFW/ObjFW.h>
#import <CDAFoundation/CDALog.h>

#if TARGET_OS_MAC

@import Foundation;

@interface CDAAppleLog: CDALog

@end

#endif
