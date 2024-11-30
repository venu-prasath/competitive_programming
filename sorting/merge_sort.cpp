#include <iostream>

void merge(int arr[], int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

  int L[n1], R[n2];

  for(int i=0; i<n1; i++) L[i] = arr[left+i];
  for(int i=0; i<n2; i++) R[i] = arr[mid+1+i];

  int i=0, j=0, k=left;
  while(i<n1 && j<n2) {
    if(L[i] <= R[j]) {
      arr[k++] = L[i++];
    } else {
      arr[k++] = R[j++];
    }
  }

  while(i<n1) {
    arr[k++] = L[i++];
  }

  while(j<n2) {
    arr[k++] = R[j++];
  }
}

void mergeSort(int arr[], int left, int right) {
  if(left < right) {
    int mid = left + (right-left) /2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
  }
}

int main() {
  int input[] = {5,4,3,2,1};
  int size = sizeof(input)/sizeof(input[0]);

  std::cout << "Original array: ";
  for(int i=0; i<size; i++) std::cout << input[i] << " ";
  std::cout << std::endl;
  mergeSort(input, 0, size-1);

  std::cout << "Sorted array: ";
  for(int i=0; i<size; i++) std::cout << input[i] << " ";
  std::cout << std::endl;

  return 0;
}
