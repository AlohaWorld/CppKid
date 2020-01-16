class A {
public:
  A(int a = 0) { x = a; }
  static void f1() { y++; };
private:
  int x;
  static int y;
};

int main() {
  A::f1();
  return 0;
}