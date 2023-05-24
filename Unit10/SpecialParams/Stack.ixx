export import <iomanip>;
export import <iostream>;
export import <string>;

export module Stack;
export template <typename T = char, int N = 100>
class Stack {
private:
    T elements[N];
    int size{ 0 };
public:
    bool empty();
    T peek();
    T push(T value);
    T pop();
    int getSize();
    Stack();
};

export template <typename T, int N>
Stack<T, N>::Stack() {
    size = 0;
    for (auto& i : elements) {
        i = 0;
    }
}
export template <typename T, int N>
bool Stack<T, N>::empty() {
    return (size == 0 ? true : false);
}
export template <typename T, int N>
int Stack<T, N>::getSize() {
    return size;
}
export template <typename T, int N>
T Stack<T, N>::peek() {
    return elements[size - 1];
}
export template <typename T, int N>
T Stack<T, N>::pop() {
    T temp = elements[size - 1];
    elements[size - 1] = 0;
    size--;
    return temp;
}
export template <typename T, int N>
T Stack<T, N>::push(T value) {
    elements[size] = value;
    size++;
    return value;
}
