#pragma once
#include "Shape.h"
// ²¹È«CircleÀà£¬´ÓShape¼Ì³Ð
class Circle : public Shape {
  double radius;

public:
  Circle();
  Circle(double radius_ , Color color_ , bool filled_);

  double getArea();
  double getRadius() const;
  void setRadius(double radius);

  string toString();
};