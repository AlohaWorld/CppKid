import module1;
import module2;

import <iostream>;
import <string>;

// 任务1：构造Employee对象e1，拷贝构造e2
// 任务2：调试模式观察e1和e2的birthday成员
// 任务3：添加拷贝构造函数实现深拷贝
// 任务4：调试模式观察e1和e2的birthday成员

int Employee::numberOfObjects = 0;

int main() {
	Employee e1{ "Alex",Gender::male,{1998, 5,1} };
	Employee e2{ e1 };
	std::cout << e1.toString() << std::endl;
	std::cout << e2.toString() << std::endl;

	Employee e3{};
	std::cout << e3.toString() << std::endl;
	std::cout << (e3 = e1).toString() << std::endl;;

	std::cin.get();
	return (0);
}
