#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <vector>
#include <chrono>
#include <cassert>
#include <bitset>
int main() {
  int a;
  scanf_s("%f", &a);
  std::cout << std::bitset<sizeof(int) * 8>(a) << std::endl;
  std::cout << a << " hex: " << std::hex << a << std::endl;
}

#if 0
using namespace std::string_literals;
#include "Helper.h"

class B {
private:
  /** @brief     Zero-based index of the */
  int i{ 0 };
public:
  B() = default;
};

int main() {
  fstream fs("out.txt", ios::binary | ios::trunc);
  char s[] = "Hello\nWorld";
  fs.write(s, sizeof(s));

  xxx_stream & seekg(pos_type pos);
  xxx_stream & seekg(off_type off, std::ios_base::seekdir dir);

  long int x{ 0 };
  int a[ 3 ]{ 21,42,63 };
  std::string str{ "Hello" };
  char *p1 = reinterpret_cast<char *>(&x);  // variable address
  char *p2 = reinterpret_cast<char *>(a);  // array address
  char *p3 = reinterpret_cast<char *>(&str);  // object address
  streamObject.read(char *address, int size)

    bool x[ 5 ]{ false, true };

  for (auto &i : x) {
    std::cout << std::boolalpha << i << " ";
  }

  std::string s{ R"(Hello
World)" };

  char q1, q2;
  std::cin >> q1;
  q2 = std::cin.get();
  std::cout << "q2 as char:" << q2 << " over" << std::endl;
  std::cout << "q2 as int :" << static_cast<int>(q2) << " over" << std::endl;

  B b1;
  auto b2{ new B{} };
  std::cout << typeid(B).name() << std::endl;
  std::cout << typeid(B{}).name() << std::endl;
  std::cout << typeid(b1).name() << std::endl;
  std::cout << typeid(b2).name() << std::endl;
  std::cout << typeid("Hello"s).name() << std::endl;
  std::cout << typeid(std::array{ 1 , 2 , 3 }).name() << std::endl;
#include <typeinfo>

  class A {};
  A a{};
  auto &t1 = typeid(a);
  if (typeid(A) == t1) {
    std::cout << "a has type " << t1.name() << std::endl;
  }
  auto &ti1 = typeid(A);
  auto &ti2 = typeid(A);

  std::cout << ti1.name() << std::endl;

  assert(typeid(ti1) == typeid(ti2));
  assert(&ti1 == &ti2); // 不保证
  assert(std::string(ti1.name()) == std::string(ti2.name())); // 不保证
  assert(ti1.hash_code() == ti2.hash_code()); // 保证

  ifstream input("name.txt");
  std::string name;
  input >> name;

  stream.open("city.txt", ios::out | ios::app);

  std::cin.get();
}

#endif

#if 0

int main() {
  std::string s{ "Hello" };
  std::vector<char> v(s.begin(), s.end());
  PRINT(v);
  auto s2 = "Hello"s;
  std::vector v2(s2.begin(), s2.end());
  PRINT(v2);
  std::cout << R"Hello("Hello")Hello";

  std::cin.get();
}
#include "date.h"
static_assert(sizeof(int) == 4, "Compile this program under 64-bit mode");
using namespace date;
class Date {
private:
  date::year_month_day date = 2000_y / January / 1; //{2000,1,1};
public:
  Date() = default;
  Date(date::year_month_day date) {
    this->date = date;
  }
  friend class Daddy;
  friend void modifyBirthYear(date::year year);
};

class Daddy {
  Date birthdate;
public:
  Daddy() { birthdate.date = 1970_y / April / 1; }
};

Date nationalDay{ 2019_y / 10 / 1 };
void modifyBirthYear(date::year year) {
  nationalDay.date -= date::years(70);
}
#endif

#if 0
int main() {
  std::array<char, 12> a{ "Hello 1024!" };
  std::string s{};
  std::for_each(a.begin(), a.end(), [&](decltype(a[ 0 ]) & x) {if (!std::isalpha(x)) s += x; });

  if (std::all_of(s.begin(), s.end(), isalpha))
    std::cout << "All elements are character" << std::endl;

  if (std::none_of(s.begin(), s.end(), isalpha))
    std::cout << "None of the elements is even" << std::endl;

  for (auto x : s)
    std::cout << x;

  int n{ 1 }, m{ 0 };
  do {
    std::cin >> n;
  } while (n == 0);
  assert((n != 0) && "Divisor cannot be zero!");
  int q = m / n;
}
#endif

#if 0
int x = 0;
struct S {
  int n = ++x;
  S() {}                 // uses default member initializer
  S(int arg) : n(arg) { std::cout << arg << "\n"; } // uses member initializer list
};

int main() {
  std::cout << x << '\n'; // prints 0
  S s10;
  std::cout << x << '\n'; // prints 1 (default initializer ran)
  S s20(7);
  std::cout << x << '\n'; // prints 1 (default initializer did not run)
  S s22{};

  S sa[] = { S{8}, S{} };
  S sb[] = { 8, {}, 7 };
  S *ps = new S[ 2 ]{ 42, 42 };
  std::cout << x << '\n'; // prints 1 (default initializer did not run)
  delete[] ps;

  using namespace std::string_literals;

  std::string s1 = "abc\0\0def";
  std::string s2 = "abc\0\0def"s;
  std::cout << "s1: " << s1.size() << " \"" << s1 << "\"\n";
  std::cout << "s2: " << s2.size() << " \"" << s2 << "\"\n";

  char array1[] = "Foo" "bar";
  //
  char array2[] = { 'F', 'o', 'o', 'b', 'a', 'r', '\0' };

  const char *ps1 = R"foo(
Hello
World
)foo";
  //
  const char *ps2 = "\nHello\nWorld\n";

  std::cout << array1 << '\n';
  std::cout << array2 << '\n';

  std::cout << ps1;
  std::cout << ps2;

  std::array<int, 10> x;
  std::array<char, 5> c{ 'H','e','l','l','o' };

  //system("CHCP 65001");
  std::cout << "你好，世界" << std::endl;
  //std::wcout << L"(你好，世界)" << std::endl;

  auto ix{ 0 };

  ix++;

  std::cin >> ix;

  ix++;

  std::cout << ix;

  std::cin.get();
}
#endif