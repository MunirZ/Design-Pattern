#include "current_weather_display.hpp"

#include <iostream>

CurrentWeatherDisplay::CurrentWeatherDisplay(const std::shared_ptr<WeatherData> weather)
  : weather_data_(weather) {
  weather_data_->register_observer(shared_from_this());
}

void CurrentWeatherDisplay::update() {
  std::cout << "Current Weather Conditions: "
	          << "\nTemperature: " << weather_data_->get_temperature() << "C, "
            << "\nHumidity: " << weather_data_->get_humidity() << "%"
	          << "\nPressure: " << weather_data_->get_air_pressure() << "hPa\n";
}