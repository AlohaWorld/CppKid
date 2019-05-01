#pragma once
// 任务2：创建RangeException类
// 定义构造函数 RangeException(std::size_t dimension, const int index)

#include <iostream>
#include <exception>
class RangeException : public std::exception {
private:
  std::size_t dimension{ 3 };
  int index{ 0 };
public:
  RangeException(std::size_t dimension, const int index) {
    this->dimension = dimension;
    this->index = index;
  }
  std::size_t getDimension() {
    return dimension;
  }
  int getIndex() {
    return index;
  }
};