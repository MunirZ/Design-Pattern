#pragma once

#include "weather_data.hpp"

#include <memory>

class WeatherForecastDisplay : public Observer {
public:
  explicit WeatherForecastDisplay(WeatherData &weather);
  void update() override;

private:
  WeatherData& weather_data_;
};