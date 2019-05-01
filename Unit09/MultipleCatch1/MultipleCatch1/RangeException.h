#pragma once
#include <exception>
#include <stdexcept>

class RangeException :public std::out_of_range {
private:
  std::size_t dimension{ 0 };
  int index{ 0 };
public:
  RangeException(std::size_t dimension , int index) : out_of_range("index exceeds Vector dimension") {
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