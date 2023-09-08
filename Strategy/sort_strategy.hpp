#pragma once

enum SortOrder { Descending, Ascending };

#include <stddef.h>

class SortStrategy {
  template <typename T, size_t size>
  void sort_array(T (&array)[size]);

  void set_sort_order(SortOrder order);
};