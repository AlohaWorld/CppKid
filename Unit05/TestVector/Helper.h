#pragma once
/**
 * @file        Helper.h.
 *
 * @brief       Declares the helper macro and functions
 */
#include <vector>
#include <iostream>
#include <string>

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