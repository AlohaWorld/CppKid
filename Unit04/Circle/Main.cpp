import myModule;
import <iostream>;

int main() {
  Circle c1;
  Circle c2 {2.0};

  std::cout << c1.getArea() << std::endl;
  std::cout << c2.getArea() << std::endl;
  return (0);
}

