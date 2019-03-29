#pragma once
#include "Shape.h"
// 创建Rectangle类，从Shape继承
class Rectangle : public Shape {
private:
  double width{ 1.0 };
  double height{ 1.0 };
public:
  Rectangle() = default;
  Rectangle(double w , double h , Color c , bool f);

  double getWidth() const;
  void setWidth(double w);
  double getHeight() const;
  void setHeight(double h);

  double getArea() const;

  string toString();
};
