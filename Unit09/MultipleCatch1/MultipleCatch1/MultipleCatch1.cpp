#include <iostream>

#include "Vec3D.h"
#include "RangeException.h"
int main() {
  Vec3D v{ 3.5, 2.1, 8.6 };
  try {
    // std::cout << v[ 3 ] << std::endl;

    std::cout << (v / 0.0)[ 0 ] << std::endl;
  } catch (RangeException & e) {
    std::cout << "Exception: " << e.what() << std::endl;
    std::cout << "Vector dimension is " << e.getDimension() << std::endl;
    std::cout << "You used index " << e.getIndex() << std::endl;
  } catch (ZeroException & e) {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  return 0;
}