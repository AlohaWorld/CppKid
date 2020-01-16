#include <iostream>
using std::cout;
using std::endl;
// 百分制成绩转化为五分制成绩
int main() {
  // 提示用户输入课程成绩
  cout << "请输入课程成绩：";
  // 读入百分制成绩
  int score = 0;
  std::cin >> score;
  // 百分制成绩除以10，利用带有初始化器的switch语句根据结果判别五分制等级
  switch (int x = score / 10; x) {
    case 10:
    case 9:
      cout << "你的五分制成绩是A\n";
      break;
    case 8:
      cout << "你的五分制成绩是B\n";
      break;
    case 7:
      cout << "你的五分制成绩是C\n";
      break;
    case 6:
      cout << "你的五分制成绩是D\n";
      break;
    default:
      cout << "你的五分制成绩是E\n";
  }
}