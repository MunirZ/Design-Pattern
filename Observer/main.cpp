#include "weather_forecast_display.hpp"
#include "weather_statistic_display.hpp"
#include "current_weather_display.hpp"
#include <memory>

int main() {
  WeatherData weather_data;
  auto current_display = std::make_unique<CurrentWeatherDisplay>(weather_data);

  // Simulate changes in weather data
  weather_data.set_measurements(25.0f, 60.0f, 1013.0f);
  weather_data.set_measurements(28.0f, 55.0f, 1010.0f);

    return 0;
}