import module1;
import <iostream>;

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
};
