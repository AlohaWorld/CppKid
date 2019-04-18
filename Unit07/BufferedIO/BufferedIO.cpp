#include <iostream>

int main() {
  // 拿到cin对象的缓冲区指针
  auto p = std::cin.rdbuf();

  // 从键盘读入字符到缓冲区，保留所有字符在缓冲区
  auto x = std::cin.peek();

  std::cout << "x = " << x << std::endl;

  // 显示缓冲区中的字符数量
  auto count = p->in_avail();
  std::cout << "There are " << count << " characters in the buffer." << std::endl;

  // 把缓冲区的字符都取出来并显示
  for (int i = 0; i < count; i++) {
    std::cout << i + 1 << ": " << std::cin.get() << std::endl;
  }

  // std::cin.get();
  return 0;
}