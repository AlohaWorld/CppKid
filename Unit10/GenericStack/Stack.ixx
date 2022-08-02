export module module1;
export import <iostream>;
export import <string>;

export template <typename T>

class Stack {
private:
    T elements[100];
    int size{ 0 };
public:
    bool empty();
    T peek();
    T push(T value);
    T pop();
    int getSize();
    Stack();
};

export template <typename T>
Stack<T>::Stack() {
    size = 0;
    for (auto& i : elements) {
        i = 0;
    }
}
export template <typename T>
bool Stack<T>::empty() {
    return (size == 0 ? true : false);
}
export template <typename T>
int Stack<T>::getSize() {
    return size;
}
export template <typename T>
T Stack<T>::peek() {
    return elements[size - 1];
}
export template <typename T>
T Stack<T>::pop() {
    T temp = elements[size - 1];
    elements[size - 1] = 0;
    size--;
    return temp;
}
export template <typename T>
T Stack<T>::push(T value) {
    elements[size] = value;
    size++;
    return value;
}
