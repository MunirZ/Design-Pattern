#pragma once

#include "sort_strategy.hpp"

class BubbleSort : public SortStrategy {
public:
  template <typename T, size_t size>
  void sort_array(T (&array)[size]);

  void set_sort_order(SortOrder order);

private:
  SortOrder order_ = Ascending;
};
