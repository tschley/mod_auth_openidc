// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

C:\1 - dematic - spe - mod_auth_openidc\target\httpd - 2.4.41 - win32 - VS16\Apache24\lib

#pragma comment(lib, "libaprutil-1.lib")

#pragma comment(lib, "libhttpd.lib")


#pragma comment(lib, "D:\\spe\\github\\cjose\\x64\\Release\\cjose.lib")



//C:\1-dematic-spe-mod_auth_openidc\target\httpd-2.4.41-win32-VS16\Apache24\lib

//////////////////////////////////////////////////////////////////////////////
// Choose an OS
#if defined (_WIN64) 
	#pragma message("Linking to target/httpd-2.4.41-win64-VS16/Apache24/lib/libaprutil-1.lib.lib from file " __FILE__)
	#pragma comment(lib, "target/httpd-2.4.41-win64-VS16/Apache24/lib/libaprutil-1.lib")

	#pragma message("Linking totarget/httpd-2.4.41-win64-VS16/Apache24/lib/libhttpd.lib from file " __FILE__)
	#pragma comment(lib, "target/httpd-2.4.41-win64-VS16/Apache24/lib/libhttpd.lib")

	#pragma message("Linking to x64\\cjose.lib from file " __FILE__)
	#pragma comment(lib, "D:\\spe\\github\\cjose\\x64\\Release\\cjose.lib")

#elif defined (_WIN32) 
	#pragma message("Linking to target/httpd-2.4.41-win32-VS16/Apache24/lib/libaprutil-1.lib.lib from file " __FILE__)
	#pragma comment(lib, "target/httpd-2.4.41-win32-VS16/Apache24/lib/libaprutil-1.lib")

	#pragma message("Linking to target/httpd-2.4.41-win32-VS16/Apache24/lib/libhttpd.lib from file " __FILE__)
	#pragma comment(lib, "target/httpd-2.4.41-win32-VS16/Apache24/lib/libhttpd.lib")

	#pragma message("Linking to x32\\cjose.lib from file " __FILE__)
	#pragma comment(lib, "D:\\spe\\github\\cjose\\x64\\Release\\cjose.lib")
#else
	#error "Add OS here"
#endif