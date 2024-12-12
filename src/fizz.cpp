#include "fizz.hpp"

#include <iostream>
#include <map>
#include <string>

std::string fizz(int number, const std::map<int, std::string>& rules) {
    std::string result;

    for (int i = 1; i <= number; ++i) {
        std::string current;

        // Apply each rule to the current number
        for (const auto& [divisor, word] : rules) {
            if (i % divisor == 0) {
                current += word + ' ';
            }
        }

        // If no rules matched, use the number itself
        if (current.empty()) {
            current = std::to_string(i) + ' ';
        }

        // Append the current result and a space
        result += current;
    }

    return result;
}
