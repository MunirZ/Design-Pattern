#include "weather_data.hpp"

void WeatherData::register_observer(const std::shared_ptr<Observer> observer) {
  observers_.push_back(observer);
}

void WeatherData::remove_observer(const std::shared_ptr<Observer> observer) {
  //Delete form List
}

void WeatherData::measurements_changed() {
  notify_observers();
}

void WeatherData::notify_observers() {
  for (const auto& observer : observers_) {
    observer->update();
  }
}

void WeatherData::set_measurements(float temp, float humidity, float pressure) {
  temperature_ = temp;
  humidity_ = humidity;
  air_pressure_ = pressure;

  measurements_changed();
}

const float WeatherData::get_temperature() {
  return temperature_;
}

const float WeatherData::get_humidity() {
  return humidity_;
}

const float WeatherData::get_air_pressure() {
  return air_pressure_;
}