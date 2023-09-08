#include "weather_forecast_display.hpp"

#include <iostream>

WeatherForecastDisplay::WeatherForecastDisplay(WeatherData& weather)
  : weather_data_(weather) {
  weather_data_.register_observer(this);;
}

void WeatherForecastDisplay::update() {
  float old_pressure = 0 /* Retrieve the old air pressure */;
  float new_pressure = weather_data_.get_air_pressure();

  if (new_pressure > old_pressure) {
     std::cout << "Weather Forecast: Weather is improving.\n";
  } else if (new_pressure < old_pressure) {
     std::cout << "Weather Forecast: Weather is deteriorating.\n";
  } else {
     std::cout << "Weather Forecast: Weather remains the same.\n";
  }
}