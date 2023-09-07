#include "weather_statistic_display.hpp"

#include <iostream>

WeatherStatisticsDisplay::WeatherStatisticsDisplay(const std::shared_ptr<WeatherData> weather)
  : weather_data_(weather) {
  weather_data_->register_observer(shared_from_this());
}

void WeatherStatisticsDisplay::update() {
  float min_temp = 0 /* Calculate min temperature */;
  float max_temp = 0 /* Calculate max temperature */;
  float avg_temp = 0 /* Calculate average temperature */;

  std::cout << "Weather Statistics: "
            << "\nMin Temp: " << min_temp << "°C, "
            << "\nMax Temp: " << max_temp << "°C, "
            << "\nAverage Temp: " << avg_temp << "°C\n";
}