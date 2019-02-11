#include <iostream>
int main() {
    int* p = nullptr;
    int* q{ nullptr }; // C++11 Initializer List

    p = new int(42);
    q = new int[ 4 ];

    std::cout << "Before: *p =" << *p << std::endl;
    *p = 24;
    std::cout << "After: *p =" << *p << std::endl;

    for (int i = 0; i < 4; i++) {
        *(q + i) = 10 + i;
        std::cout << *(q+i) << std::endl;
    }

    delete p;
    delete [] q;

    std::cin.get();
    return 0;
}