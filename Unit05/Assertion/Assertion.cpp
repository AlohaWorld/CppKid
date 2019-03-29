#include <iostream>
#include <string>
#include <array>
#include <cassert>

#include "aloha.h"

/**
 * @fn  int main()
 *
 * @brief       This is a test program for assert() and static_assert()
 *
 * @author      Cyd
 * @date        2019/3/3
 *
 * @returns     Exit-code for the process - 0 for success, else an error code.
 */

int main() {
  std::array a{ 1, 2, 3 };  /// C++17 type parameter deduction
  size_t i = 0;
  for (; i <= a.size(); i++) {
    assert(i < 3);
    std::cout << a[ i ];
    std::cout << (i == a.size() ? "" : " ");
  }

  Aloha::pause();
  return 0;
}