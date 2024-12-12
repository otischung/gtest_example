#include "fizz.hpp"
#include <iostream>
#include <string>
#include <gtest/gtest.h>

TEST(testCase, test1) {
    EXPECT_EQ(fizz(1), "1 ");
    EXPECT_EQ(fizz(2), "1 2 ");
    EXPECT_EQ(fizz(3), "1 2 Fizz ");
    EXPECT_EQ(fizz(20), "1 2 Fizz 4 Buzz Fizz Dizz 8 Fizz Buzz 11 Fizz 13 Dizz Fizz Buzz 16 17 Fizz 19 Buzz ");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
