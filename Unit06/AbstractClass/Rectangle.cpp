#include "Rectangle.h"

Rectangle::Rectangle(double w , double h , Color c , bool f) : width{ w } , height{ h } , Shape{ c, f } {
}

double Rectangle::getWidth() const { return width; }
void Rectangle::setWidth(double w) { width = w; }
double Rectangle::getHeight() const { return height; }
void Rectangle::setHeight(double h) { height = h; }

double Rectangle::getArea() const {
  return width * height;
}

string Rectangle::toString() {
  return ("Rectangle: width " + std::to_string(width) + ", "
          + "height " + std::to_string(height) + ", "
          + colorToString() + " " + filledToString());
}