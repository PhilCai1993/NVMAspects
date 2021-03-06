//
//  Utils.h
//  NVMAspects
//
//  Created by Karl Peng on 3/28/17.
//  Copyright © 2017 Rajax Network Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ffi.h"

extern ffi_type *ffiTypeFromEncodingChar(const char *c);

extern void AspectLuckySetError(NSError **error, NSInteger code, NSString *description);

extern BOOL ObjCTypeIsEqual(const char *type, const char *otherType);

extern NSString *ObjCTypesInSignature(NSMethodSignature *signature);
