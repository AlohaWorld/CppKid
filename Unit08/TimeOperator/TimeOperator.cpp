#include <iostream>
class Time {
  int hour, minute, second;
public:
  Time(int h = 0, int m = 0, int s = 0) :hour(h), minute(m), second(s) {}
  //Time(Time &&) = default;
  //Time() = default;
  //Time(Time &) = default;
  Time &operator++();
  Time operator++(int);
  friend std::ostream &operator<<(std::ostream &out, Time &time);
  friend std::ostream &operator<<(std::ostream &out, Time &&time);
};
Time &Time::operator++ () {
  second++;
  if (second >= 60) {
    second -= 60;
    minute++;
    if (minute >= 60) {
      minute -= 60;
      hour = (hour + 1) % 24;
    }
  }
  return (*this);
}
Time Time::operator++ (int) {
  Time old = *this;               //用old记录当前的对象
  second++;
  if (second >= 60) {
    second -= 60;
    minute++;
    if (minute >= 60) {
      minute -= 60;
      hour = (hour + 1) % 24;
    }
  }
  return old;
}
std::ostream &operator<<(std::ostream & out, Time & time) {
  out << time.hour << ":" << time.minute << ":" << time.second;
  return out;
}
std::ostream &operator<<(std::ostream & out, Time && time) {
  out << time.hour << ":" << time.minute << ":" << time.second;
  return out;
}
//主函数
int main() {
  Time time(11, 59, 58);
  for (int i = 0; i < 4; i++)
    std::cout << time++ << std::endl;
  //time++提示报错，找不到实现右操作的运算符
  std::cout << std::endl;
  for (int j = 0; j < 4; j++)
    std::cout << ++time << std::endl;
  return 0;
}