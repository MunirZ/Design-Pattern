cmake_minimum_required(VERSION 3.26)
project(gumball_machine)

set(CMAKE_CXX_STANDARD 20)

add_executable(sorting_algorithm
        main.cpp
        gumball_machine.hpp
        gumball_machine.cpp
        gumball_states.hpp
)