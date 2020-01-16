#include <iostream>
#include <array>

int main() {
  std::array a{ 1, 2, 3 };
  std::array<int, 2> b{ 11, 12 };

  auto &[e1, e2, e3] = a;

  a[ 0 ] = 10;

  std::cout << e1 << " " << e2 << " " << e3;
  return 0;
}