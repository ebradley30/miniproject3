#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "VVJSONSchema.h"
#import "VVJSONSchemaErrors.h"
#import "VVJSONSchemaFactory.h"
#import "VVJSONSchemaFormatValidator.h"
#import "VVJSONSchemaReference.h"
#import "VVJSONSchemaStorage.h"
#import "VVJSONSchemaValidationContext.h"
#import "VVJSONSchemaValidator.h"
#import "NSArray+VVJSONComparison.h"
#import "NSDictionary+VVJSONComparison.h"
#import "NSNumber+VVJSONNumberTypes.h"
#import "NSObject+VVJSONComparison.h"
#import "NSString+VVJSONPointer.h"
#import "NSURL+VVJSONReferencing.h"
#import "VVJSONSchema+StandardValidators.h"
#import "VVJSONSchemaArrayItemsValidator.h"
#import "VVJSONSchemaArrayValidator.h"
#import "VVJSONSchemaCombiningValidator.h"
#import "VVJSONSchemaDefinitions.h"
#import "VVJSONSchemaDependenciesValidator.h"
#import "VVJSONSchemaEnumValidator.h"
#import "VVJSONSchemaNumericValidator.h"
#import "VVJSONSchemaObjectPropertiesValidator.h"
#import "VVJSONSchemaObjectValidator.h"
#import "VVJSONSchemaStringValidator.h"
#import "VVJSONSchemaTypeValidator.h"
#import "VVJSONSchemaValidation.h"

FOUNDATION_EXPORT double VVJSONSchemaValidationVersionNumber;
FOUNDATION_EXPORT const unsigned char VVJSONSchemaValidationVersionString[];

