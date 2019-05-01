#include <iostream>
template <class T, typename Q>
auto add(T x, Q y) {
  return (x + y);
}
int main() {
  std::cout << add(3, 2.3) << std::endl; // add(double x, int y);
}