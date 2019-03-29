#include <iostream>
using namespace std;

// auto function is supported in c++14
auto max(auto x = 0, auto y = 1) {
    return (x>y?x:y) ;
}
int main() {

    auto a = 3, b = 4;

    int arr[] = {1,2,3};
    //auto arr[] = {1,2,3};

    for(auto i : arr) {
        cout << i << ": max(" << a << ", " << b << ") is: "
                << max(a, b) << endl;
    }

    cin.ignore(1);
    cin.get();
	return 0;
}
