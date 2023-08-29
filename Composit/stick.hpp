#ifndef MOBILES__STICK_HPP
#define MOBILES__STICK_HPP

#include "mobile_component.hpp"

#include <vector>

struct Ends {
  MobileComponent* left_component;
  MobileComponent* right_component;
};

class Stick : public MobileComponent {
public:
  explicit Stick(const double length) : length_(length) {}

  void balance() override;
  void attack_end(Ends ends);
  double get_weight() override;
  double get_knot_position();
  double get_length();

private:
  const double length_;
  double knot_position_;
  Ends ends_;
};

#endif //MOBILES__STICK_HPP
