#pragma once
template <typename T>
class Stack {
private:
  T elements[ 100 ];
  int size{ 0 };
public:
  bool empty();
  T peek();
  T push(T value);
  T pop();
  int getSize();
  Stack();
};

template <typename T>
Stack<T>::Stack() {
  size = 0;
  for (auto &i : elements) {
    i = 0;
  }
}
template <typename T>
bool Stack<T>::empty() {
  return (size == 0 ? true : false);
}
template <typename T>
int Stack<T>::getSize() {
  return size;
}
template <typename T>
T Stack<T>::peek() {
  return elements[ size - 1 ];
}
template <typename T>
T Stack<T>::pop() {
  T temp = elements[ size - 1 ];
  elements[ size - 1 ] = 0;
  size--;
  return temp;
}
template <typename T>
T Stack<T>::push(T value) {
  elements[ size ] = value;
  size++;
  return value;
}