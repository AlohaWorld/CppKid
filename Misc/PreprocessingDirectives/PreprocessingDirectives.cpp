/*
 * PreprocessingDirectives.cpp
 *
 *  Created on: 2019年2月19日
 *      Author: cyd
 */
#define SHOW_DEVELOPER_MESSAGES

#include "../../include/developer.h"


//#ifdef SHOW_DEVELOPER_MESSAGES
//  #define STRING2(x) #x
//  #define STRING(x) STRING2(x)
//  #ifdef _MSC_VER               // VC++2017不支持C++11的_Pragma，且其#pragma message不输出文件名和行号
//    #define PRAGMA(x) __pragma(x)
//    #define FILENAME_AND_LINENUMBER STRING(__FILE__) ":" STRING(__LINE__) " "
//  #else
//    #define PRAGMA(x) _Pragma(#x) // 假定其它符合C++11的编译器都支持_Pragma
//    #define FILENAME_AND_LINENUMBER
//  #endif
//
//  #define DEVELOPER_MESSAGE(msg) PRAGMA(message (FILENAME_AND_LINENUMBER msg))
//  #define DEVELOPER_FIXME(msg) PRAGMA(message (FILENAME_AND_LINENUMBER "[ FIXME ]: " msg))
//  #define DEVELOPER_TODO(msg) PRAGMA(message (FILENAME_AND_LINENUMBER "[ TODO ]: " msg))
//#else
//  #define DEVELOPER_MESSAGE(msg)
//  #define DEVELOPER_FIXME(msg)
//  #define DEVELOPER_TODO(msg)
//#endif


int main() {
	DEVELOPER_MESSAGE("A Message from developer");
	DEVELOPER_FIXME("Here is a narrowing bug.\nPlease fix me");
	DEVELOPER_TODO("Add more codes here");
#pragma message ("Compiling" __FILE__ "...")
	return 0;
}
