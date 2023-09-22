#include "bubble_sort.hpp"

void BubbleSort::set_sort_order(SortOrder order)
{
  order_ = order;
}

void BubbleSort::sort_vector(std::vector<int> &vector) {
  int i, j;
  bool swapped;
  for (i = 0; i < vector.size(); i++) {
    swapped = false;
    for (j = 0; j < vector.size() - 1; j++) {
      if (vector[j] > vector[j + 1]) {
        std::swap(vector[j], vector[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }
}