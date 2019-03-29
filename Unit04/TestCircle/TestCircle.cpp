/*
 TODO: 1. Create a class Circle
 TODO: 2. Create two overloading ctors
 TODO: 3. Create two object and call the member function
 */
#include <iostream>

class Circle {
public:
  double radius;
  Circle() {
    radius = 1.0;
  }
  Circle(double r) {
    radius = r;
  }
  double getArea() {
    return (3.14 * radius * radius);
  }
};

int main() {
  Circle c1;
  Circle c2 {2.0};

  std::cout << c1.getArea() << std::endl;
  std::cout << c2.getArea() << std::endl;
  return (0);
}




