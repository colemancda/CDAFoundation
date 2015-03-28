//
//  CDACoder.h
//  CDAFoundation
//
//  Created by Alsey Coleman Miller on 3/28/15.
//  Copyright (c) 2015 ColemanCDA. All rights reserved.
//

#import <ObjFW/ObjFW.h>


/** Abstract class that declares the interface used by concrete subclasses to transfer objects and other values between memory and some other format. */
@interface CDACoder : OFObject

#pragma mark - Properties

/**
 @brief A Boolean value that indicates whether the receiver supports keyed coding of objects. (read-only)
 @discussion NO by default. Concrete subclasses that support keyed coding, need to override this property to return YES.
 */
@property (readonly) BOOL allowsKeyedCoding;

#pragma mark - Methods

/**
 @brief Returns a Boolean value that indicates whether an encoded value is available for a string.
 @discussion Subclasses must override this method if they perform keyed coding. The string is passed as key.
 */
- (BOOL)containsValueForKey:(OFString *)key;

@end

#pragma mark - Protocol

/** Protocol for archiving and unarchiving objects. */
@protocol CDACoding <OFObject>

- (instancetype)initWithCoder:(CDACoder *)decoder;

- (void)encodeWithCoder:(CDACoder *)encoder;

@end