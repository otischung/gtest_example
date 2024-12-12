#include <iostream>
#include <string>

std::string fizz(int terminal) {
    std::string ret = "";
    for (int i = 1; i <= terminal; ++i) {
        if (i % 3 && i % 5 && i % 7) {
            // std::cout << i << ' ';
            ret += std::to_string(i);
            ret += ' ';
        } else {
            if (i % 3 == 0) {
                // std::cout << "Fizz ";
                ret += "Fizz ";
            }
            if (i % 5 == 0) {
                // std::cout << "Buzz ";
                ret += "Buzz ";
            }
            if (i % 7 == 0) {
                // std::cout << "Dizz ";
                ret += "Dizz ";
            }
        }
    }
    return ret;
}