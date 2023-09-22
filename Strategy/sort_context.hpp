#pragma once

#include "sort_strategy.hpp"
#include "bubble_sort.hpp"

class SortingContext {
public:
  ~SortingContext();

  void set_sort_algorithm(SortStrategy* algorithm);
  void set_sorting_order(SortOrder order);

  void sort_vector(std::vector<int> &vector);

private:
  SortStrategy* strategy_;
};