#pragma once

#include "observer.hpp"

#include <list>
#include <memory>

class WeatherData {
public:
  void register_observer(Observer *observer);
  void remove_observer(Observer* observer);
  void measurements_changed();
  void notify_observers();

  void set_measurements(float temp, float humidity, float pressure);

  float get_temperature();
  float get_humidity();
  float get_air_pressure();

  private:
  float temperature_ = 0;
  float humidity_ = 0;
  float air_pressure_ = 0;
  std::list<Observer*> observers_;
};