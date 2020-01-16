// ExplicitInstantiate.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
template<typename T>
void f(T s) {
	std::cout << s << '\n';
}
template void f<double>(double);
template void f<>(char);
template void f(int);
template void f<float>(long);
int main() {
	f<double>(1); // 实例化并调用 f<double>(double)
	f<>('a'); // 实例化并调用 f<char>(char)
	f(7); // 实例化并调用 f<int>(int)
	void (*ptr)(std::string) = f; // 实例化 f<string>(string)
}