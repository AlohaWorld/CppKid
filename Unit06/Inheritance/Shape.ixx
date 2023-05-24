import <iostream>;
import <string>;
import <array>;

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
public:
    Shape() = default;
    Shape(Color color_, bool filled_) {
        color = color_;
        filled = filled_;
    }

    Color getColor() { return color; }
    void setColor(Color color_) { color = color_; }
    bool isFilled() { return filled; }
    void setFilled(bool filled_) { filled = filled_; }

    string toString() {
        std::array<string, 6> c{ "white"s, "black"s, "red"s, "green", "blue"s, "yellow"s, };
        return "Shape: " + c[static_cast<int>(color)] + " " + (filled ? "filled"s : "not filled"s);
    }
};
