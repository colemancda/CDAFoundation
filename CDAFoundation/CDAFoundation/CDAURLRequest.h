//
//  CDAURLRequest.h
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 5/15/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import <ObjFW/ObjFW.h>
#import <curl/curl.h>

/** URL Client powered by cURL. */
@interface CDAURLRequest : OFObject
{
    /** Internal cURL handler. */
    CURL *_curl;
    
    /* Mutable cache of options. */
    OFMutableDictionary *_options;
}

#pragma mark - Properties

/** Dictionary containing @c CURLoption (wrapped in OFNumber) for keys and@ c OFString as values. */
@property (nonatomic, readonly) OFDictionary *options;

#pragma mark - Methods

/** Tries to set the value of the option for the request. Returns error for invalid options. */
-(CURLcode)setValue:(OFString *)value forOption:(CURLoption)option;

/** Executes the URL request. */
-(CURLcode)performRequest;

@end
