#include <iostream>
#include <bits/stdc++.h>

void backtrack(std::vector<int>& arr, int start, std::vector<int>& current, std::vector<std::vector<int>>& subsets) {
    subsets.push_back(current);
    for(int i=start; i<arr.size(); i++) {
       current.push_back(arr[i]);
       backtrack(arr, i+1, current, subsets);
       current.pop_back();
    }
}

std::vector<std::vector<int>> getAllSubsets(std::vector<int>& arr) {
    std::vector<std::vector<int>> subsets;
    std::vector<int> current;
    backtrack(arr, 0, current, subsets);
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