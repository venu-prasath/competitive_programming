#include <iostream>

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int 
main() {
  int input[] = { 5,4,3,2,1 };

  int size = sizeof(input) / sizeof(input[0]);

  for(int i=0; i<size; i++) {
    for(int j=0; j<size-1; j++) {
      if(input[j] > input[j+1]) {
        swap(input[j], input[j+1]);
      }
    }
  }

  for(int i=0; i<size; i++) {
    std::cout << input[i] << " ";
  }


  return 0;
}
