#include <iostream>
int main() {
    int x = 0;
    int y{ 10 };
    int& rx = x;
    rx = 8;

    const char* s = "Hello";
    const char* t = "World";

    const char*& r = s;
    r = t; // s = t;
    std::cout << r << std::endl;
    std::cout << s << std::endl;

    std::cin.get();
    return 0;
}