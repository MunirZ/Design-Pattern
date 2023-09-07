#pragma once

#include "weather_data.hpp"

#include <memory>

class CurrentWeatherDisplay : public Observer, public std::enable_shared_from_this<CurrentWeatherDisplay> {
public:
  CurrentWeatherDisplay(const std::shared_ptr<WeatherData> weather);
  void update() override;

private:
  std::shared_ptr<WeatherData> weather_data_;
};
