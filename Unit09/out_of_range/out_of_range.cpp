#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {
  std::vector v{ 'a','b','c','d','e' }; // v.size() 5
  try {
    for (int i = 0; i <= 5; i++) {
      cout << v[ i ];
      cout << v.at(i) << endl;
    }
  } catch (std::out_of_range & e) {
    cout << "Exception: " << e.what() << endl;
  }
}