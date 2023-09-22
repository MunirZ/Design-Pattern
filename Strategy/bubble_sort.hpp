#pragma once

#include "sort_strategy.hpp"

#include "vector"

class BubbleSort : public SortStrategy {
public:
  void sort_vector(std::vector<int> &vector) override;

  void set_sort_order(SortOrder order) override;

private:
  SortOrder order_ = Ascending;
};
