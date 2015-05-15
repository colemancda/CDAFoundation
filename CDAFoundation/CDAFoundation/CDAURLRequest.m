//
//  CDAURLRequest.m
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 5/15/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import "CDAURLRequest.h"

@implementation CDAURLRequest

#pragma mark - Initialization

+(void)initialize
{
    if (self == [CDAURLRequest class]) {
        
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
        
        _options = [[OFMutableDictionary alloc] init];
        
    }
    return self;
}

-(void)dealloc
{
    // clean cURL
    curl_easy_cleanup(_curl);
}

#pragma mark - Methods

-(CURLcode)setValue:(OFString *)value forOption:(CURLoption)option
{
    // try to set value
    
    CURLcode errorCode = curl_easy_setopt(_curl, option, value.characters);
    
    if (errorCode != CURLE_OK) {
        
        return errorCode;
    }
    
    // cache option
    _options[[OFNumber numberWithInt:option]] = value;
    
    return CURLE_OK;
}

-(CURLcode)performRequest
{
    return curl_easy_perform(_curl);
}

@end
