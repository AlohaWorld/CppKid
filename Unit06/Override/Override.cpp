class A {
public:
  virtual void foo() {}
  void bar() {}
};

class B : public A {
  //void foo() const override { // ´íÎó£º B::foo ²»¸²Ð´ A::foo
  //}                           // £¨Ç©Ãû²»Æ¥Åä£©
  void foo() override; // OK £º B::foo ¸²Ð´ A::foo
  //void bar() override {} // ´íÎó£º A::bar ·ÇÐé
};

void B::foo() override {
}