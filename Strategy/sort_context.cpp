#include "sort_context.hpp"

#include <utility>

void SortingContext::set_sort_algorithm(SortStrategy* algorithm)
{
  strategy_ = algorithm;
}

void SortingContext::set_sorting_order(SortOrder order)
{
  strategy_->set_sort_order(order);
}

void SortingContext::sort_vector(std::vector<int> &vector)
{
  strategy_->sort_vector(vector);
}

SortingContext::~SortingContext() {
    strategy_ = nullptr;
}
