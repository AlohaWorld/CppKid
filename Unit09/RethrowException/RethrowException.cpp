#include <iostream>
#include <exception>
#include <stdexcept>
using std::cout;
using std::endl;
void f();
int main() {
  try {
    f();
  } catch (const std::exception & e) {
    cout << "catched exception :" << e.what() << endl;
  }
}

void f() {
  try {
    throw std::logic_error("Throw in f()");
  } catch (const std::exception & e) {
    cout << "catched in f()" << endl;
    cout << "exception : " << e.what() << endl;
    throw;
  }
}