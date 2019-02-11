#include <iostream>
int main() {
    //char* s1 = new char(97.f);
    //std::cout << s1 << std::endl;

    char* s2 = new char{ 97 };
    std::cout << s2 << std::endl;

    auto  s3 = new char{ 'a' };
    std::cout << s3 << std::endl;

    using UInt = unsigned int;
    UInt x = 42u;

    std::cout << static_cast<double>(1) / 2 << std::endl;
    std::cout << static_cast<double>(1 / 2) << std::endl;
    // 列表初始化不允许窄化

    int a[] = { 2,1,4,3,5 };
    for (auto i : a) {
        std::cout << i << std::endl;
    }
    for (auto& i : a) {
        i = 2 * i;
    }

    // 强制类型转换：int->double; double->int
    std::cin.get();
    return 0;
