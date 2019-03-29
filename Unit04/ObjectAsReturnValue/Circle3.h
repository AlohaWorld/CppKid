//#ifndef CIRCLE_H_
//#define CIRCLE_H_
#pragma once

class Circle {
  double radius;

public:
  Circle();
  Circle(double radius_);
  double getArea() const;
  double getRadius() const;
  Circle& setRadius(double radius);
};

//#endif /* CIRCLE_H_ */
