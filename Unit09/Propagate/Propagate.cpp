#include <iostream>
using std::cout;
using std::endl;
class Exception1 {};
class Exception2 {};
class Exception3 {};
void f1();
void f2();
void f3();

int main() {
  try {
    f1();
    cout << "main\n";
  } catch (const std::exception & e) {
    cout << "catch f1()\n";
  }
}

void f1() {
  try {
    f2();
    cout << "f1\n";
  } catch (const Exception1 & e) {
    cout << "catch f2()\n";
  }
}
void f2() {
  try {
    f3();
    cout << "f2\n";
  } catch (const Exception2 & e) {
    cout << "catch f3()\n";
  }
}

void f3() {
  throw Exception1();
}