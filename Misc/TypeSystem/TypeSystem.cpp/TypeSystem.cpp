// C++ 11 is required
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";

    cout << s1 << endl;

    int count = 3;
    //cout << s1 + count << endl;
    /* C++ 03
     stringstream ss;
     ss << count;
     string c = ss.str();
     cout << s1 + c << endl;
     */

    // C++11: for ( range_declaration : range_expression )
    // C++11: std::to_string()
    int arr[] = { 1, 2, 3 };
    for (const int& i : arr) {
        cout << s1 + " " + s2 + std::to_string(i) << endl;
    }

    {   
        std::streamsize bufSize = std::cin.rdbuf()->in_avail();
        if(bufSize >= 1) {
            std::cin.ignore(bufSize); // extract and discard 1 character (CR) that remain in the input buffer
        }
        std::cout<<std::endl<<"Press any key to exit.";
        std::cin.get();    // wait until the user hit the keyboard
    }
    return 0;
}