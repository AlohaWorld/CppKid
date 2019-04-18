// BinaryOutput.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>

int main() {
  using io=std::ios;
  std::fstream fs("GreatWall.txt" , io::binary | io::out | io::trunc);
  char s[] = "ShanHaiGuan\nJuYongGuan";
  fs.write(s , sizeof(s));
  fs.close();
}