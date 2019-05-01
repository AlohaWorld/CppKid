#include "Stack.h"
#include <iostream>
#include <string>
//2. 创建一个字符栈，将一个字符串的内容反转输出
int main() {
  Stack<> c;
  std::string s{ "Hello, World!" };
  for (auto i : s) {
    c.push(i);
  }

  for (; c.empty() != true; ) {
    std::cout << c.pop();
  }
}