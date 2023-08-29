#include "stick.hpp"

void Stick::balance() {
  double left_weight = ends_.left_component->get_weight();
  double right_weight = ends_.right_component->get_weight();

  // left_weight * distance_left = right_weight * distance_right

  knot_position_ = (right_weight * length_) / (left_weight + right_weight);

  ends_.right_component->balance();
  ends_.left_component->balance();
}

void Stick::attack_end(Ends ends) {
  ends_ = ends;
}

double Stick::get_weight() {
  double total_weight = 0;
  total_weight += ends_.right_component->get_weight();
  total_weight += ends_.left_component->get_weight();
  return total_weight;
}

double Stick::get_knot_position() {
  return knot_position_;
}
double Stick::get_length() {
  return length_;
}
