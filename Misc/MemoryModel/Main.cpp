#include <iostream>
int main() {
  const int a = 5;

  const int *p = &a;

  std::cout << &a << " " << &p;
}