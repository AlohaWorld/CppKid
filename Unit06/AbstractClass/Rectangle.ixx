import <iostream>;
import <string>;
import module1;

using std::string;
using namespace std::string_literals;

export module module3;
export class Rectangle;

class Rectangle : public Shape {
private:
	double width{ 1.0 };
	double height{ 1.0 };
public:
	Rectangle() = default;
	Rectangle(double w, double h, Color c, bool f);

	double getWidth() const;
	void setWidth(double w);
	double getHeight() const;
	void setHeight(double h);

	double getArea() const;

	string toString();
};
