#pragma once

#include "weather_data.hpp"

#include <memory>

class WeatherForecastDisplay : public Observer, public std::enable_shared_from_this<WeatherForecastDisplay> {
public:
  WeatherForecastDisplay(const std::shared_ptr<WeatherData> weather);
  void update() override;

private:
  std::shared_ptr<WeatherData> weather_data_;
};