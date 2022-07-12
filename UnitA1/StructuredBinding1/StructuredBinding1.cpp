#include <array>
#include <iostream>

int main() {
  std::array a{1, 2, 3};
  std::array<int, 2> b{11, 12};

  auto &[e1, e2, e3] = a;

  a[0] = 10;

  std::cout << e1 << " " << e2 << " " << e3;
  return 0;
}

void foo() {
  int printArr[]{1, 2, 3};
  const auto [a1, a2, a3](printArr);
  const auto [b1, b2, b3]{printArr};

  auto &[c1, c2, c3](printArr);
  auto &[d1, d2, d3]{printArr};
}