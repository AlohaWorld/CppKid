#pragma once
// 任务1：创建Square类
class Square {
private:
  double side{ 1.0 };
  static int numberOfObjects;
public:
  double getSide() { return side; }
  void setSide(double side) { this->side = side; }
  Square(double side) {
    this->side = side;
    numberOfObjects++;
  }
  Square() : Square(1.0) {}
  double getArea() { return side * side; }
  static int getNumberOfObjects() { return numberOfObjects; }
  int getNumberOfObjectsNonStatic() { return numberOfObjects; }
};