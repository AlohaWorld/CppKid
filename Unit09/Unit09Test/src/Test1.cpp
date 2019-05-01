// Unit09Test/Test1.cpp  Author: cyd

#include <exception>
#include <stdexcept>
#include <iostream>
using namespace std;

class MyException: public logic_error {
};

int main() {
  try {
    throw MyException(); // 抛出派生异常对象
  } catch (logic_error& e) {
    MyException* p = dynamic_cast<MyException*>(&e);
    if (p != nullptr)
      cout << p->what() << endl;
    else
      cout << e.what() << endl;
  }
}

//用异常处理
int quotient(int number1, int number2) {
  if (number2 == 0)
    throw number1;
  return number1 / number2;
}



int main() {
  try {
    quotient(1, 0);
  } catch (int) {
    std::cout << "除数为0！";
  }
}

void may_throw();
void no_throw() noexcept;
int main() {
  std::cout << std::boolalpha << "Is may_throw() noexcept? "
            << noexcept (may_throw()) << '\n' << "Is no_throw() noexcept? "
            << noexcept (no_throw()) << '\n';
}
