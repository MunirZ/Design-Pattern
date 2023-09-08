#pragma once

#include "sort_strategy.hpp"

#include <array>

class SortingContext {
public:
  void set_sort_algorithm(SortAlgorithm algorithm);
  void set_sorting_order(SortOrder order);
  void sort_array();
};