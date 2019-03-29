#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <array>
 /**
  * @file        aloha.h
  *
  * @brief       A set of helper functions for C++ newbie
  *              Most of the codes are pulled from stackoverflow.com or cppreference.com
  *
  * @author      Cyd
  * @date        2019/3/3
  */
/*
 * This is a developer tool.
 * The given macros will print messages to the compiling outputs.
 * This tool contains 3 macros:
 *    DEVELOPER_MESSAGE(msg)
 *        This macro will send msg to the compiling outputs.
 *
 *    DEVELOPER_FIXME(msg)
 *        This macro will send msg with a prefix "[ FIXME: ]" to the compiling
 *        outputs.
 *
 *    DEVELOPER_TODO(msg)
 *        this macro will send msg with a prefix "[ TODO: ]" to the compiling
 *        outputs.
 *
 * USAGE:
 *    1. include this header file in your program
 *        #include "developer.h"
 *    2. compile your program in Debug mode (which the macro "NDEBUG" will be undefined)
 *    3. if you have used these macros in your codes and you want to supress
 *       these compiling messages, just compile your program in Release mode or #define NDEBUG
 *
 */


  ///< If this file is compiled in Debug mode, the following Macro will work
#ifndef NDEBUG
#define STRING2(x) #x
#define STRING(x) STRING2(x)
#ifdef _MSC_VER
 // VC++2017 does NOT support keyword _Pragma in c++11
 // And #pragma message does NOT output the source filename and line No.
#define PRAGMA(x) __pragma(x)
#define FILENAME_AND_LINENUMBER STRING(__FILE__) ":" STRING(__LINE__) " "
#else
#define PRAGMA(x) _Pragma(#x) // Assuming other compilers compatible with C++11 support _Pragma
#define FILENAME_AND_LINENUMBER
#endif

 /**
  * Show msg in compiling output messages
  */
  // Common msg to developers
#define DEVELOPER_MESSAGE(msg) PRAGMA(message (FILENAME_AND_LINENUMBER msg))
  // "FixMe" msg to developers : there are bugs here
#define DEVELOPER_FIXME(msg) PRAGMA(message (FILENAME_AND_LINENUMBER "[ FIXME ]: " msg))
  // "ToDo" msg to developers : we need to do something here
#define DEVELOPER_TODO(msg) PRAGMA(message (FILENAME_AND_LINENUMBER "[ TODO ]: " msg))

/**
 * Print the variable's name and value for debugging
 */
#define PRINT(x) std::cout << #x << ": " << x << std::endl;

#else
#define DEVELOPER_MESSAGE(msg)
#define DEVELOPER_FIXME(msg)
#define DEVELOPER_TODO(msg)
#endif

namespace aloha {

  /**
   * @fn        static void Aloha::pause(std::string hints = "Press any key to continue.")
   *
   * @brief     Pauses the program. Continues when the user presses any key. Used only in console applications
   *
   * @author    Cyd
   * @date      2019/3/3
   *
   * @param     hints   (Optional) The hints.
   *
   * pause() is generally used in main() function before the return statement.
   * It utilizes standard input facilities to wait user's input.
   * Once the user hits the keyboard,  pause will terminate.
   * pause() accepts one parameter which is a message to the user to tell what to do.
   * If no arguments are provided, pause will output "Press any key to continue."
   */
  static void pause(const std::string& hints = "Press any key to continue.") {
    // Pause the console windows when program terminates
    std::streamsize bufSize = std::cin.rdbuf()->in_avail();
    if (bufSize >= 1) {
      // extract and discard 1 character (CR) that remain in the input buffer
      std::cin.ignore(bufSize);
    }
    std::cout << "\n" << hints;
    std::cin.get();    // wait until the user hit the keyboard
  }

  /**
   * @def PRINT(x)
   *
   * @brief       A macro that defines print
   *
   * @param       x       A variable to print.
   */

#define PRINT(x) std::cout << #x << ": " << x << std::endl;

   /**
    * @fn  template<typename T> std::ostream& operator<<(std::ostream& s , const std::vector<T>& v);
    *
    * @brief       Output the elements in a vector object.
    *              Copy from https://en.cppreference.com/w/cpp/container/vector/vector
    *
    * @param [in,out]      s       A std::ostream to output to.
    * @param               v       A std::vector&lt;T&gt; to process.
    *
    * @returns     The std::ostream object reference.
    */

  template<typename T>
  std::ostream& operator<<(std::ostream& s , const std::vector<T>& v) {
    s.put('[');
    char comma[ 3 ] = { '\0', ' ', '\0' };
    for (const auto& e : v) {
      s << comma << e;
      comma[ 0 ] = ',';
    }
    return s << ']';
  }

     /**
    * @fn  template<typename T> std::ostream& operator<<(std::ostream& s , const std::array<T, int>& a);
    *
    * @brief       Output the elements in a array object.
    *              Modified according to https://en.cppreference.com/w/cpp/container/vector/vector
    *
    * @param [in,out]      s       A std::ostream to output to.
    * @param               a       A std::array&lt;T, int&gt; to process.
    *
    * @returns     The std::ostream object reference.
    */
  template<typename T , int N>
  std::ostream& operator<<(std::ostream& s , const std::array<T , N>& a) {
    s.put('[');
    char comma[ 3 ] = { '\0', ' ', '\0' };
    for (const auto& e : a) {
      s << comma << e;
      comma[ 0 ] = ',';
    }
    return s << ']';
  }
} // end namespace aloha