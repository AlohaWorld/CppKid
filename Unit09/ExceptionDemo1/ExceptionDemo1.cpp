#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
  // input x, y from keyboard
  int x{ 0 }, y{ 0 };
  cin >> x >> y;
  // y = 0 ?
  try {
    if (y == 0) {
      throw y;
    }
    // show x / y
    cout << x / y;
  } catch (const int &e) {
    cout << "the second number is: " << e << endl;
  }
}