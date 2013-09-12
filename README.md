ExtendNSLog
===========
we would like NSLog to be like this:

  (ClassName MethodName) (SourceFileName:LineNumber) NSLog output
  
##intall
Now add the ExtendNSLogFunctionality.h include to the prefix header file Prefix.pch within the #ifdef __OBJC__ section.

  #ifdef __OBJC__
      #import <UIKit/UIKit.h>
      #import <Foundation/Foundation.h>
      #import "ExtendNSLogFunctionality.h"
  #endif

  
##A Custom Log Example

  int result = 20;
  NSLog(@"Value of result : %d", result);

you should see something like this:

  (­[AppDelegate application:didFinishLaunchingWithOptions:]) (AppDelegate.m:21) Value of result : 20
