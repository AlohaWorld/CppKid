import <iostream>;
import <string>;
import module1;

using std::string;
using namespace std::string_literals;

export module module2;
export class Circle;

class Circle : public Shape {
	double radius;

public:
	Circle();
	Circle(double radius_, Color color_, bool filled_);

	virtual double getArea() override;
	double getRadius() const;
	void setRadius(double radius);

	string toString();
};
