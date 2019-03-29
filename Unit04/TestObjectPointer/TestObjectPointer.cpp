// TestObjectPointer/TestObjectPointer.cpp  Author: cyd

#include <iostream>
#include "Circle.h"

int main() {
  auto* c1 = new Circle {1.0};
  Circle c3 {2.0};
  auto c2 = &c3;

  std::cout << (*c1).getArea() << std::endl;
  std::cout << c2->getArea() << std::endl;

  auto c5 = new Circle[3] { 1.0, 2.0, 3.0 };
  for(int i = 0; i< 3; i++) {
    std::cout << c5[i].getArea() << std::endl;
  }

  delete c1;
  delete [] c5;
  c1 = c5 = nullptr;

  delete c1;
  return (0);
}


