#ifndef MOBILES__STAR_HPP
#define MOBILES__STAR_HPP

#include "mobile_component.hpp"

class Star : public MobileComponent{
public:
  explicit Star(const double weight) : weight_(weight) {}

  double get_weight() override;
  void balance() override;

private:
  const double weight_;
};

#endif //MOBILES__STAR_HPP
