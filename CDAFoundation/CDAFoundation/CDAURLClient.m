//
//  CDAURLClient.m
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 5/15/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import "CDAURLClient.h"

@implementation CDAURLClient

#pragma mark - Initialization

+(void)initialize
{
    if (self == [CDAURLClient class]) {
        
        curl_global_init(CURL_GLOBAL_ALL);
    }
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        
        _curl = curl_easy_init();
        
        if (!_curl) {
            
            return nil;
        }
        
    }
    return self;
}

@end
