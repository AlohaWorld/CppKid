/* This program need a C++17-conformable compiler
 * 本程序需使用符合C++17标准的编译器编译
 */
#include <iostream>
#include <cstdlib>

 // 编写一个猜大小的程序
int main() {
  // 输出提示信息：生成数的范围
  std::cout << "正在生成0-100间的整数...\n";
  // 输出提示信息：请用户输入整数
  std::cout << "请输入你猜测的整数：";
  // 定义变量，保存用户输入信息
  auto x{ 0 }; // int x = 0;
  std::cin >> x;

  // 生成随机数，判断用户输入的大小，提示用户猜大了/猜小了/猜中了
  // rand(); <cstdlib>
  if (int z = rand() % 100; x > z) {
    std::cout << "你猜大了，我的数是" << z << std::endl;
  } else if (x < z) {
    std::cout << "你猜小了，我的数是" << z << std::endl;
  } else {
    std::cout << "你猜对了！" << std::endl;
  }

  return (0);
}