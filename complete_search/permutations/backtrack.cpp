#include <iostream>
#include <bits/stdc++.h>

using namespace  std;

void generatePermutations(std::vector<int>& arr, std::vector<int>& current, std::vector<std::vector<int>>& permutations) {
    if(current.size() == arr.size()) {
        permutations.push_back(current);
        return;
    }

    for(int num: arr) {
        if(std::find(current.begin(), current.end(), num) != current.end()) {
           continue;
        }
        current.push_back(num);
        generatePermutations(arr, current, permutations);
        current.erase(std::remove(current.begin(), current.end(), num), current.end());
    }
}

std::vector<std::vector<int>> getAllPermutations(std::vector<int>& arr) {
    std::vector<std::vector<int>> permutations;
    std::vector<int> current;
    generatePermutations(arr, current, permutations);
    return permutations;
}

int main() {
    std::vector<int> arr = {1,2,3};
    std::vector<std::vector<int>> subsets = getAllPermutations(arr);

    for(const auto& subset: subsets) {
        for(int num: subset) std::cout << num << " ";
        std::cout << "\t";
    }
    std::cout << "\n";
    return 0;
}