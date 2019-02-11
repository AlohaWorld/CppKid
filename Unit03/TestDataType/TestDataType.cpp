#include <iostream>
int main() {
    // 列表初始化不允许窄化
    int x{ 1 };
    std::cout << x << std::endl;

    // 强制类型转换：int->double; double->int
    std::cout << 1 / 2 << std::endl;
    std::cout << static_cast<double>(1) / 2 << std::endl;
    std::cout << static_cast<double>(1 / 2) << std::endl;

    std::cout << 1.0f / 2.f << std::endl;
    std::cin.get();
    return 0;
}