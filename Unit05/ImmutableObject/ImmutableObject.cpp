import module1;
import module2;

import <iostream>;

int Employee::numberOfObjects = 0;
// 任务4：在堆和栈（函数作用域与内嵌作用域）上分别创建Employee对象，观察析构函数的行为
int main() {
    Employee e1;
    std::cout << e1.toString() << std::endl;
    Employee* e2 = new Employee{ "John", Gender::male, Date(1990, 3, 2) };
    std::cout << e2->toString() << std::endl;

    {
        Employee e3{ "Alice", Gender::female, {1989,2, 14} };
        std::cout << e3.toString() << std::endl;
    }
    delete e2;
    std::cin.get();
    return (0);
}
