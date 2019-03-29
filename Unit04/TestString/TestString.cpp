// TestString/TestString.cpp  Author: cyd
#include <iostream>
using namespace std;

int main() {
  // 创建字符串
  string s{"Hello"};
  // clear
  s.clear();
  // 用数组为字符串赋值
  char arr[] { 'W', 'o', 'r','l','d' };
  s += arr;
  // assign()
  s.assign("1024");
  // append
  s.append("  ");
  s.append(5, '\t');
  //s.append("!");
  cout << s << endl;
  // insert 空白
  s.insert(0, "   ");
  // 移除字串前面的空白
  s.erase(0, s.find_first_not_of(" \t\n\r"));
  // 移除字串后面的空白
  s.erase(s.find_last_not_of(" \t\n\r")+1);
  // 把字串转化为整数或浮点数
  int x = std::stoi(s);
  cout << s << endl;
  cout << "x = " << x << endl;

  string s2 = std::to_string(x);
  cout << "s2:" << s2;
  return (0);
}



