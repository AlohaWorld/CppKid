#include <iostream>

int lv1{ 42 }; // Object
int& lv2() {
  return lv1; // Function returning Lvalue Reference
}

int prv(int x) {
  return 6 * x;
}
int main() {
  //  int& lv3{ lv1 }; // Lvalue reference to Object
  //  int* lv4{ &lv1 }; // Pointer to Object
  //  &lv2(); // Pointer to Object
  //
  const int& lvr5{ 21 }; // 常量左值引用可引用纯右值
  int& lvr6{ 22 }; // 错！非常量左值引用不可引用纯右值
  int&& rvr1{ 22 }; // 右值引用可以引用纯右值
  int& lvr7{ prv(2) }; // 错！非常量左值引用不可引用纯右值
  int&& rvr2{ prv(2) }; // 右值引用普通函数返回值
  rvr1 = ++rvr2; // 右值引用做左值使用
}