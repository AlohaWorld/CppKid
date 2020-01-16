#include <iostream>

// 定义结构体，包含double和int成员
struct S { // class S { public:
  double d1{ 1.0 };
  int i1{ 32 };
};
// 定义类，包含int和字符数组成员
class C {
public:
  int i2{ 1 };
  char c[ 3 ]{ 'a','b' , '\0' };
};

int main() {
  // 定义结构体和类对象
  S s;
  C c;
  // 绑定结构体变量
  auto [d1, i1] {s};

  // 以引用形式绑定类对象成员
  auto &[i2, c2] {c};
  // 输出绑定的成员

  std::cout << "s.d1=" << d1 << "  s.i1=" << i1 << std::endl;
  std::cout << "c.i2=" << i2 << "  c.c[3]=" << c2 << std::endl;
}