#include <iostream>
#include <fstream>

/**
 * 用法： tee2 输入文件名  输出文件名
 * 作用： 将输入文件拷贝到输出文件，同时显示到屏幕上
 */
int main(int argc , char* argv[]) {
  // 处理输入参数
  if (argc != 3) {
    std::cout << R"(Usage: tee <Input File> <Output File>)" << std::endl;
    return 0;
  }

  // 创建输入文件流和输出文件流
  std::ifstream in{ argv[ 1 ] };
  std::ofstream out(argv[ 2 ]); // , std::ios::binary | std::ios::trunc);

  // 检查文件流是否成功打开
  if (!in) {
    std::cout << "Can't open input file " << argv[ 1 ] << std::endl;
    std::exit(1);
  }
  if (!out) {
    std::cout << "Can't open output file " << argv[ 2 ] << std::endl;
    std::exit(1);
  }

  // 将数据从源文件拷贝到目的文件，同时显示到屏幕上
  /*
  char c{ '\0' };
  while (!in.eof()) { // 这种写法有问题
    in.get(c);        // 已经读完最后一个字符，然后再执行此句时，才会导致eof()为真
    out.put(c);
    std::cout << c;
  }
  */
  /* 同样有问题
  char c{ '\0' };
  do {
    in.get(c);        // 已经读完最后一个字符，然后再执行此句时，才会导致eof()为真
    out.put(c);
    std::cout << c;
  } while (!in.eof()) { // 这种写法有问题
  */
  char c{ '\0' };
  while (!in.get(c).eof()) { // 若get(c)导致eof()为真，则此时c是无效的。
    out.put(c);
    std::cout << c;
  }

  // 关闭文件流
  in.close();
  out.close();
  return 0;
}