//
//  CDAJSONKeyedArchiver.m
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/28/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import "CDAJSONKeyedArchiver.h"

@implementation CDAJSONKeyedArchiver

#pragma mark - CDACoder

-(BOOL)allowsKeyedCoding
{
    return YES;
}

-(BOOL)containsValueForKey:(OFString *)key
{
    return false;
}

@end
