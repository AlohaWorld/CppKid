#include <iostream>
using std::cout;
using std::endl;
// 任务：基类默认构造函数的作用
// B:public A;

class A { //base class
public:
  // A() { cout << "A()" << endl; }
  A() = default;
  A(int i) { cout << "A(" << i << ")" << endl; }
};

class B :public A {
public:
  B() { cout << "B()" << endl; }
  B(int j) : A(j) { cout << "B(" << j << ")" << endl; }
};

int main() {
  A a1{};
  A a2{ 1 };
  B b1{};
  B b2{ 2 };
  std::cin.get();
}