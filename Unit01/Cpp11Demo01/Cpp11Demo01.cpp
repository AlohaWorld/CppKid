#include <iostream>
#include <vector>
#include <utility>
#include <ctime>
#include <array>
    int main() {
        using IntArray = std::array<int , 10>;
        IntArray a{ 0 };
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        for (auto& var : a) {
            var = std::rand();
            std::cout << var << std::endl;
        }
        {   // Pause the console windows when program terminates
            std::streamsize bufSize = std::cin.rdbuf()->in_avail();
            if (bufSize >= 1) {
                // extract and discard 1 character (CR) that remain in the input buffer
                std::cin.ignore(bufSize);
            }
            std::cout << std::endl << "Press any key to exit.";
            std::cin.get();    // wait until the user hit the keyboard

            return 0;
        }
    }