#ifndef MOBILES_CMAKE_BUILD_DEBUG_MOBILE_COMPONENT_HPP
#define MOBILES_CMAKE_BUILD_DEBUG_MOBILE_COMPONENT_HPP

class MobileComponent {
public:
  virtual ~MobileComponent() {}
  virtual double get_weight() = 0;
  virtual void balance() = 0;
};

#endif //MOBILES_CMAKE_BUILD_DEBUG_MOBILE_COMPONENT_HPP
