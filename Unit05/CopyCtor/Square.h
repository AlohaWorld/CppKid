#pragma once
// 任务1：添加拷贝构造函数、析构函数，添加输出信息
#include <iostream>
class Square {
private:
  double side{ 1.0 };
  static int numberOfObjects;

public:
  Square() : Square(1.0) {
  }

  Square(double side) {
    this->side = side;
    numberOfObjects++;
  }

  Square(const Square& s) {
    this->side = s.side;
    numberOfObjects++;
    std::cout << "Square(const Square&) is invoked" << std::endl;
  }

  ~Square() {
    numberOfObjects--;
  }

  double getSide() {
    return side;
  }

  void setSide(double side) {
    this->side = side;
  }

  double getArea() {
    return side * side;
  }

  static int getNumberOfObjects() {
    return numberOfObjects;
  }

  int getNumberOfObjectsNonStatic() {
    return numberOfObjects;
  }
};