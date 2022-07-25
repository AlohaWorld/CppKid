import module2;
import <iostream>;
import <string>;

Circle::Circle() {
    radius = 1.0;
}

Circle::Circle(double radius_, Color color_, bool filled_) : Shape{ color_, filled_ } {
    radius = radius_;
}

double Circle::getArea() {
    return (3.14 * radius * radius);
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}

std::string Circle::toString() {
    return ("Circle: radius " + std::to_string(radius) + ", "
        + colorToString() + " " + filledToString());
}
