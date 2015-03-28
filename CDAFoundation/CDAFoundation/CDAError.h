//
//  CDAError.h
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/1/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import <ObjFW/ObjFW.h>
#import <CDAFoundation/CDAInteger.h>

extern OFString * const CDAErrorDescriptionKey;

/** Used to describe a non-fatal error. */
@interface CDAError : OFObject

#pragma mark - Intialization

+ (instancetype)errorWithDomain:(OFString *)domain
                           code:(CDAInteger)code
                       userInfo:(OFDictionary *)userInfo;

- (instancetype)initWithDomain:(OFString *)domain
                          code:(CDAInteger)code
                      userInfo:(OFDictionary *)userInfo;

#pragma mark - Properties

@property (readonly) CDAInteger code;

@property (readonly, copy) OFString *domain;

@property (readonly, copy) OFDictionary *userInfo;

@property (readonly, copy) OFString *description;

@end
