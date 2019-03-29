#include <iostream>
#include <array>
using std::cout;
using std::endl;
void swap(int* a , int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void swap(int& a , int& b) {
  int t = a;
  a = b;
  b = t;
}
int main() {

  //pointer:  address
  int x{ 8 } , y{ 43 };
  int& r = x;
  r = 9; // x =9

  swap(x ,y);
  return 0;
}