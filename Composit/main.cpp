#include "mobile_component.hpp"
#include "star.hpp"
#include "stick.hpp"

#include <iostream>

int main() {
  Star star_1 = Star(9);
  Star star_2 = Star(4);
  Star star_3 = Star(2);

  Stick stick_1 = Stick(10);
  Stick stick_2 = Stick(9);

  Ends end_1;
  end_1.left_component = &stick_2;
  end_1.right_component = &star_1;
  stick_1.attack_end(end_1);

  Ends end_2;
  end_2.left_component = &star_3;
  end_2.right_component = &star_2;
  stick_2.attack_end(end_2);

  stick_1.balance();
  std::cout << "\nMobile 1:\nGewicht: " << stick_1.get_weight() <<
            "\n( " << stick_1.get_knot_position() << " | " << stick_1.get_length() - stick_1.get_knot_position() << " ) "
            << "\n\nMobile 2:\nGewicht: " << stick_2.get_weight() <<
            "\n( " << stick_2.get_knot_position() << " | " << stick_2.get_length() - stick_2.get_knot_position() << " ) " << std::endl;
}
