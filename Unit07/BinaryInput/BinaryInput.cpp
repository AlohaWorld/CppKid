#include <iostream>
#include <fstream>
#include <filesystem>
#include <array>
int main() {
  namespace fs = std::filesystem;
  using io = std::ios;

  // 创建二进制输出流
  fs::path p{ "temp.dat" };
  std::fstream bio{ p, io::out | io::binary };
  // 判断流是否成功打开
  if (!bio) {
    std::cout << "Can't open file " << p << std::endl;
    return 0;
  }

  // 将一个整型数组的内容输出到二进制文件中
  std::array arr{ 21, 42, 63 };
  const char* buf = reinterpret_cast<char*>(&arr[ 0 ]);
  std::streamsize size = arr.size() * sizeof(arr[ 0 ]);
  bio.write(buf , size);

  // 以读取模式重新打开二进制文件，或者将文件光标定位到文件头
  bio.close();
  bio.open(p , io::in | io::binary);

  // 从二进制流中读入一个整数并显示到屏幕上
  auto x = int{ 0 };
  bio.read(reinterpret_cast<char*>(&x) , sizeof(x));
  std::cout << x << std::endl;

  bio.seekg();
}