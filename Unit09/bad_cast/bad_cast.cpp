#include <iostream>
#include <exception>
#include <stdexcept>
using std::cout;
using std::endl;
class Student {
public:
  Student() = default;
  virtual void foo() {};
};
class Undergraduate : public Student {};
class Graduate : public Student {};

int main() {
  Undergraduate u;
  Graduate g;
  Student *s1 = &u;
  Student *s2 = &g;
  Graduate *p = dynamic_cast<Graduate *>(s2);
  long x = reinterpret_cast<long>(p);
  cout << x << endl;
  Graduate *p2 = dynamic_cast<Graduate *> (s1);
  if (p2 == nullptr) {
    cout << "cast s1 to Graduate* failed" << endl;
  } else {
    cout << "cast s1 to Graduate* succeeded" << endl;
  }
  try {
    Graduate &r1 = dynamic_cast<Graduate &> (u);
  } catch (std::bad_cast & e) {
    cout << "Exception: " << e.what() << endl;
  }
}