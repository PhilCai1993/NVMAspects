//
//  AspectData.h
//  NVMAspects
//
//  Created by Karl Peng on 3/28/17.
//  Copyright © 2017 Rajax Network Technology Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NVMAspectData : NSObject

+ (instancetype)aspectDataWithClass:(Class)cls
                           selector:(SEL)selector
                           impBlock:(id)impBlock
                              error:(NSError **)error;

@property (nonatomic, unsafe_unretained, readonly) Class cls;
@property (nonatomic, assign, readonly) SEL selector;
@property (nonatomic, strong, readonly) NSMethodSignature *methodSignature;

@property (nonatomic, assign) BOOL hasReturnValue;

@property (nonatomic, assign) IMP oriIMP;

@property (nonatomic, copy, readonly) id impBlock;
@property (nonatomic, strong, readonly) NSMethodSignature *blockSignature;

@end
