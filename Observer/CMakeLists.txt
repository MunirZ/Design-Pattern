cmake_minimum_required(VERSION 3.26)
project(weather_station)

set(CMAKE_CXX_STANDARD 20)

add_executable(weather_station
        main.cpp
        observer.hpp
        weather_data.hpp
        weather_data.cpp
        current_weather_display.hpp
        current_weather_display.cpp
        weather_statistic_display.hpp
        weather_statistic_display.cpp
        weather_forecast_display.hpp
        weather_forecast_display.cpp
)