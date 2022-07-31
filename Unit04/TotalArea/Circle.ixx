
import <iostream>;
export module myModule;
export class Circle;

class Circle {
  double radius;

public:
  Circle();
  Circle(double radius_);
  double getArea();
  double getRadius() const;
  void setRadius(double radius);
};

