#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//任务1：创建类A和三个构造函数，使用代理构造减少重复代码
//任务2：展示代理构造的环形调用问题

class A {
private:
  int num1 , num2;
  int average;
public:
  int getAverage() {
    return average;
  }
  A() : A(0 , 0) {
    cout << "In A() body" << endl;
    //average = (num1 + num2) / 2;
  }
  A(int i) : A(i , 0) {
    cout << "In A(int i) body" << endl;
    //average = (num1 + num2) / 2;
  }
  A(int i , int j) : num1{ i } , num2{ j } {
    cout << "In A(int i, int j) body" << endl;
    average = (num1 + num2) / 2;
  }
};
int main() {
  A a1;
  cout << "A a1: " << a1.getAverage() << endl;

  A a2(10);
  cout << "A a2(10): " << a2.getAverage() << endl;

  A a3(100 , 50);
  cout << "A a3(100,50):" << a3.getAverage() << endl;

  cin.get();
  return (0);
}