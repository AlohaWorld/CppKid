#include "Date.h"

int Date::getYear() {
  return year;
}

int Date::getMonth() {
  return month;
}

int Date::getday() {
  return day;
}

void Date::setYear(int y) {
  year = y;
}
void Date::setMonth(int m) {
  month = m;
}

void Date::setDay(int d) {
  day = d;
}

Date::Date(int y , int m , int d) : year{ y } , month{ m } , day{ d } {
  std::cout << "Date: " << toString() << std::endl;
}

std::string Date::toString() {
  return (std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day));
} // 2019-1-1