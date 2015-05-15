//
//  CDAURLClient.h
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 5/15/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import <ObjFW/ObjFW.h>
#import <curl/curl.h>

/** URL Client powered by cURL. */
@interface CDAURLClient : OFObject
{
    CURL *_curl;
}


@end
