#include "weather_forecast_display.hpp"
#include "weather_statistic_display.hpp"
#include "current_weather_display.hpp"
#include <memory>

int main() {
    // Create WeatherData and display elements
    auto weather_station = std::make_shared<WeatherData>();
    auto current_display = std::make_unique<CurrentWeatherDisplay>(weather_station);

    // Simulate changes in weather data
    weather_station->set_measurements(25.0f, 60.0f, 1013.0f);
    weather_station->set_measurements(28.0f, 55.0f, 1010.0f);

    return 0;
}