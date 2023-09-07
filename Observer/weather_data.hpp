#pragma once

#include "observer.hpp"

#include <vector>
#include <memory>

class WeatherData {
public:
  void register_observer(const std::shared_ptr<Observer> observer);
  void remove_observer(const std::shared_ptr<Observer> observer);
  void measurements_changed();
  void notify_observers();

  void set_measurements(float temp, float humidity, float pressure);

  const float get_temperature();
  const float get_humidity();
  const float get_air_pressure();

  private:
  float temperature_ = 0;
  float humidity_ = 0;
  float air_pressure_ = 0;
  std::vector<std::shared_ptr<Observer>> observers_;
};