#include "sort_context.hpp"

#include <chrono>
#include <vector>
#include <iostream>

int main() {
  std::srand(std::time(nullptr));

  std::vector<int> vector;
  for(int i = 0; i < 100000; i++)
    vector.push_back(std::rand());

  SortingContext context;
  BubbleSort bubble;
  context.set_sort_algorithm(&bubble);

  auto start = std::chrono::high_resolution_clock::now();
  //context.sort_vector(vector);
  std::sort(vector.begin(), vector.end());
  auto stop = std::chrono::high_resolution_clock::now();

  auto duration = std::chrono::duration_cast<std::chrono::milliseconds >(stop - start);

  std::cout << "Zeit, um den Vector zu sortieren: "
            << duration.count() << " Millisekunden" << std::endl;

  std::cout << "Sortierter Vector: ";
  for(const auto& num: vector){
    //std::cout << num << ' ';
  }
  std::cout << std::endl;
  return 0;
}