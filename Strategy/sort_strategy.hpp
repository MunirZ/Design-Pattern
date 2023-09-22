#pragma once

enum SortOrder { Descending, Ascending };

#include <cstddef>
#include <vector>

class SortStrategy {
public:
  virtual void sort_vector(std::vector<int>& vector) = 0;

  virtual void set_sort_order(SortOrder order) = 0;
};