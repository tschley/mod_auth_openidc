// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

///////////////////////////////////////////////////////////////////////////////
// Choose an OS
#if defined (_WIN64) 
   #pragma message("Linking to x64\\libaprutil-1.lib.lib from file " __FILE__)
   #pragma comment(lib, "libaprutil-1.lib")

   #pragma message("Linking to x64\\libhttpd.lib from file " __FILE__)
   #pragma comment(lib, "libhttpd.lib")

   #pragma message("Linking to x64\\cjose.lib from file " __FILE__)
   #pragma comment(lib, "D:\\spe\\github\\cjose\\x64\\Release\\cjose.lib")

#elif defined (_WIN32) 
   #pragma message("Linking to x32\\libaprutil-1.lib.lib from file " __FILE__)
   #pragma comment(lib, "libaprutil-1.lib")

   #pragma message("Linking to x32\\libhttpd.lib from file " __FILE__)
   #pragma comment(lib, "libhttpd.lib")

   #pragma message("Linking to x32\\cjose.lib from file " __FILE__)
   #pragma comment(lib, "D:\\spe\\github\\cjose\\x64\\Release\\cjose.lib")
   #else
#error "Add OS here"
#endif

#define STRING2(x) #x
#define STRING(x) STRING2(x)

#pragma message("Using compiler " STRING(_MSC_VER) __FILE__)

///////////////////////////////////////////////////////////////////////////////
// Choose a Compiler
#if _MSC_VER >= 1911
#define PDD_COMPILER "-vc14.1"
#else
#error "Add compiler here"
#endif





// TODO: reference additional headers your program requires here
