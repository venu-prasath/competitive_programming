#include <iostream>
#include <bits/stdc++.h>

std::vector<std::vector<int>> getAllSubsets(std::vector<int>& arr) {
    std::vector<std::vector<int>> subsets;
    int n = arr.size();
    int subsetCount = 1 << n; // 2^n subsets

    for(int i=0; i<subsetCount; i++) {
       std::vector<int> subset;
       for(int j=0; j<n; j++) {
          if(i & (1<<j)) {
             subset.push_back(arr[j]);
          }
       }
       subsets.push_back(subset);
    }

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