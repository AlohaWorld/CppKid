import module1;
import module2;
import module3;
import <iostream>;
import <string>;
using std::cout;
using std::endl;

int main() {
	//Shape s{ Color::black, true };
	Circle c{ 1.2, Color::green, false };

	Shape* p = &c;
	cout << p->getArea() << endl;

	
}
