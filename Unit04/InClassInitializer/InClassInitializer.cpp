// InClassInitializer/InClassInitializer.cpp  Author: cyd
#include <iostream>
class X {
  int a = 1;
  int b = { 2};
  int c {3 };

  std::string s {'H', 'e', 'l' };
  std::string s2{"Hello"};
  std::string s3 = "World";

  int arr1 [3] = {1,2,3};
  int arr2 [4] {1};
  double arr3[5] {12.0, 32.0};
  //auto arr4[] {1,2};
};
int main () {

  return (0);
}



