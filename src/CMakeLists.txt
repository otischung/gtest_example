# Library target for fizz.cpp
add_library(fizz_lib
    fizz.cpp
)

# Main executable
add_executable(main
    main.cpp
)

# Link fizz_lib to the main executable
target_link_libraries(main fizz_lib)
