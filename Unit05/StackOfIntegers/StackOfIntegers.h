#pragma once
// »ŒŒÒ1£∫±‡–¥StackOfIntegers¿‡
/**
-elements: int[100]
-size: int
+StackOfIntegers()
+empty(): bool
+peek(): int
+push(value: int): int
+pop(): int
+getSize(): int
 */
class StackOfIntegers {
private:
  int elements[ 100 ];
  int size{ 0 };
public:
  bool empty();
  int peek();
  int push(int value);
  int pop();
  int getSize();
  StackOfIntegers();
};