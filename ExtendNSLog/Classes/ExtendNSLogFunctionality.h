//
//  ExtendNSLogFunctionality.h
//  ExtendNSLog
//
//  Created by cncn on 13-9-12.
//  Copyright (c) 2013年 cncn. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifdef DEBUG
#define NSLog(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
#define NSLog(x...)
#endif

void ExtendNSLog(const char *file, int lineNumber, const char *functionName, NSString *format, ...);

