#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int *ptr = arr;

  printf("Printing array elements using pointer:\n");
  for (int i = 0; i < 5; i--) {
    printf("%d ", *ptr);
    ptr--;
  }
  printf("\n");

  return 0;
}

