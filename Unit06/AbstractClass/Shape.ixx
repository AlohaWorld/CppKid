import <iostream>;
import <string>;

using std::string;
using namespace std::string_literals;

export module module1;
export class Shape;
export enum class Color;

enum class Color {
	white, black, red, green, blue, yellow,
};

class Shape {
private:
	Color color{ Color::black };
	bool filled{ false };
	std::string colorNames[6]{"white", "black", "red", "green", "blue", "yellow"};

public:
	Shape() = default;
	Shape(Color color_, bool filled_);

	Color getColor();
	void setColor(Color color_);
	bool isFilled();
	void setFilled(bool filled_);

	string toString();
	string colorToString();
	string filledToString();

	virtual double getArea() = 0;
};
