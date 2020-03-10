set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
cmake_minimum_required(VERSION 3.10)

project(HardcoreDP)

file(GLOB SOURCES
    inc/*.hpp
    src/*.cpp
)

add_executable(HardcoreDP ${SOURCES})
target_link_libraries(HardcoreDP tbb pthread)
target_include_directories(HardcoreDP PRIVATE inc/)
target_compile_options(HardcoreDP PRIVATE -Wall -Werror -Wpedantic -Wextra -fopenmp)
