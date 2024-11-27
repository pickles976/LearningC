#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int arr[6] = {1,2,3,4,5,6};

  int sum = 0;
  for (int* i = arr; i < arr + 6; i++) {
    sum += *i;
  }
  printf("%d\n", sum);
}
