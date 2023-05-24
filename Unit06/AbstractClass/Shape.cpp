import module1;
import <iostream>;
import <string>;

using std::string;
using namespace std::string_literals;

Shape::Shape(Color color_, bool filled_) {
	color = color_;
	filled = filled_;
}

Color Shape::getColor() { return color; }
void Shape::setColor(Color color_) { color = color_; }
bool Shape::isFilled() { return filled; }
void Shape::setFilled(bool filled_) { filled = filled_; }

string Shape::toString() {
	return "Shape: " + colorToString() + " " + filledToString();
}

string Shape::colorToString() {
	return colorNames[static_cast<int>(color)];
}

string Shape::filledToString() {
	return (filled ? "filled"s : "not filled"s);
}
