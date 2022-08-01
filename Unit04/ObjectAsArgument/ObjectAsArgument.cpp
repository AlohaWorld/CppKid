// ObjectAsArgument/ObjectAsArgument.cpp  Author: cyd
import myModule;
import <iostream>;

/*
void print(Circle c) {
  std::cout << c.getArea() << std::endl;
}
*/

void print(Circle& c) {
  std::cout << c.getArea() << std::endl;
}

void print(Circle* c) {
  std::cout << c->getArea() << std::endl;
}
int main() {
  Circle ca[] { 1.0, 2.0, 3.0 };
  print(ca[1]);
  print(ca[2]);
  print(ca+2);
  return (0);
}




