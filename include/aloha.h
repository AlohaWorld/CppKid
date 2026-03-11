#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <array>
#include <type_traits>
#include <utility>
#include <tuple>
/**
 * @file        aloha.h
 *
 * @author      Cyd
 *
 * @date        2019/3/3
 *
 * @brief       A set of helper functions and macros for C++ newbie
 *              Most of the codes are pulled from stackoverflow.com or cppreference.com
 */

///////////////////////////////////////////////////////////////////////////////
///  The folowing block deal with "Stringizing an identifier"
///

#pragma message("Check naming collions: QUOTEID / QUOTE")

/**
 * @def QUOTEID(identifier)
 * @brief This is a Macro. It turns an identifier to a string: "identifier"
 */
#define QUOTEID(identifier) #identifier

/**
 * @def QUOTE(m)
 * @brief This is a Macro. It turns the value (other than the name or identifier) of the macro to a string
 * @param m It's an identifier, a name or a macro
 */
#define QUOTE(m) QUOTEID(m)

///////////////////////////////////////////////////////////////////////////////
///  Dealing with the incompatibility of _Pragma() operator in Microsoft Visual
///  Studio
///

#ifdef _MSC_VER
 // VC++2017 does NOT support keyword _Pragma in c++11
 // And #pragma message does NOT output the source filename and line No.
#define PRAGMA(x) __pragma(x)
#else
#define PRAGMA(x) _Pragma(#x) // Assuming other compilers compatible with C++11 support _Pragma
#define FILENAME_AND_LINENUMBER
#endif

///////////////////////////////////////////////////////////////////////////////
/// Show developer messages in compiling outputs
///
/// USAGE:
/// 1. Include this header file in your program
/// #include "aloha.h"
/// 2. Use these macros
/// 3. When compiling the source codes, the information appears in compiling
///    outputs
///
/// List of Macros:
/// DEVELOPER_MESSAGE(msg)
/// DEVELOPER_FIXME(msg)
/// DEVELOPER_TODO(msg)

/**
 * @def FILENAME_AND_LINENUMBER
 *
 * @brief Combine __FILE__ and __LINE__ to a single string
 */
#define FILENAME_AND_LINENUMBER QUOTE(__FILE__) ":" QUOTE(__LINE__) " "

/**
 * @def DEVELOPER_MESSAGE(msg)
 *
 * @brief Common msg to developers
 *
 * @param msg The message that will be shown in the compiling outputs
 *
 * This macro will show a message in the compiling outputs while the source code
 * file being compiled
 */
#define DEVELOPER_MESSAGE(msg) PRAGMA(message (FILENAME_AND_LINENUMBER msg))

/**
 * @def DEVELOPER_FIXME(msg)
 *
 * @brief FIXME msg to developers
 *
 * @param msg The message that will be shown in the compiling outputs
 *
 * This macro will show a message with a prefix [ FIXME ] in the compiling
 * outputs while the source code file being compiled.
 * Usually this indicates there are bugs in the specific lines
 */
#define DEVELOPER_FIXME(msg) PRAGMA(message (FILENAME_AND_LINENUMBER "[ FIXME ]: " msg))

/**
 * @def DEVELOPER_TODO(msg)
 *
 * @brief TODO msg to developers
 *
 * @param msg The message that will be shown in the compiling outputs
 *
 * This macro will show a message with a prefix [ TODO ] in the compiling
 * outputs while the source code file being compiled.
 * Usually this indicates there are some works to be done
 */
#define DEVELOPER_TODO(msg) PRAGMA(message (FILENAME_AND_LINENUMBER "[ TODO ]: " msg))

/**
 * @def PRINT(x)
 *
 * @brief Print the variable's name and value for debugging
 *
 * Generally, PRINT(x) will print the name of the identifier "x", followed by
 * the value of x, which looks like:  x : 120
 * With "prettyprint.hpp", If x is a STL container object, then the contents
 * of x is printed in such form:  x : [1, 4, 67, 321]
 *
 * @see https://github.com/louisdx/cxx-prettyprint
 */
#include "prettyprint.hpp"
#define PRINT(x) std::cout << #x << "  : " << x << std::endl

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
  void pause(const std::string &hints = "Press any key to continue.") {
    std::streamsize bufSize = std::cin.rdbuf()->in_avail();
    if (bufSize >= 1) {
      // extract and discard 1 character (CR) that remain in the input buffer
      std::cin.ignore(bufSize);
    }
    std::cout << "\n" << hints;
    std::cin.get();    // wait until the user hit the keyboard
  }

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
  std::ostream &operator<<(std::ostream &s, const std::vector<T> &v) {
    s.put('[');
    char comma[ 3 ] = { '\0', ' ', '\0' };
    for (const auto &e : v) {
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
  template<typename T, int N>
  std::ostream &operator<<(std::ostream &s, const std::array<T, N> &a) {
    s.put('[');
    char comma[ 3 ] = { '\0', ' ', '\0' };
    for (const auto &e : a) {
      s << comma << e;
      comma[ 0 ] = ',';
    }
    return s << ']';
  }
} // end namespace aloha