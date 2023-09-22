cmake_minimum_required(VERSION 3.26)
project(sorting_algorithm)

set(CMAKE_CXX_STANDARD 20)

add_executable(sorting_algorithm
        main.cpp
        sort_context.hpp
        sort_context.cpp
        sort_strategy.hpp
        bubble_sort.cpp
        bubble_sort.hpp
)