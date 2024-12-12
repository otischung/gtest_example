#include <iostream>
#include <string>
#include "fizz.hpp"

int main(int argc, char **argv) {
    int end;
    if (argc == 2) {
        end = std::stoi(argv[1]);
    } else {
        end = 100;
    }
    std::cout << fizz(end) << std::endl;
    return EXIT_SUCCESS;
}
