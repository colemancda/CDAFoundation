//
//  CDAError.m
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/1/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import "CDAError.h"

OFString * const CDAErrorDescriptionKey = @"CDAErrorDescriptionKey";

@interface CDAError ()

@property CDAInteger code;

@property (copy) OFString *domain;

@property (copy) OFDictionary *userInfo;

@property (copy) OFString *description;

@end

@implementation CDAError

+ (instancetype)errorWithDomain:(OFString *)domain
                           code:(CDAInteger)code
                       userInfo:(OFDictionary *)userInfo
{
    return [[self alloc] initWithDomain:domain
                            code:code
                        userInfo:userInfo];
}

- (instancetype)initWithDomain:(OFString *)domain
                          code:(CDAInteger)code
                      userInfo:(OFDictionary *)userInfo
{
    self = [super init];
    if (self) {
        
        // required
        self.domain = domain;
        self.code = code;
        self.userInfo = userInfo;
        
        // optional
        self.description = userInfo[CDAErrorDescriptionKey];
        
    }
    return self;
}

@end
