//============================================================================
// Name        : Unit09Test.cpp
// Author      : cyd
// Version     :
// Copyright   : CC-BY
// Description : Hello World in C++, Ansi-style
//============================================================================
#if 0
#include <stdexcept>
using namespace std;

class EA: public exception {
};
class EB: public exception {
};
class C {
public:
  void foo(int x) {
    if (x == 1)
      throw EA();
    else if (x == 2)
      throw EB();
  }
};
int main() {
  C c { };
  try {
    c.foo(1);
    c.foo(2);
  } catch (EA& a) {
    cout << a.what() << endl;
  } catch (EB& b) {
    cout << b.what() << endl;
  }
}
#endif
