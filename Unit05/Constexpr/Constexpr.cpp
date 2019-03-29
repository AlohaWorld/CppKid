#include <iostream>
#include <array>
#include <cassert> // 使用 assert() 断言须包含本头文件
using std::cout;
using std::endl;
//任务1：用递归计算factorial，用 assert 检查 3的阶乘
//任务2：将factorial变成常量表达式，用static_assert检查3的阶乘；
//任务3：创建 factorial(4)大小的数组
constexpr int factorial(int n) {
  if (n == 0) {
    return 1; // error
  }
  else {
    return n * factorial(n - 1);
  }
}
int main() {
  static_assert(factorial(4) == 24 , "factorial(4) should be 24");
  std::array<int , factorial(4)> a;
  cout << a.size();
  std::cin.get();
  return (0);
}