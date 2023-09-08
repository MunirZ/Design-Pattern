#pragma once 

#include "weather_data.hpp"

#include <memory>

class WeatherStatisticsDisplay : public Observer {
public:
  explicit WeatherStatisticsDisplay(WeatherData& weather);
  void update() override;

private:
  WeatherData& weather_data_;
};