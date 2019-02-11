#include <iostream>
auto max2 (int x = 0, int y = 0) {
	return x > y ? x : y;
}
int main() {
	int x = 3, y = 4;
	auto max = [](int x, int y) {
		return x > y ? x : y;
	};
	auto z = max(x, y);
	cout << z;

	return 0;
}
