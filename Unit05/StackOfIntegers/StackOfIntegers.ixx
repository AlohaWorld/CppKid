import <iostream>;
import <cassert>;

export module module1;
export class StackOfIntegers;

class StackOfIntegers {
private:
	int elements[100];
	int size{ 0 };
public:
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();
	StackOfIntegers();
};
