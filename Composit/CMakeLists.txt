cmake_minimum_required(VERSION 3.5)
project(mobiles)

set(CMAKE_CXX_STANDARD 20)

add_executable(mobiles
        main.cpp
        stick.hpp
        stick.cpp
        mobile_component.hpp
        star.cpp
        star.hpp
)
