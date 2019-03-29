class B {
public:
  void f() {}
};

class D :public B {
public:
  using B::f();
  void f(int x) {}
};

int main() {
  D d;
  d.f();
}