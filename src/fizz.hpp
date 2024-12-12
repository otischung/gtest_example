#pragma once
#include <iostream>
#include <map>
#include <string>

// Define the default rules
const std::map<int, std::string> DEFAULT_RULES = {
    {3, "Fizz"},
    {5, "Buzz"},
    {7, "Dizz"}};

// Function declaration with default parameter
std::string fizz(int number, const std::map<int, std::string>& rules = DEFAULT_RULES);
