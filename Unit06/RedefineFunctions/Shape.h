#pragma once
#include <iostream>
#include <string>
#include <array>
using std::string;
using namespace std::string_literals;
enum class Color {
  white , black , red , green , blue , yellow ,
};

class Shape {
private:
  Color color{ Color::black };
  bool filled{ false };
  std::array<string , 6> colorNames{ "white"s, "black"s, "red"s, "green", "blue"s, "yellow"s, };

public:
  Shape() = default;
  Shape(Color color_ , bool filled_);

  Color getColor();
  void setColor(Color color_);
  bool isFilled();
  void setFilled(bool filled_);

  string toString();
  string colorToString();
  string filledToString();
};