#include <iostream>
//using namespace std;
using std::cout;
using std::endl;
void f();
int main() {
    f();
    return 0;
}
namespace MyAloha {
    int main() {
        cout << "Aloha, World!" << endl;

        std::cin.get();
        return 0;
    }
}
void f() {
    /* Variable initialization */
    // Direct list initialization (直接列表初始化)
    int x{}; // x is 0;
    int y{ 1 }; // y is 1;

    // Copy list initialization (拷贝列表初始化)
    int z = { 2 };

    /* Array initialization */
    int array1[]{ 1,2,3 };
    int array2[] = { 4,5,6 };


    char s1[ 3 ] { 'o', 'k' };
    char s2[] = { 'y','e','s' };
    char s3[]{ "Hello" };
    char s4[] = { "World" };
    char s5[] = "Aloha"; // Omit curly braces (省略花括号)
    std::cin.get();
}