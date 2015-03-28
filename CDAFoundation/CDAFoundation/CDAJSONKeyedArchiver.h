//
//  CDAJSONKeyedArchiver.h
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/28/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import <ObjFW/ObjFW.h>
#import <CDAFoundation/CDACoder.h>

/** Concrete subclass of @ref CDACoder that archives data to JSON. */
@interface CDAJSONKeyedArchiver : CDACoder
{
    /** The JSON object being built from the serialized format. */
    OFMutableDictionary *_initJSONObject;
}

@end
