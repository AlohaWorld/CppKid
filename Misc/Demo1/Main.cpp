#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class MyClass {
public:
	MyClass(int a) {}
	~MyClass();
};

MyClass::MyClass(int x) {
}

MyClass::~MyClass() {
}
int main() {
	auto p{ new MyClass(10) };
	delete p;

	MyClass q(2);
}