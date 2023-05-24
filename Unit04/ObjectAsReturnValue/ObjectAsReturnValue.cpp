// ObjectAsReturnValue/ObjectAsReturnValue.cpp  Author: cyd
import myModule;
import <iostream>;
using namespace std;

int main() {
  Circle c {1.0};

  cout << c.setRadius(2.0)
      .setRadius(3.0)
      .getArea() << endl;

  return (0);
}
