// 任务2：通过类名/对象名调用静态成员函数

#include <iostream>
#include <cassert>
#include "Square.h"

int Square::numberOfObjects = 10;
int main() {
  Square s1;
  std::cout << s1.getNumberOfObjects() << std::endl;
  assert(s1.getNumberOfObjects() == 11);
  Square s2{ 20.0 };
  std::cout << Square::getNumberOfObjects() << std::endl;
  std::cout << s2.getNumberOfObjectsNonStatic() << std::endl;
  std::cout << Square::getNumberOfObjectsNonStatic() << std::endl;
  std::cin.get();
  return (0);
}