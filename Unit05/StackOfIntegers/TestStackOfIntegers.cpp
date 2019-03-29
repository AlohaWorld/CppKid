#include< iostream>
#include <cassert>
#include "StackOfIntegers.h"
// 任务2：创建Stack对象，展示入栈出栈操作
int main() {
  StackOfIntegers s1{};
  for (int i = 0; i < 5; i++) { // 底 1 2 3 4 5 顶
    s1.push(i + 1);
  }
  std::cout << "Stack size = " << s1.getSize() << std::endl;
  std::cout << "Top element is: " << s1.peek() << std::endl;
  const int size = s1.getSize();
  for (int i = 0; i < size; i++) {
    std::cout << s1.pop() << " ";
  }
  std::cout << std::endl;
  std::cout << "Stack now is empty: " << s1.empty() << std::endl;
  std::cin.get();
  return 0;
}