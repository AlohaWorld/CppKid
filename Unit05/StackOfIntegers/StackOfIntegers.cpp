import <iostream>;
import <cassert>;

import module1;

StackOfIntegers::StackOfIntegers() {
    size = 0;
    for (int& i : elements) {
        i = 0;
    }
}

bool StackOfIntegers::empty() {
    return (size == 0 ? true : false);
}

int StackOfIntegers::getSize() {
    return size;
}

int StackOfIntegers::peek() {
    return elements[size - 1];
}

int StackOfIntegers::pop() {
    int temp = elements[size - 1];
    elements[size - 1] = 0;
    size--;
    return temp;
}

int StackOfIntegers::push(int value) {
    elements[size] = value;
    size++;
    return value;
}
