# Enable testing
enable_testing()

# Find Google Test (if installed in system paths)
find_package(GTest REQUIRED)

# Add test executable
add_executable(test
    test.cpp
)

# Link test executable with Google Test and fizz_lib
target_link_libraries(test
    GTest::GTest
    GTest::Main
    fizz_lib
    pthread
)

# Add a test to the CTest framework
add_test(NAME FizzTests COMMAND test)
