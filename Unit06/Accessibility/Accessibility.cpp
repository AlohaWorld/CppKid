#include <iostream>
using std::cout;
using std::endl;

class A {
public:
  int i{ 0 };
protected:
  int j{ 0 };
private:
  int k{ 0 };
};

class Pub :public A {
public:
  void foo() { i++; j++; }
};

class Pro :protected A {
public:
  void foo() { i++; j++; }
};

class Pri :private A {
public:
  void foo() { i++; j++; }
};
int main() {
  Pub pub;
  Pro pro;
  Pri pri;

  pub.i++; pub.j++; pub.k++;
  pro.i++; pro.j++; pro.k++;
  pri.i++; pri.j++; pri.k++;

  std::cin.get();
}