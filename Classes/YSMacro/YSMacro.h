//
//  YSMacro.h
//  YSMacroExample
//
//  Created by Yu Sugawara on 2014/01/28.
//  Copyright (c) 2014年 Yu Sugawara. All rights reserved.
//

#ifdef DEBUG
    #define LOG(...) NSLog(__VA_ARGS__)
    #define LOG_METHOD NSLog(@"%s(%d)", __func__, __LINE__)
    #define LOG_METHOD_AND_ABORT LOG_METHOD; abort()

    #define LOG_POINT(p) NSLog(@"point = (%f %f)", p.x, p.y)
    #define LOG_POINT_AND_DESCRIPTION(desc, p) NSLog(@"%@ = (%f %f)", desc, p.x, p.y)
    #define LOG_SIZE(s) NSLog(@"size = (%f %f)", s.width, s.height)
    #define LOG_SIZE_AND_DESCRIPTION(desc, s) NSLog(@"%@ = (%f %f)", desc, s.width, s.height)
    #define LOG_RECT(r) NSLog(@"rect = (%f %f; %f %f)", r.origin.x, r.origin.y, r.size.width, r.size.height)
    #define LOG_RECT_AND_DESCRIPTION(desc, r) NSLog(@"%@ = (%f %f; %f %f)", desc, r.origin.x, r.origin.y, r.size.width, r.size.height)


    #define LOG_PRINTF(FORMAT, ...) printf("%s\n", [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
    #define LOG_PRINTF_METHOD LOG_PRINTF(@"%s", __func__)

    #define LOG_PRINTF_POINT(p) LOG_PRINTF(@"point = (%f %f);", p.x, p.y)
    #define LOG_PRINTF_POINT_AND_DESCRIPTION(desc, p) LOG_PRINTF(@"%@ = (%f %f);", desc, p.x, p.y)
    #define LOG_PRINTF_SIZE(s) LOG_PRINTF(@"size = (%f %f);", s.width, s.height)
    #define LOG_PRINTF_SIZE_AND_DESCRIPTION(desc, s) LOG_PRINTF(@"%@ = (%f %f);", desc, s.width, s.height)
    #define LOG_PRINTF_RECT(r) LOG_PRINTF(@"rect = (%f %f; %f %f);", r.origin.x, r.origin.y, r.size.width, r.size.height)
    #define LOG_PRINTF_RECT_AND_DESCRIPTION(desc, r) LOG_PRINTF(@"%@ = (%f %f; %f %f);", desc, r.origin.x, r.origin.y, r.size.width, r.size.height)
#else
    #define LOG(...)
    #define LOG_METHOD
    #define LOG_METHOD_AND_ABORT

    #define LOG_POINT(p)
    #define LOG_POINT_AND_DESCRIPTION(desc, p)
    #define LOG_SIZE(s)
    #define LOG_SIZE_AND_DESCRIPTION(desc, s)
    #define LOG_RECT(r)
    #define LOG_RECT_AND_DESCRIPTION(desc, r)


    #define LOG_PRINTF(FORMAT, ...)
    #define LOG_PRINTF_METHOD

    #define LOG_PRINTF_POINT(p)
    #define LOG_PRINTF_POINT_AND_DESCRIPTION(desc, p)
    #define LOG_PRINTF_SIZE(s)
    #define LOG_PRINTF_SIZE_AND_DESCRIPTION(desc, s)
    #define LOG_PRINTF_RECT(r)
    #define LOG_PRINTF_RECT_AND_DESCRIPTION(desc, r)
#endif

#if DEBUG
@interface UIView (YSDebugPrivate)
    - (NSString*)recursiveDescription;
@end
    #define LOG_RECURSIVE_DESCRIPTION_WINDOW LOG(@"\n%@", [self.view.window recursiveDescription])
    #define LOG_RECURSIVE_DESCRIPTION_VIEW(view) LOG(@"\n%@", [view recursiveDescription])
#else
    #define LOG_RECURSIVE_DESCRIPTION_WINDOW
    #define LOG_RECURSIVE_DESCRIPTION_VIEW(view)
#endif

#if DEBUG
    #define YSSCREEN_SHOT_MODE 0
#endif
