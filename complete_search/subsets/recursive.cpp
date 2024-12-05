#include <iostream>
#include <bits/stdc++.h>

using namespace  std; 

void generateSubsets(std::vector<int>& arr, int index, std::vector<int>& current, std::vector<std::vector<int>>& subsets) {
  if(index == arr.size()) {
    subsets.push_back(current);
    return;
  }

  //exclude the curr element
  generateSubsets(arr, index+1, current, subsets);

  //include the curr element
  current.push_back(arr[index]);
  generateSubsets(arr, index+1, current, subsets);

  //backtrack
  current.pop_back();
}

std::vector<std::vector<int>> getAllSubsets(std::vector<int>& arr) {
  std::vector<std::vector<int>> subsets;
  std::vector<int> current;
  generateSubsets(arr, 0, current, subsets);
  return subsets;
}

int main() {
  std::vector<int> arr = {1,2,3};
  std::vector<std::vector<int>> subsets = getAllSubsets(arr);
  
  for(const auto& subset: subsets) {
    for(int num: subset) std::cout << num << " ";
    std::cout << "\t";
  }
  std::cout << "\n";
  return 0;
}
