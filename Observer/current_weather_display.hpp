#pragma once

#include "weather_data.hpp"

#include <memory>

class CurrentWeatherDisplay : public Observer {
public:
  explicit CurrentWeatherDisplay(WeatherData& weather);
  void update() override;

private:
  WeatherData& weather_data_;
};
