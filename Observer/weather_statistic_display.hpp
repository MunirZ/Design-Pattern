#pragma once 

#include "weather_data.hpp"

#include <memory>

class WeatherStatisticsDisplay : public Observer, public std::enable_shared_from_this<WeatherStatisticsDisplay> {
public:
  WeatherStatisticsDisplay(const std::shared_ptr<WeatherData> weather);
  void update() override;

private:
  std::shared_ptr<WeatherData> weather_data_;
};