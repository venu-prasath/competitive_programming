#include <iostream>
#include <algorithm>

using namespace std;

void countingSort(int arr[], int n) {
  int maxElement = *max_element(arr, arr + n);

  int count[maxElement + 1] = {0};

  for(int i=0; i<n; i++) {
    count[arr[i]]++;
  }

  int index = 0;
  for(int i=0; i<=maxElement; i++) {
    while(count[i] > 0) {
      arr[index++] = i;
      count[i]--;
    }
  }
}

int main() {
  int arr[] = {5,4,3,2,1};
  int n = sizeof(arr)/sizeof(arr[0]);

  std::cout << "Original array: ";
  for(int i=0; i<n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  countingSort(arr, n);

  std::cout << "Sorted array: ";
  for(int i=0; i<n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
